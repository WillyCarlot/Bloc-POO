#include "CLmap_commandes.h"


System::String^ NS_Comp_MappageCommande::commande::SelectCommande(void) {
	return "exec SelectCommandes;";
}

System::String^ NS_Comp_MappageCommande::commande::InsérerCommande(void) {
	return "EXEC InsererNouvelleCommande \n"
		"@RefCommande = '" + get_com_reference() + "', \n"
		"@DateLivraison = '" + get_com_dateLivraison() + "',\n"
		"@DateEmission = '" + get_com_datEmission() + "',\n"
		"@DatePaiement = '" + get_com_datePaiement() + "',\n"
		"@MoyenPaiement = '" + get_com_moyenPaiement() + "',\n"
		"@IdClient = " + get_com_ID_Client() + ",\n"
		"@IdArticles = '" + get_com_ID_Articles() + "';";
}

System::String^ NS_Comp_MappageCommande::commande::SupprimerCommande(void) {
	return  "DELETE FROM [projetPOO].[dbo].[CONTENIR] WHERE Id_Commande = " + this->Id_Commande + "; \n" //Supprimer les entrées de la table CONTENIR liées à la commande
		+ "DELETE FROM [projetPOO].[dbo].[COMMANDES] WHERE Id_Commande = " + this->Id_Commande + ";";//Supprimer l'entrée de la table COMMANDES correspondante à l'identifiant de commande
}


System::String^ NS_Comp_MappageCommande::commande::ModifierCommande(void) {
	return "EXEC ModifierCommande\n"
		"@IdCommande = " + get_Id_Commande() + ",\n"
		"@RefCommande = '" + get_com_reference() + "',\n"
		"@DateLivraison = '" + get_com_dateLivraison() + "',\n"
		"@DateEmission = '" + get_com_datEmission() + "',\n"
		"@DatePaiement = '" + get_com_datePaiement() + "',\n"
		"@MoyenPaiement = '" + get_com_moyenPaiement() + "',\n"
		"@IdClient =" + get_com_ID_Client() + ",\n"
		"@IdArticles = '" + get_com_ID_Articles() + "';";
}

//get
int NS_Comp_MappageCommande::commande::get_Id_Commande(void) {
	return this->Id_Commande;
}

System::String^ NS_Comp_MappageCommande::commande::get_com_reference(void) {
	return this->com_reference;
}

System::String^ NS_Comp_MappageCommande::commande::get_com_dateLivraison(void) {
	return this->com_dateLivraison;
}

System::String^ NS_Comp_MappageCommande::commande::get_com_datEmission(void) {
	return this->com_dateEmission;
}

System::String^ NS_Comp_MappageCommande::commande::get_com_datePaiement(void) {
	return this->com_datePaiement;
}

System::String^ NS_Comp_MappageCommande::commande::get_com_moyenPaiement(void) {
	return this->com_moyenPaiement;
}

int NS_Comp_MappageCommande::commande::get_com_ID_Client(void) {
	return this->Id_Client;
}

System::String^ NS_Comp_MappageCommande::commande::get_com_ID_Articles(void) {
	return this->Id_Articles;
}

//set
void NS_Comp_MappageCommande::commande::set_Id_Commande(int N) {
	this->Id_Commande = N;
}

void NS_Comp_MappageCommande::commande::set_com_reference(System::String^ ref) {
	this->com_reference = ref;
}

void NS_Comp_MappageCommande::commande::set_com_dateLivraison(System::String^ date) {
	this->com_dateLivraison = date;
}

void NS_Comp_MappageCommande::commande::set_com_datEmission(System::String^ date) {
	this->com_dateEmission = date;
}

void NS_Comp_MappageCommande::commande::set_com_datePaiement(System::String^ date) {
	this->com_datePaiement = date;
}

void NS_Comp_MappageCommande::commande::set_com_moyenPaiement(System::String^ moyen) {
	this->com_moyenPaiement = moyen;
}

void NS_Comp_MappageCommande::commande::set_com_ID_Client(int ID) {
	this->Id_Client = ID;
}

void NS_Comp_MappageCommande::commande::set_com_ID_Articles(System::String^ ID_Articles) {
	this->Id_Articles = ID_Articles;
}
