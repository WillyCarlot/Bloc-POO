CREATE PROCEDURE InsertClient
    @adr_num VARCHAR(50),
    @adr_rue VARCHAR(50),
    @adr_postalcode VARCHAR(50),
    @cit_nom VARCHAR(50),
    @reg_nom VARCHAR(50),
    @pay_nom VARCHAR(50),
    @uti_nom VARCHAR(50),
    @uti_prenom VARCHAR(50),
    @uti_dateNaissance DATE
AS
BEGIN
    DECLARE @NewUserId INT;
    DECLARE @NewAddressId INT;
    DECLARE @NewClientId INT;

    -- Insérer une nouvelle adresse
    INSERT INTO ADRESSE (adr_num, adr_rue, adr_postalcode, adr_ville, adr_region, adr_pays, adr_type)
    VALUES (@adr_num, @adr_rue, @adr_postalcode, @cit_nom, @reg_nom, @pay_nom, 'adresse');
    SET @NewAddressId = SCOPE_IDENTITY();

    -- Insérer un nouvel utilisateur
    INSERT INTO UTILISATEUR (uti_nom, uti_prenom, uti_dateNaissance)
    VALUES (@uti_nom, @uti_prenom, @uti_dateNaissance);
    SET @NewUserId = SCOPE_IDENTITY();

    -- Insérer un nouveau client avec le lien vers l'utilisateur
    INSERT INTO CLIENTS (id_utilisateur)
    VALUES (@NewUserId);
    SET @NewClientId = SCOPE_IDENTITY();

    -- Lier l'utilisateur à l'adresse via la table AVOIR
    INSERT INTO AVOIR (id_utilisateur, id_adresse)
    VALUES (@NewUserId, @NewAddressId);

    -- Retourner l'ID du nouveau client
    SELECT @NewClientId AS NewClientId;
END;


/*

-- Exemple d'appel de la procédure stockée sans déclaration préalable des variables
EXEC InsertClient
    @adr_num = '123',
    @adr_rue = 'Rue de la Paix',
    @adr_postalcode = '12345',
    @cit_nom = 'Ville',
    @reg_nom = 'Region',
    @pay_nom = 'Pays',
    @uti_nom = 'NomUtilisateur',
    @uti_prenom = 'PrenomUtilisateur',
    @uti_dateNaissance = '2000-01-01';


*/