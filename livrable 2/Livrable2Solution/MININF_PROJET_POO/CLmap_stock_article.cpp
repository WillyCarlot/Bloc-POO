#include "CLmap_stock_article.h"

int NS_Comp_MappageStockArticle::stock_article::get_Id_article(void) {
	return this->Id_article;
}
int NS_Comp_MappageStockArticle::stock_article::get_Id_stock(void) {
	return this->Id_stock;
}
System::String^ NS_Comp_MappageStockArticle::stock_article::get_nom_article(void) {
	return this->nom_article;
}
float NS_Comp_MappageStockArticle::stock_article::get_prix_article(void) {
	return this->prix_article;
}

void NS_Comp_MappageStockArticle::stock_article::set_Id_article(int id) {
	this->Id_article = id;
}
void NS_Comp_MappageStockArticle::stock_article::set_Id_stock(int id) {
	this->Id_stock = id;
}
void NS_Comp_MappageStockArticle::stock_article::set_nom_article(System::String^ nom) {
	this->nom_article = nom;
}
void NS_Comp_MappageStockArticle::stock_article::set_prix_article(float prix) {
	this->prix_article = prix;
}

System::String^ NS_Comp_MappageStockArticle::stock_article::selectStock(void) {
	return "EXEC afficherStockAvecArticles;";
}
System::String^ NS_Comp_MappageStockArticle::stock_article::selectChois(void) {
	if (get_Id_article() == 0) {
		return "EXEC afficherInformationArticleStock @id_stock = "+get_Id_stock() + "; ";
	}
	else {
		return "EXEC afficherInformationArticleStock @id_article = "+get_Id_article()+";";
	}
}



System::String^ NS_Comp_MappageStockArticle::stock_article::SelectArticle(void) {
	return "EXEC afficher_Articles;";
}
System::String^ NS_Comp_MappageStockArticle::stock_article::InsertArticle(void) {
	return"EXEC ajouter_ArticleEtPrix @nomArticle = '" + get_nom_article()
		+ "',@prix = " + get_prix_article() + "; ";
}
System::String^ NS_Comp_MappageStockArticle::stock_article::DeleteArticle(void) {
	return"EXEC supprimer_ArticleEtPrix @Id_Article = " + get_Id_article() + ";";
}
System::String^ NS_Comp_MappageStockArticle::stock_article::UpdateArticle(void) {
	return "EXEC modifier_ArticleAvecNouveauPrix @Id_Article = " + get_Id_article()
		+ ",@nouveauNom = '" + get_nom_article()
		+ "',@nouveauPrix = " + get_prix_article() + ";";
}