CREATE or alter PROC afficher_personnel
AS
BEGIN
    SELECT P.id_Personnel, U.uti_nom, U.uti_prenom, A.adr_num, A.adr_rue, A.adr_postalcode, A.adr_ville, A.adr_region, A.adr_pays,
           P.per_supHierarchique, P.per_dateDembauche, P.per_NiveauHierarchique
    FROM PERSONNEL P
    JOIN UTILISATEUR U ON P.id_utilisateur = U.id_utilisateur
    JOIN AVOIR AV ON AV.id_utilisateur = U.id_utilisateur
    JOIN ADRESSE A ON AV.id_adresse = A.id_adresse;
END;

/*
exec afficher_personnel
*/