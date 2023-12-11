CREATE PROCEDURE SelectHumain
AS
BEGIN
    SELECT
        CLIENTS.*,
        UTILISATEUR.uti_nom,
        UTILISATEUR.uti_prenom,
        UTILISATEUR.uti_dateNaissance,
        ADRESSE.adr_num,
        ADRESSE.adr_rue,
        ADRESSE.adr_postalcode,
        ADRESSE.adr_ville,
        ADRESSE.adr_region,
        ADRESSE.adr_pays
    FROM
        CLIENTS
    JOIN
        AVOIR ON CLIENTS.id_utilisateur = AVOIR.id_utilisateur
    JOIN
        UTILISATEUR ON AVOIR.id_utilisateur = UTILISATEUR.id_utilisateur
    JOIN
        ADRESSE ON AVOIR.id_adresse = ADRESSE.id_adresse;
END;

/*

exec SelectHumain;

*/