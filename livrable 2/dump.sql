create database projetPOO
go
use projetPOO
go
CREATE TABLE ADRESSE(
   id_adresse INT NOT NULL IDENTITY(1, 1),
   adr_num VARCHAR(50),
   adr_rue VARCHAR(50),
   adr_postalcode VARCHAR(50),
   adr_ville VARCHAR(50),
   adr_region VARCHAR(50),
   adr_pays VARCHAR(50),
   adr_type VARCHAR(50),
   PRIMARY KEY(id_adresse)
);

CREATE TABLE ARTICLES(
   Id_Article INT NOT NULL IDENTITY(1, 1),
   art_designation VARCHAR(50),
   PRIMARY KEY(Id_Article)
);

CREATE TABLE UTILISATEUR(
   id_utilisateur INT NOT NULL IDENTITY(1, 1),
   uti_nom VARCHAR(50),
   uti_prenom VARCHAR(50),
   uti_dateNaissance DATE,
   PRIMARY KEY(id_utilisateur)
);

CREATE TABLE STOCK(
   id_stock INT NOT NULL IDENTITY(1, 1),
   sto_seuilReapprovis INT,
   sto_pourcentage FLOAT,
   id_adresse INT NOT NULL,
   PRIMARY KEY(id_stock),
   UNIQUE(id_adresse),
   FOREIGN KEY(id_adresse) REFERENCES ADRESSE(id_adresse)
);

CREATE TABLE PRIX(
   id_prix INT NOT NULL IDENTITY(1, 1),
   date_changement DATE,
   pri_prix FLOAT,
   PRIMARY KEY(id_prix)
);

CREATE TABLE PERSONNEL(
   id_Personnel INT NOT NULL IDENTITY(1, 1),
   per_supHierarchique INT,
   per_NiveauHierarchique INT,
   per_dateDembauche DATE,
   id_utilisateur INT NOT NULL,
   PRIMARY KEY(id_Personnel),
   UNIQUE(id_utilisateur),
   FOREIGN KEY(id_utilisateur) REFERENCES UTILISATEUR(id_utilisateur)
);

CREATE TABLE CLIENTS(
   Id_Client INT NOT NULL IDENTITY(1, 1),
   cli_premierAchat DATE,
   id_utilisateur INT NOT NULL,
   PRIMARY KEY(Id_Client),
   UNIQUE(id_utilisateur),
   FOREIGN KEY(id_utilisateur) REFERENCES UTILISATEUR(id_utilisateur)
);

CREATE TABLE COMMANDES(
   Id_Commande INT NOT NULL IDENTITY(1, 1),
   com_ref VARCHAR(50),
   com_dateLivraison DATE,
   com_dateEmission DATE,
   com_datePaiement DATE,
   com_moyenPaiement VARCHAR(50),
   Id_Client INT NOT NULL,
   PRIMARY KEY(Id_Commande),
   FOREIGN KEY(Id_Client) REFERENCES CLIENTS(Id_Client)
);

CREATE TABLE CONTENIR(
   Id_Commande INT,
   Id_Article INT,
   PRIMARY KEY(Id_Commande, Id_Article),
   FOREIGN KEY(Id_Commande) REFERENCES COMMANDES(Id_Commande),
   FOREIGN KEY(Id_Article) REFERENCES ARTICLES(Id_Article)
);

CREATE TABLE AVOIR(
   id_adresse INT,
   id_utilisateur INT,
   PRIMARY KEY(id_adresse, id_utilisateur),
   FOREIGN KEY(id_adresse) REFERENCES ADRESSE(id_adresse),
   FOREIGN KEY(id_utilisateur) REFERENCES UTILISATEUR(id_utilisateur)
);

CREATE TABLE stocker(
   Id_Article INT,
   sto_quantite INT,
   id_stock INT,
   PRIMARY KEY(Id_Article, id_stock),
   FOREIGN KEY(Id_Article) REFERENCES ARTICLES(Id_Article),
   FOREIGN KEY(id_stock) REFERENCES STOCK(id_stock)
);

CREATE TABLE posseder(
   Id_Article INT,
   id_prix INT,
   PRIMARY KEY(Id_Article, id_prix),
   FOREIGN KEY(Id_Article) REFERENCES ARTICLES(Id_Article),
   FOREIGN KEY(id_prix) REFERENCES PRIX(id_prix)
);

