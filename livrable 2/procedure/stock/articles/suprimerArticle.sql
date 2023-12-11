CREATE OR ALTER PROCEDURE supprimer_ArticleEtPrix
    @Id_Article INT
AS
BEGIN
    BEGIN TRY
        -- Commencer la transaction
        BEGIN TRANSACTION;

        -- Supprimer les enregistrements de la table posseder liés à l'article
        DELETE FROM posseder WHERE Id_Article = @Id_Article;

        -- Supprimer les enregistrements de la table stocker liés à l'article
        DELETE FROM stocker WHERE Id_Article = @Id_Article;

        -- Supprimer les enregistrements de la table CONTENIR liés à l'article
        DELETE FROM CONTENIR WHERE Id_Article = @Id_Article;

        -- Supprimer l'article de la table ARTICLES
        DELETE FROM ARTICLES WHERE Id_Article = @Id_Article;

        -- Valider la transaction
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Propager l'erreur
        THROW;
    END CATCH;
END;



/*

EXEC supprimer_ArticleEtPrix @Id_Article = 1;

*/

