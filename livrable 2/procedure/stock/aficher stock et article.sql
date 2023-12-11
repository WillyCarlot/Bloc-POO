CREATE or alter PROCEDURE afficherStockAvecArticles
AS
BEGIN
    SELECT
        S.id_stock,
        S.sto_quantite,
        S.sto_seuilReapprovis,
        S.sto_pourcentage,
        STRING_AGG(A.Id_Article, ',') AS Id_Articles
    FROM
        STOCK AS S
    LEFT JOIN
        stocker AS ST ON S.id_stock = ST.id_stock
    LEFT JOIN
        ARTICLES AS A ON ST.Id_Article = A.Id_Article
    GROUP BY
        S.id_stock, S.sto_quantite, S.sto_seuilReapprovis, S.sto_pourcentage;
END;

/*
EXEC afficherStockAvecArticles;
*/