go
-- Insertion dans la table ADRESSE (suite)
INSERT INTO ADRESSE (adr_num, adr_rue, adr_postalcode, adr_ville, adr_region, adr_pays, adr_type)
VALUES
  ('42', 'Boulevard des Arts', '98765', 'VilleC', 'RegionC', 'PaysC', 'TypeC'),
  ('23', 'Avenue de la Liberté', '54321', 'VilleD', 'RegionD', 'PaysD', 'TypeD'),
  ('7', 'Rue de la Nature', '12345', 'VilleE', 'RegionE', 'PaysE', 'TypeE'),
  ('88', 'Avenue du Progrès', '67890', 'VilleF', 'RegionF', 'PaysF', 'TypeF'),
  ('13', 'Rue du Savoir', '11223', 'VilleG', 'RegionG', 'PaysG', 'TypeG'),
  ('55', 'Boulevard de la Joie', '44556', 'VilleH', 'RegionH', 'PaysH', 'TypeH'),
  ('21', 'Avenue de lAvenir', '78901', 'VilleI', 'RegionI', 'PaysI', 'TypeI'),
  ('34', 'Rue de la Sérénité', '23456', 'VilleJ', 'RegionJ', 'PaysJ', 'TypeJ'),
  ('77', 'Boulevard de la Paix', '56789', 'VilleK', 'RegionK', 'PaysK', 'TypeK'),
  ('9', 'Avenue de lHarmonie', '34567', 'VilleL', 'RegionL', 'PaysL', 'TypeL');

-- Insertion dans la table ARTICLES (suite)
INSERT INTO ARTICLES (art_designation)
VALUES
  ('Montre'),
  ('Livre'),
  ('Radio'),
  ('DVD'),
  ('Télévision'),
  ('Micro-onde'),
  ('Poèle'),
  ('Ordinateur'),
  ('Fourchette'),
  ('Lampe');

-- Insertion dans la table UTILISATEUR (suite)
INSERT INTO UTILISATEUR (uti_nom, uti_prenom, uti_dateNaissance)
VALUES
  ('Le Nozahic', 'Corentin', '2004-04-29'),
  ('Toubeau', 'Mathis', '2004-11-12'),
  ('Lepetit', 'Augustin', '2003-09-24'),
  ('Carlot', 'Willy', '2004-05-27'),
  ('Smith', 'Will', '1968-09-25'),
  ('Depp', 'Johnny', '1963-06-09'),
  ('Johansson', 'Scarlett', '1984-11-22'),
  ('Freeman', 'Morgan', '1980-06-01'),
  ('Watson', 'Emma', '1990-04-15'),
  ('Ninay', 'Pierre', '1987-09-10');

-- Insertion dans la table STOCK (suite)
INSERT INTO STOCK (sto_seuilReapprovis, sto_pourcentage, id_adresse) /*ereur */
VALUES
  (50, 0.6, 3),
  (20, 0.9, 4),
  (80, 0.5, 5),
  (30, 0.7, 6),
  (60, 0.8, 7),
  (40, 0.75, 8),
  (70, 0.65, 9),
  (100, 0.4, 10),
  (25, 0.85, 1),
  (45, 0.55, 2);


INSERT INTO PRIX (date_changement, pri_prix)
VALUES
  ('2023-01-01', 199.95),
  ('2023-02-01', 18.75),
  ('2023-03-01', 45.5),
  ('2023-04-01', 19.9),
  ('2023-05-01', 1999.99),
  ('2023-06-01', 65.5),
  ('2023-07-01', 23.45),
  ('2023-08-01', 2500.0),
  ('2023-09-01', 2.5),
  ('2023-10-01', 19.68);

-- Insertion dans la table PERSONNEL
INSERT INTO PERSONNEL (per_supHierarchique, per_NiveauHierarchique, per_dateDembauche, id_utilisateur)
VALUES
  (1, 2, '2010-01-15', 1),
  (3, 4, '2015-05-20', 2),
  (5, 6, '2018-02-10', 3),
  (7, 8, '2012-09-03', 4),
  (9, 10, '2016-07-22', 5),
  (11, 12, '2014-08-18', 6),
  (2, 3, '2011-11-30', 7),
  (4, 5, '2013-04-12', 8),
  (6, 7, '2017-06-25', 9),
  (8, 9, '2019-10-08', 10);

