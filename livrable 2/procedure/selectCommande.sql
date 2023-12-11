CREATE PROCEDURE SelectCommandes
AS
BEGIN
    SELECT
        c.*,
        STRING_AGG(CONVERT(VARCHAR, co.Id_Article), ', ') AS ArticlesAssocies
    FROM
        COMMANDES c
    LEFT JOIN
        CONTENIR co ON c.Id_Commande = co.Id_Commande
    GROUP BY
        c.Id_Commande, c.com_ref, c.com_dateLivraison, c.com_dateEmission, c.com_datePaiement, c.com_moyenPaiement, c.Id_Client;
END;
/*

exec SelectCommandes;
*/