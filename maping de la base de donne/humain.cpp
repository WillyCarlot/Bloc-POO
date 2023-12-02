#include "humain.h"


//get
System::String^ humain::get_pay_nom(void){
	return this->pay_nom;
}
System::String^ humain::get_hum_dateNaissance(void){
	return this->hum_dateNaissance;
}
System::String^ humain::get_hum_prenom(void){
	return this->hum_prenom;
}
System::String^ humain::get_hum_nom(void){
	return this->hum_nom;
}
System::String^ humain::get_adr_postalcode(void){
	return this->adr_postalcode;
}
System::String^ humain::get_adr_num(void){
	return this->adr_num;
}
System::String^ humain::get_adr_rue(void){
	return this->adr_rue;
}
System::String^ humain::get_reg_nom(void){
	return this->reg_nom;
}
System::String^ humain::get_cit_nom(void){
	return this->cit_nom;
}
int humain::get_Id_Client(void){
	return this->Id_Client;
}
int humain::get_per_supHerarchique(void){
	return this->per_supHerarchique;
}
System::String^ humain::get_per_dateEmbauche(void){
	return this->per_dateEmbauche;
}
int humain::get_id_Personnel(void){
	return this->id_Personnel;
}

//set
void set_pay_nom(System::String^ pays){
	this->pay_nom = pays;
}
void set_hum_dateNaissance(System::String^ date){
	this->hum_dateNaissance = date;
}
void set_hum_prenom(System::String^ prenom){
	this->hum_prenom = prenom;
}
void set_hum_nom(System::String^ nom){
	this->hum_nom = nom;
}
void set_adr_postalcode(System::String^ code){
	this->adr_postalcode = code;
}
void set_adr_num(System::String^ num){
	this->adr_num = num;
}
void set_adr_rue(System::String^ rue){
	this->adr_rue = rue;
}
void set_reg_nom(System::String^ region){
	this->reg_nom = region;
}
void set_cit_nom(System::String^ ville){
	this->cit_nom = ville;
}
void set_Id_Client(int id){
	this->Id_Client = id;
}
void set_per_supHerarchique(int id){
	this->per_supHerarchique = id;
}
void set_per_dateEmbauche(System::String^ date){
	this->per_dateEmbauche = date;
}
void set_id_Personnel(int id){
	this->id_Personnel = id; 
}