-- Insertion dans la table CLIENTS
INSERT INTO CLIENTS (cli_premierAchat, id_utilisateur)
VALUES
  ('2020-03-10', 1),
  ('2018-12-05', 2),
  ('2019-08-20', 3),
  ('2021-02-15', 4),
  ('2017-07-30', 5),
  ('2016-04-25', 6),
  ('2022-01-12', 7),
  ('2015-06-18', 8),
  ('2014-09-22', 9),
  ('2023-04-05', 10);

-- Insertion dans la table COMMANDES
INSERT INTO COMMANDES (com_ref, com_dateLivraison, com_dateEmission, com_datePaiement, com_moyenPaiement, Id_Client)
VALUES
  ('REF123', '2023-01-20', '2023-01-15', '2023-01-16', 'Carte de crédit', 1),
  ('REF456', '2023-02-25', '2023-02-20', '2023-02-21', 'PayPal', 2),
  ('REF789', '2023-03-15', '2023-03-10', '2023-03-11', 'Virement bancaire', 3),
  ('REF101', '2023-04-30', '2023-04-25', '2023-04-26', 'Chèque', 4),
  ('REF112', '2023-05-18', '2023-05-12', '2023-05-13', 'Carte de débit', 5),
  ('REF131', '2023-06-22', '2023-06-15', '2023-06-16', 'Espèces', 6),
  ('REF141', '2023-07-10', '2023-07-05', '2023-07-06', 'Virement bancaire', 7),
  ('REF151', '2023-08-28', '2023-08-22', '2023-08-23', 'Chèque', 8),
  ('REF162', '2023-09-15', '2023-09-10', '2023-09-11', 'Carte de crédit', 9),
  ('REF173', '2023-10-05', '2023-10-01', '2023-10-02', 'PayPal', 10);

-- Insertion dans la table CONTENIR
INSERT INTO CONTENIR (Id_Commande, Id_Article)
VALUES
  (1, 1),
  (1, 2),
  (2, 3),
  (2, 4),
  (3, 5),
  (3, 6),
  (4, 7),
  (4, 8),
  (5, 9),
  (5, 10);

-- Insertion dans la table AVOIR
INSERT INTO AVOIR (id_adresse, id_utilisateur)
VALUES
  (1, 1),
  (2, 2),
  (3, 3),
  (4, 4),
  (5, 5),
  (6, 6),
  (7, 7),
  (8, 8),
  (9, 9),
  (10, 10);

-- Insertion dans la table stocker
INSERT INTO stocker (Id_Article,sto_quantite, id_stock)
VALUES
  (1, 500, 1),
  (2,59,1),
  (2, 200, 2),
  (3, 800, 3),
  (4, 300, 4),
  (5, 600, 5),
  (6, 400, 6),
  (7, 700, 7),
  (8, 1000, 8),
  (9, 250, 9),
  (10, 450, 10);

-- Insertion dans la table posseder
INSERT INTO posseder (Id_Article, id_prix)
VALUES
  (1, 1),
  (2, 2),
  (3, 3),
  (4, 4),
  (5, 5),
  (6, 6),
  (7, 7),
  (8, 8),
  (9, 9),
  (10, 10);

go
--------------------------aficher client -------------------------------


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


go

---------------------------------------------------------

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





------------------------------------------------------------------------
go
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



-------------------------------------------------------------------------------
go
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

go
/* ////////////////////////////////////////////////personnel//////////////////////// */

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

go
-------------------------------------------------------------------------------------------

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

go
---------------------------------------------------------------
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
-----------------------------------------------------------------
go
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


























/* //////////////////////////////////////////////stock et article///////////////////////////////// */
----------------------------------------------------
go
CREATE OR ALTER PROCEDURE afficherInformationArticleStock
    @id_article INT = NULL,
    @id_stock INT = NULL
