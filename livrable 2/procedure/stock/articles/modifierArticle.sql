CREATE OR ALTER PROCEDURE modifier_ArticleAvecNouveauPrix
    @Id_Article INT,
    @nouveauNom VARCHAR(50),
    @nouveauPrix FLOAT
AS
BEGIN
    DECLARE @nouveauIdPrix INT;

    -- Mettre à jour le nom de l'article
    UPDATE ARTICLES
    SET
        art_designation = @nouveauNom
    WHERE
        Id_Article = @Id_Article;

    -- Insérer un nouveau prix dans la table PRIX
    INSERT INTO PRIX (date_changement, pri_prix)
    VALUES (GETDATE(), @nouveauPrix);

    -- Récupérer l'ID du nouveau prix
    SET @nouveauIdPrix = SCOPE_IDENTITY();

    -- Mettre à jour la table POSSÉDER avec le nouveau prix
    UPDATE posseder
    SET
        id_prix = @nouveauIdPrix
    WHERE
        Id_Article = @Id_Article;
END;


/*
EXEC modifier_ArticleAvecNouveauPrix
    @Id_Article = 5,
    @nouveauNom = 'cage a oiso',
    @nouveauPrix = 18.6;
*/