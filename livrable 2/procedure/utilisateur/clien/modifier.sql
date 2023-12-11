CREATE PROCEDURE UpdateClient
    @ClientId INT,
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
    UPDATE ADRESSE
    SET
        adr_num = @adr_num,
        adr_rue = @adr_rue,
        adr_postalcode = @adr_postalcode,
        adr_ville = @cit_nom,
        adr_region = @reg_nom,
        adr_pays = @pay_nom,
        adr_type = 'adresse'
    WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM CLIENTS WHERE id_client = @ClientId));

    UPDATE UTILISATEUR
    SET
        uti_nom = @uti_nom,
        uti_prenom = @uti_prenom,
        uti_dateNaissance = @uti_dateNaissance
    WHERE id_utilisateur IN (SELECT id_utilisateur FROM CLIENTS WHERE Id_Client = @ClientId);
END;
/*

-- Exemple d'appel de la procédure stockée UpdateClient
EXEC UpdateClient
    @ClientId = /* Remplacez par l'ID du client à mettre à jour */,
    @adr_num = 'NouveauNum',
    @adr_rue = 'NouvelleRue',
    @adr_postalcode = 'NouveauCodePostal',
    @cit_nom = 'NouvelleVille',
    @reg_nom = 'NouvelleRegion',
    @pay_nom = 'NouveauPays',
    @uti_nom = 'NouveauNom',
    @uti_prenom = 'NouveauPrenom',
    @uti_dateNaissance = 'NouvelleDate';

*/