AS
BEGIN
    -- Si les deux ID sont nuls, ne rien afficher
    IF @id_article IS NOT NULL OR @id_stock IS NOT NULL
    BEGIN
        -- Si l'ID de l'article est fourni, mais pas l'ID du stock
        IF @id_article IS NOT NULL AND @id_stock IS NULL
        BEGIN
            -- Afficher dans quel stock l'article est disponible
            SELECT
                S.id_stock,
                ST.sto_quantite,  -- Utiliser la colonne sto_quantite de la table stocker
                S.sto_seuilReapprovis,
                S.sto_pourcentage,
                A.Id_Article,
                A.art_designation,
                P.pri_prix AS prix_recent
            FROM
                STOCK AS S
            JOIN
                stocker AS ST ON S.id_stock = ST.id_stock
            JOIN
                ARTICLES AS A ON ST.Id_Article = A.Id_Article
            OUTER APPLY (
                SELECT TOP 1
                    P.pri_prix
                FROM
                    posseder AS PO
                JOIN
                    PRIX AS P ON PO.id_prix = P.id_prix
                WHERE
                    PO.Id_Article = A.Id_Article
                ORDER BY
                    P.date_changement DESC
            ) AS P
            WHERE
                A.Id_Article = @id_article
            ORDER BY
                S.id_stock, A.Id_Article;
        END
        -- Si l'ID du stock est fourni, mais pas l'ID de l'article
        ELSE IF @id_stock IS NOT NULL AND @id_article IS NULL
        BEGIN
            -- Afficher les articles dans le stock spécifié
            SELECT
                S.id_stock,
                ST.sto_quantite,  -- Utiliser la colonne sto_quantite de la table stocker
                S.sto_seuilReapprovis,
                S.sto_pourcentage,
                A.Id_Article,
                A.art_designation,
                P.pri_prix AS prix_recent
            FROM
                STOCK AS S
            JOIN
                stocker AS ST ON S.id_stock = ST.id_stock
            JOIN
                ARTICLES AS A ON ST.Id_Article = A.Id_Article
            OUTER APPLY (
                SELECT TOP 1
                    P.pri_prix
                FROM
                    posseder AS PO
                JOIN
                    PRIX AS P ON PO.id_prix = P.id_prix
                WHERE
                    PO.Id_Article = A.Id_Article
                ORDER BY
                    P.date_changement DESC
            ) AS P
            WHERE
                S.id_stock = @id_stock
            ORDER BY
                S.id_stock, A.Id_Article;
        END
    END
END;


go
--------------------------------------------------------------
CREATE OR ALTER PROCEDURE afficherStockAvecArticles
AS
BEGIN
    SELECT
        S.id_stock,
        ST.sto_quantite,  -- Utiliser la colonne sto_quantite de la table stocker
        S.sto_seuilReapprovis,
        S.sto_pourcentage,
        STRING_AGG(A.Id_Article, ',') AS Id_Articles
    FROM
        STOCK AS S
    LEFT JOIN
        stocker AS ST ON S.id_stock = ST.id_stock
    LEFT JOIN
        ARTICLES AS A ON ST.Id_Article = A.Id_Article
    GROUP BY
        S.id_stock, ST.sto_quantite, S.sto_seuilReapprovis, S.sto_pourcentage;  -- Utiliser ST.sto_quantite
END;


------------------------------------------------------------------
go
CREATE OR ALTER PROCEDURE afficher_Articles
AS
BEGIN
    WITH PrixRanked AS (
        SELECT
            ARTICLES.Id_Article,
            ARTICLES.art_designation,
            PRIX.pri_prix,
            PRIX.date_changement,
            ROW_NUMBER() OVER (PARTITION BY ARTICLES.Id_Article ORDER BY PRIX.date_changement DESC) AS RowNum
        FROM
            ARTICLES
        LEFT JOIN
            posseder ON ARTICLES.Id_Article = posseder.Id_Article
        LEFT JOIN
            PRIX ON posseder.id_prix = PRIX.id_prix
    )
    SELECT
        Id_Article,
        art_designation,
        pri_prix,
        date_changement
    FROM
        PrixRanked
    WHERE
        RowNum = 1;
END;


go
------------------------------------------------------------------
CREATE OR ALTER PROCEDURE ajouter_ArticleEtPrix
    @nomArticle VARCHAR(50),
    @prix FLOAT
