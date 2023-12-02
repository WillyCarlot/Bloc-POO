#include "articles.h"

int articles::get_Id_Article(void){
	return this->Id_Article;
}

System::String^ articles::get_art_designation(void){
	return this->art_designation;
}
int articles::get_art_quantiteStock(void){
	return this->art_quantiteStock;
}
int articles::get_ar_seuilReapprovis(void){
	return this->art_seuilReapprovis;
}
float articles::get_art_prix(void){
	return this->art_prix;
}
float articles::get_art_tva(void){
	return this->art_tva;
}
//set
void articles::Id_Article(int Id){
	this->Id_Article = Id;
}
void articles::art_designation(System::String^ nom){
	this->art_designation = nom;
}
void articles::art_quantiteStock(int quantite){
	this->art_quantiteStock = quantite;
}
void articles::ar_seuilReapprovis(int seuil){
	this->ar_seuilReapprovis = seuil;
}
void articles::art_prix(float prix){
	this->art_prix = prix;
}
void articles::art_tva(float tva){
	this->art_tva = tva;
}