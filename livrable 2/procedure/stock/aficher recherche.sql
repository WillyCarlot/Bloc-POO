CREATE or alter PROCEDURE afficherInformationArticleStock
    @id_article INT = NULL,
    @id_stock INT = NULL
AS
BEGIN
    -- Si les deux ID sont nuls, ne rien afficher
    IF @id_article IS NOT NULL OR @id_stock IS NOT NULL
    BEGIN
        -- Si l'ID de l'article est fourni, mais pas l'ID du stock
        IF @id_article IS NOT NULL AND @id_stock IS NULL
        BEGIN
            -- Afficher dans quel stock l'article est disponible
            SELECT
                S.id_stock,
                S.sto_quantite,
                S.sto_seuilReapprovis,
                S.sto_pourcentage,
                A.Id_Article,
                A.art_designation,
                P.pri_prix AS prix_recent
            FROM
                STOCK AS S
            JOIN
                stocker AS ST ON S.id_stock = ST.id_stock
            JOIN
                ARTICLES AS A ON ST.Id_Article = A.Id_Article
            OUTER APPLY (
                SELECT TOP 1
                    P.pri_prix
                FROM
                    posseder AS PO
                JOIN
                    PRIX AS P ON PO.id_prix = P.id_prix
                WHERE
                    PO.Id_Article = A.Id_Article
                ORDER BY
                    P.date_changement DESC
            ) AS P
            WHERE
                A.Id_Article = @id_article
            ORDER BY
                S.id_stock, A.Id_Article;
        END
        -- Si l'ID du stock est fourni, mais pas l'ID de l'article
        ELSE IF @id_stock IS NOT NULL AND @id_article IS NULL
        BEGIN
            -- Afficher les articles dans le stock spécifié
            SELECT
                S.id_stock,
                S.sto_quantite,
                S.sto_seuilReapprovis,
                S.sto_pourcentage,
                A.Id_Article,
                A.art_designation,
                P.pri_prix AS prix_recent
            FROM
                STOCK AS S
            JOIN
                stocker AS ST ON S.id_stock = ST.id_stock
            JOIN
                ARTICLES AS A ON ST.Id_Article = A.Id_Article
            OUTER APPLY (
                SELECT TOP 1
                    P.pri_prix
                FROM
                    posseder AS PO
                JOIN
                    PRIX AS P ON PO.id_prix = P.id_prix
                WHERE
                    PO.Id_Article = A.Id_Article
                ORDER BY
                    P.date_changement DESC
            ) AS P
            WHERE
                S.id_stock = @id_stock
            ORDER BY
                S.id_stock, A.Id_Article;
        END
    END
END;
/*

EXEC afficherInformationArticleStock @id_article = 1;
EXEC afficherInformationArticleStock @id_stock = 1;

*/