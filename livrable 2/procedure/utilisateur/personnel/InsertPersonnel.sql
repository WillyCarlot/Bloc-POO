CREATE or alter PROC InsertPersonnel
    @adr_num VARCHAR(50),
    @adr_rue VARCHAR(50),
    @adr_postalcode VARCHAR(50),
    @cit_nom VARCHAR(50),
    @reg_nom VARCHAR(50),
    @pay_nom VARCHAR(50),
    @uti_nom VARCHAR(50),
    @uti_prenom VARCHAR(50),
    @uti_dateNaissance DATE,
    @per_supHierarchique INT,
    @per_NiveauHierarchique INT,
    @per_dateEmbauche DATE
AS
BEGIN
    DECLARE @NewUserId INT;
    DECLARE @NewAddressId INT;
    DECLARE @NewPersonnelId INT;

    -- Insert a new address
    INSERT INTO ADRESSE (adr_num, adr_rue, adr_postalcode, adr_ville, adr_region, adr_pays, adr_type)
    VALUES (@adr_num, @adr_rue, @adr_postalcode, @cit_nom, @reg_nom, @pay_nom, 'adresse');
    SET @NewAddressId = SCOPE_IDENTITY();

    -- Insert a new user
    INSERT INTO UTILISATEUR (uti_nom, uti_prenom, uti_dateNaissance)
    VALUES (@uti_nom, @uti_prenom, @uti_dateNaissance);
    SET @NewUserId = SCOPE_IDENTITY();

    -- Insert a new personnel with a link to the user
    INSERT INTO PERSONNEL (per_supHierarchique, per_NiveauHierarchique, per_dateDembauche, id_utilisateur)
    VALUES (@per_supHierarchique, @per_NiveauHierarchique, @per_dateEmbauche, @NewUserId);
    SET @NewPersonnelId = SCOPE_IDENTITY();

    -- Insert a new client with a link to the user
    INSERT INTO CLIENTS (id_utilisateur)
    VALUES (@NewUserId);

    -- Link the user to the address via the AVOIR table
    INSERT INTO AVOIR (id_utilisateur, id_adresse)
    VALUES (@NewUserId, @NewAddressId);

END;

/*
EXEC InsertPersonnel
    @adr_num = '123',
    @adr_rue = 'Nom de la Rue',
    @adr_postalcode = 'Code Postal',
    @cit_nom = 'Nom de la Ville',
    @reg_nom = 'Nom de la Région',
    @pay_nom = 'Nom du Pays',
    @uti_nom = 'Nom de l Utilisateur',
    @uti_prenom = 'Prénom de l Utilisateur',
    @uti_dateNaissance = '2000-01-01',
    @per_supHierarchique = 1, -- Remplacez par l'ID du superviseur
    @per_NiveauHierarchique = 2,
    @per_dateEmbauche = '2023-01-01';

*/