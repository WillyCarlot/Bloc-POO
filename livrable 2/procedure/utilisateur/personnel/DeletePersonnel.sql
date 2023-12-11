CREATE PROCEDURE DeletePersonnel
    @PersonnelId INT
AS
BEGIN
    -- Supprimer le lien de l'utilisateur avec l'adresse via la table AVOIR
    DELETE FROM AVOIR
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelId);

    -- Supprimer le lien du client avec l'utilisateur
    DELETE FROM CLIENTS
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelId);

    -- Supprimer le lien du personnel avec l'utilisateur
    DELETE FROM PERSONNEL
    WHERE id_Personnel = @PersonnelId;

    -- Supprimer l'utilisateur
    DELETE FROM UTILISATEUR
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelId);

    -- Supprimer l'adresse
    DELETE FROM ADRESSE
    WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelId));
END;
/*

EXEC DeletePersonnel @PersonnelId = 13;

*/