AS
BEGIN
    DECLARE @nouvelIdArticle INT;
    DECLARE @nouvelIdPrix INT;

    -- Ajouter un nouvel article
    INSERT INTO ARTICLES (art_designation)
    VALUES (@nomArticle);

    -- Récupérer l'ID du nouvel article
    SET @nouvelIdArticle = SCOPE_IDENTITY();

    -- Ajouter un nouveau prix dans la table PRIX
    INSERT INTO PRIX (date_changement, pri_prix)
    VALUES (GETDATE(), @prix);

    -- Récupérer l'ID du nouveau prix
    SET @nouvelIdPrix = SCOPE_IDENTITY();

    -- Lier le nouvel article au nouveau prix dans la table POSSÉDER
    INSERT INTO posseder (Id_Article, id_prix)
    VALUES (@nouvelIdArticle, @nouvelIdPrix);
END;

go 
---------------------------------------------------------------------------

CREATE OR ALTER PROCEDURE modifier_ArticleAvecNouveauPrix
    @Id_Article INT,
    @nouveauNom VARCHAR(50),
    @nouveauPrix FLOAT
AS
BEGIN
    DECLARE @nouveauIdPrix INT;

    -- Mettre à jour le nom de l'article
    UPDATE ARTICLES
    SET
        art_designation = @nouveauNom
    WHERE
        Id_Article = @Id_Article;

    -- Insérer un nouveau prix dans la table PRIX
    INSERT INTO PRIX (date_changement, pri_prix)
    VALUES (GETDATE(), @nouveauPrix);

    -- Récupérer l'ID du nouveau prix
    SET @nouveauIdPrix = SCOPE_IDENTITY();

    -- Mettre à jour la table POSSÉDER avec le nouveau prix
    UPDATE posseder
    SET
        id_prix = @nouveauIdPrix
    WHERE
        Id_Article = @Id_Article;
END;


go
-------------------------------------------------
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


-----------------------------------------------------------------------------
go 
CREATE or alter PROCEDURE ModifierCommande
    @IdCommande INT,
    @RefCommande VARCHAR(50),
    @DateLivraison DATE,
    @DateEmission DATE,
    @DatePaiement DATE,
    @MoyenPaiement VARCHAR(50),
    @IdClient INT,
    @IdArticles VARCHAR(MAX)  -- Chaîne contenant les ID d'articles séparés par des virgules
AS
BEGIN
    -- Mettre à jour les informations de la commande
    UPDATE COMMANDES
    SET
        com_ref = @RefCommande,
        com_dateLivraison = @DateLivraison,
        com_dateEmission = @DateEmission,
        com_datePaiement = @DatePaiement,
        com_moyenPaiement = @MoyenPaiement,
        Id_Client = @IdClient
    WHERE
        Id_Commande = @IdCommande;

    -- Supprimer les anciens articles associés à la commande
    DELETE FROM CONTENIR
    WHERE
        Id_Commande = @IdCommande;

    -- Insérer les nouveaux ID d'articles associés dans la table CONTENIR
    INSERT INTO CONTENIR (Id_Commande, Id_Article)
    SELECT @IdCommande, CAST(value AS INT)
    FROM STRING_SPLIT(@IdArticles, ',');

END;
--------------------------------------------
go
CREATE or alter PROCEDURE InsererNouvelleCommande
    @RefCommande VARCHAR(50),
    @DateLivraison DATE,
    @DateEmission DATE,
    @DatePaiement DATE,
    @MoyenPaiement VARCHAR(50),
    @IdClient INT,
    @IdArticles VARCHAR(MAX)  -- Chaîne contenant les ID d'articles séparés par des virgules
AS
BEGIN
    -- Insérer la nouvelle commande
    INSERT INTO COMMANDES (com_ref, com_dateLivraison, com_dateEmission, com_datePaiement, com_moyenPaiement, Id_Client)
    VALUES (@RefCommande, @DateLivraison, @DateEmission, @DatePaiement, @MoyenPaiement, @IdClient);

    -- Récupérer l'ID de la nouvelle commande
    DECLARE @NouvelleCommandeId INT;
    SET @NouvelleCommandeId = SCOPE_IDENTITY();

    -- Insérer les ID d'articles associés dans la table CONTENIR
    INSERT INTO CONTENIR (Id_Commande, Id_Article)
    SELECT @NouvelleCommandeId, CAST(value AS INT)
    FROM STRING_SPLIT(@IdArticles, ',');

END;


go
----------------------------------

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


