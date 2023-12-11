CREATE PROCEDURE UpdatePersonnel
    @PersonnelId INT,
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
    UPDATE ADRESSE
    SET
        adr_num = @adr_num,
        adr_rue = @adr_rue,
        adr_postalcode = @adr_postalcode,
        adr_ville = @cit_nom,
        adr_region = @reg_nom,
        adr_pays = @pay_nom,
        adr_type = 'adresse'
    WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelId));

    UPDATE UTILISATEUR
    SET
        uti_nom = @uti_nom,
        uti_prenom = @uti_prenom,
        uti_dateNaissance = @uti_dateNaissance
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelId);

    UPDATE PERSONNEL
    SET
        per_supHierarchique = @per_supHierarchique,
        per_NiveauHierarchique = @per_NiveauHierarchique,
        per_dateDembauche = @per_dateEmbauche
    WHERE id_Personnel = @PersonnelId;
END;

/*

EXEC UpdatePersonnel
    @PersonnelId = /* Remplacez par l'ID du personnel à mettre à jour */,
    @adr_num = /* Remplacez par la nouvelle valeur */,
    @adr_rue = /* Remplacez par la nouvelle valeur */,
    @adr_postalcode = /* Remplacez par la nouvelle valeur */,
    @cit_nom = /* Remplacez par la nouvelle valeur */,
    @reg_nom = /* Remplacez par la nouvelle valeur */,
    @pay_nom = /* Remplacez par la nouvelle valeur */,
    @uti_nom = /* Remplacez par la nouvelle valeur */,
    @uti_prenom = /* Remplacez par la nouvelle valeur */,
    @uti_dateNaissance = /* Remplacez par la nouvelle valeur */,
    @per_supHierarchique = /* Remplacez par la nouvelle valeur */,
    @per_NiveauHierarchique = /* Remplacez par la nouvelle valeur */,
    @per_dateEmbauche = /* Remplacez par la nouvelle valeur */;


*/