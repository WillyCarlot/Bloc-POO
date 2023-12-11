#include "CLmap_utilisateur.h"
#include <vcclr.h> // Pour gcnew
#include <iostream>
#include <string.h>

System::String^ NS_Comp_MappageUtilisateur::utilisateur::SelectPersonnel(void)
{
	return "exec afficher_personnel;";

}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::InsertPersonnel(void)
{
	return "EXEC InsertPersonnel @adr_num = '" + get_adr_num()
		+ "', @adr_rue = '" + get_adr_rue()
		+ "', @adr_postalcode = '" + get_adr_postalcode()
		+ "', @cit_nom = '" + get_cit_nom()
		+ "', @reg_nom = '" + get_reg_nom()
		+ "', @pay_nom = '" + get_pay_nom()
		+ "', @uti_nom = '" + get_uti_nom()
		+ "', @uti_prenom = '" + get_uti_prenom()
		+ "', @uti_dateNaissance = '" + get_uti_dateNaissance()
		+ "', @per_supHierarchique = " + get_per_supHierarchique()
		+ ", @per_NiveauHierarchique = " + this->per_NiveauHierarchique
		+ ", @per_dateEmbauche = '" + get_per_dateEmbauche() + "';";
}


System::String^ NS_Comp_MappageUtilisateur::utilisateur::DeletePersonnel(void)
{

	return "EXEC DeletePersonnel @PersonnelId = " + get_id_Personnel() + ";";



}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::UpdatePersonnel(void)
{
	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
	sb->Append("DECLARE @PersonnelIdToUpdate INT = '" + this->id_Personnel + "' ;\n");
	sb->Append("DECLARE @UserIdToUpdate INT;\n");
	sb->Append("DECLARE @AddressIdToUpdate INT;\n");

	// Mettez à jour l'adresse
	sb->Append("UPDATE ADRESSE\n");
	sb->Append("SET\n");
	sb->Append("adr_num = '" + this->adr_num + "',\n");
	sb->Append("adr_rue = '" + this->adr_rue + "',\n");
	sb->Append("adr_postalcode = '" + this->adr_postalcode + "',\n");
	sb->Append("adr_ville = '" + this->cit_nom + "',\n");
	sb->Append("adr_region = '" + this->reg_nom + "',\n");
	sb->Append("adr_pays = '" + this->pay_nom + "',\n");
	sb->Append("adr_type = 'adresse'\n");
	sb->Append("WHERE id_adresse = (SELECT id_adresse FROM AVOIR WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToUpdate));\n");

	// Mettez à jour l'utilisateur
	sb->Append("UPDATE UTILISATEUR\n");
	sb->Append("SET\n");
	sb->Append("uti_nom = '" + this->uti_nom + "',\n");
	sb->Append("uti_prenom = '" + this->uti_prenom + "',\n");
	sb->Append("uti_dateNaissance = '" + this->uti_dateNaissance + "'\n");
	sb->Append("WHERE id_utilisateur IN (SELECT id_utilisateur FROM PERSONNEL WHERE id_Personnel = @PersonnelIdToUpdate);\n");

	// Mettez à jour le personnel
	sb->Append("UPDATE PERSONNEL\n");
	sb->Append("SET\n");
	sb->Append("per_supHierarchique = " + this->per_supHierarchique + ",\n");
	sb->Append("per_NiveauHierarchique = " + this->per_NiveauHierarchique + ",\n");
	sb->Append("per_dateDembauche = '" + this->per_dateEmbauche + "'\n");
	sb->Append("WHERE id_Personnel = @PersonnelIdToUpdate;\n");

	// Retournez la chaîne SQL générée
	return sb->ToString();
	
	/*
	return "EXEC UpdatePersonnel @PersonnelId = " + get_id_Personnel()
		+ ", @adr_num = " + get_adr_num()
		+ ", @adr_rue = " + get_adr_rue()
		+ ", @adr_postalcode = " + get_adr_postalcode()
		+ ", @cit_nom = " + get_cit_nom()
		+ ", @reg_nom = " + get_reg_nom()
		+ ", @pay_nom = " + get_pay_nom()
		+ ", @uti_nom = " + get_uti_nom()
		+ ", @uti_prenom = " + get_uti_prenom()
		+ ", @uti_dateNaissance = " + get_uti_dateNaissance()
		+ ", @per_supHierarchique = " + get_per_supHierarchique()
		+ ", @per_NiveauHierarchique = " + this->per_NiveauHierarchique
		+ ", @per_dateEmbauche = " + get_per_dateEmbauche() + ";";*/


}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::SelectHumain(void)
{
	return "exec SelectHumain;";
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Insert(void)
{
	return "EXEC InsertClient @adr_num = '" + get_adr_num()
		+ "',@adr_rue = '" + get_adr_rue()
		+ "', @adr_postalcode = '" + get_adr_postalcode()
		+ "', @cit_nom = '" + get_cit_nom()
		+ "', @reg_nom = '" + get_reg_nom()
		+ "', @pay_nom = '" + get_pay_nom()
		+ "', @uti_nom = '" + get_uti_nom()
		+ "', @uti_prenom = '" + get_uti_prenom()
		+ "', @uti_dateNaissance = '" + get_uti_dateNaissance() + "';";

}


System::String^ NS_Comp_MappageUtilisateur::utilisateur::Delete(void)
{
	return "DECLARE @Id_ClientToDelete INT = ' " + this->Id_Client + "' ;"
		+ "DELETE FROM CONTENIR WHERE Id_Commande IN(SELECT Id_Commande FROM COMMANDES WHERE Id_Client = @Id_ClientToDelete);"
		+ "DELETE FROM COMMANDES WHERE Id_Client = @Id_ClientToDelete;"
		+ "DELETE FROM CLIENTS WHERE Id_Client = @Id_ClientToDelete;";


	/*
	return "EXEC DeleteClient @ClientId = "+ get_Id_Client() + ";";*/
}

System::String^ NS_Comp_MappageUtilisateur::utilisateur::Update(void)
{
	
	return "EXEC UpdateClient @ClientId = " + get_Id_Client()
		+ ", @adr_num = '" + get_adr_num()
		+ "', @adr_rue = '" + get_adr_rue()
		+ "', @adr_postalcode = '" + get_adr_postalcode()
		+ "', @cit_nom = '" + get_cit_nom()
		+ "', @reg_nom = '" + get_reg_nom()
		+ "', @pay_nom = '" + get_pay_nom()
		+ "', @uti_nom = '" + get_uti_nom()
		+ "', @uti_prenom = '" + get_uti_prenom()
		+ "', @uti_dateNaissance = '" + get_uti_dateNaissance() + "';";
}


//get
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_pay_nom(void) {
	return this->pay_nom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_uti_dateNaissance(void) {
	return this->uti_dateNaissance;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_uti_prenom(void) {
	return this->uti_prenom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_uti_nom(void) {
	return this->uti_nom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_postalcode(void) {
	return this->adr_postalcode;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_num(void) {
	return this->adr_num;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_rue(void) {
	return this->adr_rue;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_adr_type(void) {
	return this->adr_type;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_reg_nom(void) {
	return this->reg_nom;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_cit_nom(void) {
	return this->cit_nom;
}
int NS_Comp_MappageUtilisateur::utilisateur::get_Id_Client(void) {
	return this->Id_Client;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_per_supHierarchique(void) {
	return this->per_supHierarchique;
}
System::String^ NS_Comp_MappageUtilisateur::utilisateur::get_per_dateEmbauche(void) {
	return this->per_dateEmbauche;
}
int NS_Comp_MappageUtilisateur::utilisateur::get_id_Personnel(void) {
	return this->id_Personnel;
}

//set
void NS_Comp_MappageUtilisateur::utilisateur::set_pay_nom(System::String^ pays) {
	this->pay_nom = pays;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_uti_dateNaissance(System::String^ date) {
	this->uti_dateNaissance = date;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_uti_prenom(System::String^ prenom) {
	this->uti_prenom = prenom;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_uti_nom(System::String^ nom) {
	this->uti_nom = nom;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_postalcode(System::String^ code) {
	this->adr_postalcode = code;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_num(System::String^ num) {
	this->adr_num = num;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_rue(System::String^ rue) {
	this->adr_rue = rue;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_adr_type(System::String^ type) {
	this->adr_type = type;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_reg_nom(System::String^ region) {
	this->reg_nom = region;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_cit_nom(System::String^ ville) {
	this->cit_nom = ville;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_Id_Client(int id) {
	this->Id_Client = id;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_per_supHierarchique(System::String^ id) {
	this->per_supHierarchique = id;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_per_niveauHierarchique(System::String^ id)
{
	this->per_NiveauHierarchique = id;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_per_dateEmbauche(System::String^ date) {
	this->per_dateEmbauche = date;
}
void NS_Comp_MappageUtilisateur::utilisateur::set_id_Personnel(int id) {
	this->id_Personnel = id;
}

