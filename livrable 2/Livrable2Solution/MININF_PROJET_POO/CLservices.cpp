

#include "CLservices.h"


//-----------------------------stock------------------------------------------------------------------------------------------------------------------------------------

NS_Comp_Svc::CLservices_stock_article::CLservices_stock_article(void) {

	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappArticleStock = gcnew NS_Comp_MappageStockArticle::stock_article();
}


//----------------------stock--------------------------------------------------
System::Data::DataSet^ NS_Comp_Svc::CLservices_stock_article::aficherTousLesStock(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappArticleStock->selectStock();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_stock_article::aficherStockOuArticle(System::String^ dataTableName, int id_stock, int id_art) {

	this->oMappArticleStock->set_Id_article(id_art);
	this->oMappArticleStock->set_Id_stock(id_stock);

	System::String^ sql = this->oMappArticleStock->selectChois();
	return this->oCad->getRows(sql, dataTableName);
}
//---------------------article-------------------------------------------------
System::Data::DataSet^ NS_Comp_Svc::CLservices_stock_article::aficherAticle(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappArticleStock->SelectArticle();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices_stock_article::deleteArticle(int id_art) {
	System::String^ sql;
	this->oMappArticleStock->set_Id_article(id_art);
	sql = this->oMappArticleStock->DeleteArticle();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices_stock_article::insererUnArticle(System::String^ nom, float prix) {
	System::String^ sql;
	this->oMappArticleStock->set_nom_article(nom);
	this->oMappArticleStock->set_prix_article(prix);
	sql = this->oMappArticleStock->InsertArticle();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices_stock_article::modifierArticle(int id, System::String^ nom, float prix) {
	System::String^ sql;
	this->oMappArticleStock->set_Id_article(id);
	this->oMappArticleStock->set_nom_article(nom);
	this->oMappArticleStock->set_prix_article(prix);
	sql = this->oMappArticleStock->UpdateArticle();
	this->oCad->actionRows(sql);
}


//---------------------------------------------------------------Client--------------------------------------------------------------


NS_Comp_Svc::CLservices_Client::CLservices_Client(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappUtilisateur = gcnew NS_Comp_MappageUtilisateur::utilisateur();

}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Client::selectionnerTousLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappUtilisateur->SelectHumain();
	return this->oCad->getRows(sql, dataTableName);

}

void NS_Comp_Svc::CLservices_Client::deleteUnClient(int id)
{
	System::String^ sql;
	this->oMappUtilisateur->set_Id_Client(id);
	sql = this->oMappUtilisateur->Delete();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Client::insererUnClient(System::String^ nom, System::String^ prenom, System::String^ dateNaissance, System::String^ numAdresse, System::String^ rueAdresse, System::String^ code_postal, System::String^ typeArdresse, System::String^ ville, System::String^ region, System::String^ pays)
{
	System::String^ sql;
	this->oMappUtilisateur->set_uti_nom(nom);
	this->oMappUtilisateur->set_uti_prenom(prenom);
	this->oMappUtilisateur->set_uti_dateNaissance(dateNaissance);
	this->oMappUtilisateur->set_adr_num(numAdresse);
	this->oMappUtilisateur->set_adr_rue(rueAdresse);
	this->oMappUtilisateur->set_adr_postalcode(code_postal);
	this->oMappUtilisateur->set_adr_type(typeArdresse);
	this->oMappUtilisateur->set_cit_nom(ville);
	this->oMappUtilisateur->set_reg_nom(region);
	this->oMappUtilisateur->set_pay_nom(pays);
	sql = this->oMappUtilisateur->Insert();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Client::modifierUnClient(int id_client, System::String^ nom, System::String^ prenom, System::String^ dateNaissance, System::String^ numAdresse, System::String^ rueAdresse, System::String^ code_postal, System::String^ typeArdresse, System::String^ ville, System::String^ region, System::String^ pays)
{
	System::String^ sql;
	this->oMappUtilisateur->set_Id_Client(id_client);
	this->oMappUtilisateur->set_uti_nom(nom);
	this->oMappUtilisateur->set_uti_prenom(prenom);
	this->oMappUtilisateur->set_uti_dateNaissance(dateNaissance);
	this->oMappUtilisateur->set_adr_num(numAdresse);
	this->oMappUtilisateur->set_adr_rue(rueAdresse);
	this->oMappUtilisateur->set_adr_postalcode(code_postal);
	this->oMappUtilisateur->set_adr_type(typeArdresse);
	this->oMappUtilisateur->set_cit_nom(ville);
	this->oMappUtilisateur->set_reg_nom(region);
	this->oMappUtilisateur->set_pay_nom(pays);
	sql = this->oMappUtilisateur->Update();
	this->oCad->actionRows(sql);
}


//--------------------------------------------------------------------------------personnel---------------------------------------------------

//------------------------------------personnel----------------------------------------
NS_Comp_Svc::CLservices_Personnel::CLservices_Personnel(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappPersonnel = gcnew NS_Comp_MappageUtilisateur::utilisateur();

}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Personnel::selectionnerTousLePersonnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPersonnel->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);

}

void NS_Comp_Svc::CLservices_Personnel::deleteUnPersonnel(int id_personnel)
{
	System::String^ sql;
	this->oMappPersonnel->set_id_Personnel(id_personnel);


	sql = this->oMappPersonnel->DeletePersonnel();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Personnel::insererUnPersonnel(System::String^ nom, System::String^ prenom, System::String^ dateNaissance, System::String^ numAdresse, System::String^ rueAdresse, System::String^ code_postal, System::String^ typeArdresse, System::String^ ville, System::String^ region, System::String^ pays, System::String^ id_suphierarchique, System::String^ niveauHierarchique, System::String^ dateEmbauche)
{
	System::String^ sql;
	this->oMappPersonnel->set_uti_nom(nom);
	this->oMappPersonnel->set_uti_prenom(prenom);
	this->oMappPersonnel->set_uti_dateNaissance(dateNaissance);
	this->oMappPersonnel->set_adr_num(numAdresse);
	this->oMappPersonnel->set_adr_rue(rueAdresse);
	this->oMappPersonnel->set_adr_postalcode(code_postal);
	this->oMappPersonnel->set_adr_type(typeArdresse);
	this->oMappPersonnel->set_cit_nom(ville);
	this->oMappPersonnel->set_reg_nom(region);
	this->oMappPersonnel->set_pay_nom(pays);
	this->oMappPersonnel->set_per_supHierarchique(id_suphierarchique);
	this->oMappPersonnel->set_per_niveauHierarchique(niveauHierarchique);
	this->oMappPersonnel->set_per_dateEmbauche(dateEmbauche);
	this->oMappPersonnel->set_pay_nom(pays);

	sql = this->oMappPersonnel->InsertPersonnel();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Personnel::modifierUnPersonnel(int id_personnel, System::String^ nom, System::String^ prenom, System::String^ dateNaissance, System::String^ numAdresse, System::String^ rueAdresse, System::String^ code_postal, System::String^ typeArdresse, System::String^ ville, System::String^ region, System::String^ pays, System::String^ id_suphierarchique, System::String^ niveauHierarchique, System::String^ dateEmbauche)
{
	System::String^ sql;
	this->oMappPersonnel->set_id_Personnel(id_personnel);
	this->oMappPersonnel->set_uti_nom(nom);
	this->oMappPersonnel->set_uti_prenom(prenom);
	this->oMappPersonnel->set_uti_dateNaissance(dateNaissance);
	this->oMappPersonnel->set_adr_num(numAdresse);
	this->oMappPersonnel->set_adr_rue(rueAdresse);
	this->oMappPersonnel->set_adr_postalcode(code_postal);
	this->oMappPersonnel->set_adr_type(typeArdresse);
	this->oMappPersonnel->set_cit_nom(ville);
	this->oMappPersonnel->set_reg_nom(region);
	this->oMappPersonnel->set_pay_nom(pays);
	this->oMappPersonnel->set_per_supHierarchique(id_suphierarchique);
	this->oMappPersonnel->set_per_niveauHierarchique(niveauHierarchique);
	this->oMappPersonnel->set_per_dateEmbauche(dateEmbauche);
	this->oMappPersonnel->set_pay_nom(pays);

	sql = this->oMappPersonnel->UpdatePersonnel();
	this->oCad->actionRows(sql);
}


//------------------------------------COMMANDE----------------------------------------
NS_Comp_Svc::CLservices_Commande::CLservices_Commande(void)
{
	this->oCadCommande = gcnew NS_Comp_Data::CLcad();
	this->oMappCommande = gcnew NS_Comp_MappageCommande::commande();

}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Commande::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommande->SelectCommande();
	return this->oCadCommande->getRows(sql, dataTableName);

}

void NS_Comp_Svc::CLservices_Commande::CréerUneCommande(System::String^ ref, System::String^ dateLivraison, System::String^ dateEmission, System::String^ datePaiement, System::String^ moyenPaiement, int ID_Client, System::String^ ID_Articles) {
	System::String^ sql;

	this->oMappCommande->set_com_reference(ref);
	this->oMappCommande->set_com_dateLivraison(dateLivraison);
	this->oMappCommande->set_com_datEmission(dateEmission);
	this->oMappCommande->set_com_datePaiement(datePaiement);
	this->oMappCommande->set_com_moyenPaiement(moyenPaiement);
	this->oMappCommande->set_com_ID_Client(ID_Client);
	this->oMappCommande->set_com_ID_Articles(ID_Articles);


	/*
	this->oMappCommande->get_com_reference();
	this->oMappCommande->get_com_dateLivraison();
	this->oMappCommande->get_com_datEmission();
	this->oMappCommande->get_com_datePaiement();
	this->oMappCommande->get_com_moyenPaiement();
	this->oMappCommande->get_com_ID_Client();
	*/
	//sql = this->oMappCommande->InsérerCommande(ref, dateLivraison, dateEmission, datePaiement, moyenPaiement, ID_Client);
	sql = this->oMappCommande->InsérerCommande();

	this->oCadCommande->actionRows(sql);

}

void NS_Comp_Svc::CLservices_Commande::SupprimerUneCommande(int id) {
	System::String^ sql;

	this->oMappCommande->set_Id_Commande(id);
	sql = this->oMappCommande->SupprimerCommande();
	this->oCadCommande->actionRows(sql);
}

void NS_Comp_Svc::CLservices_Commande::ModifierUneCommande(int id, System::String^ ref, System::String^ dateLivraison, System::String^ dateEmission, System::String^ datePaiement, System::String^ moyenPaiement, int ID_Client, System::String^ ID_Articles) {
	System::String^ sql;

	this->oMappCommande->set_Id_Commande(id);
	this->oMappCommande->set_com_reference(ref);
	this->oMappCommande->set_com_dateLivraison(dateLivraison);
	this->oMappCommande->set_com_datEmission(dateEmission);
	this->oMappCommande->set_com_datePaiement(datePaiement);
	this->oMappCommande->set_com_moyenPaiement(moyenPaiement);
	this->oMappCommande->set_com_ID_Client(ID_Client);
	this->oMappCommande->set_com_ID_Articles(ID_Articles);

	sql = this->oMappCommande->ModifierCommande();
	this->oCadCommande->actionRows(sql);

}



//------------------------------------------------------------------------------------------stat----------------------------------------------------
NS_Comp_Svc::CLservices_Statistiques::CLservices_Statistiques(void)
{


	// Initialisation de oCmd

	// Initialisation de oCmd
	oCmd = gcnew System::Data::SqlClient::SqlCommand();
	oCmd->Connection = oConn;
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappStatistiques = gcnew NS_Comp_MappageStatistiques::statistiques();

}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::Servicecalculerpaniermoyen(System::String^ dataTableName)
{

	System::String^ sql;
	sql = this->oMappStatistiques->calculerpaniermoyen();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServiceproduitsSousSueilReaprovisionnement(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStatistiques->produitsSousSueilReaprovisionnement();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServicearticlePlusVendus(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStatistiques->articlePlusVendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServicearticleMoinssVendus(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStatistiques->articleMoinssVendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServiceChiffreAffaireSurUnMois(System::String^ dataTableName, System::String^ date)
{
	this->oMappStatistiques->set_com_datePaiement(date);
	System::String^ sql = this->oMappStatistiques->chiffreAffairesurUnMois();
	return this->oCad->getRows(sql, dataTableName);

}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServiceTotalAchatClient(System::String^ dataTableName, int id)
{
	this->oMappStatistiques->set_Id_Client(id);
	System::String^ sql = this->oMappStatistiques->totalAchatClient();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServiceTotalValeurAchatStock(System::String^ dataTableName, int id)
{
	this->oMappStatistiques->set_Id_stock(id);
	System::String^ sql = this->oMappStatistiques->totalValeurAchatStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServicetotalValeurCommercialeStock(System::String^ dataTableName, int id)
{
	this->oMappStatistiques->set_Id_stock(id);
	System::String^ sql = this->oMappStatistiques->totalValeurCommercialeStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices_Statistiques::ServicetotalSimulationValeurCommercialeStock(System::String^ dataTableName, int id, System::String^ tva, System::String^ remise, System::String^ marge, System::String^ demarche)
{
	this->oMappStatistiques->set_tva(tva);
	this->oMappStatistiques->set_marge(marge);
	this->oMappStatistiques->set_remise(remise);
	this->oMappStatistiques->set_demarcheInconnue(demarche);
	this->oMappStatistiques->set_Id_stock(id);
	System::String^ sql = this->oMappStatistiques->SimulerVariationValeurCommercialeStock();
	return this->oCad->getRows(sql, dataTableName);
}


