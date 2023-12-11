CREATE OR ALTER PROCEDURE afficher_Articles
AS
BEGIN
    WITH PrixRanked AS (
        SELECT
            ARTICLES.Id_Article,
            ARTICLES.art_designation,
            PRIX.pri_prix,
            PRIX.date_changement,
            ROW_NUMBER() OVER (PARTITION BY ARTICLES.Id_Article ORDER BY PRIX.date_changement DESC) AS RowNum
        FROM
            ARTICLES
        LEFT JOIN
            posseder ON ARTICLES.Id_Article = posseder.Id_Article
        LEFT JOIN
            PRIX ON posseder.id_prix = PRIX.id_prix
    )
    SELECT
        Id_Article,
        art_designation,
        pri_prix,
        date_changement
    FROM
        PrixRanked
    WHERE
        RowNum = 1;
END;


/*
EXEC afficher_Articles;
*/