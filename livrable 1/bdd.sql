create database projetPOO
CREATE TABLE ADRESSE(
   id_adresse INT NOT NULL IDENTITY(1, 1),
   adr_num VARCHAR(50),
   adr_rue VARCHAR(50),
   adr_postalcode VARCHAR(50),
   art_ville VARCHAR(50),
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
   sto_quantite INT,
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
   id_stock INT,
   PRIMARY KEY(Id_Article, id_stock),
   FOREIGN KEY(Id_Article) REFERENCES ARTICLES(Id_Article),
   FOREIGN KEY(id_stock) REFERENCES STOCK(id_stock)
);

CREATE TABLE poseder(
   Id_Article INT,
   id_prix INT,
   PRIMARY KEY(Id_Article, id_prix),
   FOREIGN KEY(Id_Article) REFERENCES ARTICLES(Id_Article),
   FOREIGN KEY(id_prix) REFERENCES PRIX(id_prix)
);

