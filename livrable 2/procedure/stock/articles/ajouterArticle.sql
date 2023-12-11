CREATE OR ALTER PROCEDURE ajouter_ArticleEtPrix
    @nomArticle VARCHAR(50),
    @prix FLOAT
AS
BEGIN
    DECLARE @nouvelIdArticle INT;
    DECLARE @nouvelIdPrix INT;

    -- Ajouter un nouvel article
    INSERT INTO ARTICLES (art_designation)
    VALUES (@nomArticle);

    -- Récupérer l'ID du nouvel article
    SET @nouvelIdArticle = SCOPE_IDENTITY();

    -- Ajouter un nouveau prix dans la table PRIX
    INSERT INTO PRIX (date_changement, pri_prix)
    VALUES (GETDATE(), @prix);

    -- Récupérer l'ID du nouveau prix
    SET @nouvelIdPrix = SCOPE_IDENTITY();

    -- Lier le nouvel article au nouveau prix dans la table POSSÉDER
    INSERT INTO posseder (Id_Article, id_prix)
    VALUES (@nouvelIdArticle, @nouvelIdPrix);
END;

/*

EXEC ajouter_ArticleEtPrix
    @nomArticle = 'NouvelArticle',
    @prix = 19.99;

*/