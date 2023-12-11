CREATE PROCEDURE DeleteClient
    @ClientId INT
AS
BEGIN
    -- Supprimer le lien de l'utilisateur avec l'adresse via la table AVOIR
    DELETE FROM AVOIR
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @ClientId);

    -- Supprimer le lien du client avec l'utilisateur
    DELETE FROM CLIENTS
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @ClientId);

    -- Supprimer le lien du personnel avec l'utilisateur
    DELETE FROM PERSONNEL
    WHERE id_Personnel = @ClientId;

    -- Supprimer l'utilisateur
    DELETE FROM UTILISATEUR
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @ClientId);

    -- Supprimer l'adresse
    DELETE FROM ADRESSE
    WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @ClientId));
END;


/*
-- Exemple d'appel de la procédure stockée DeleteClient sans déclaration préalable des variables
EXEC DeleteClient
    @ClientId = /* Remplacez par l'ID du client à supprimer */;


*/