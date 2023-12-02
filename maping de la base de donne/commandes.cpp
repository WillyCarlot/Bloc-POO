#include "commande.h"

//get
int comandes::get_Id_Commande(void){
	return this->Id_Commande;
}
System::String^ comandes::get_com_reference(void){
	return this->com_reference;
}
System::String^ comandes::get_com_dateLivraison(void){
	return this->com_dateLivraison;
}
System::String^ comandes::get_com_datEmission(void){
	return this->com_datEmission;
}
System::String^ comandes::get_com_datePaiement(void){
	return this->com_datePaiement;
}
System::String^ comandes::get_com_moyenPaiement(void){
	return this->com_moyenPaiement;
}

//set
void comandes::set_Id_Commande(int N){
	this->Id_Commande = N;
}
void comandes::set_com_reference(System::String^ ref){
	this->com_reference = ref;
}
void comandes::set_com_dateLivraison(System::String^ date){
	this->com_dateLivraison = date;
}
void comandes::set_com_datEmission(System::String^ date){
	this->com_datEmission = date; 
}
void comandes::set_com_datePaiement(System::String^ date){
	this->com_datePaiement = date;
}
void comandes::set_com_moyenPaiement(System::String^ moyen){
	this->com_moyenPaiement = moyen;
}