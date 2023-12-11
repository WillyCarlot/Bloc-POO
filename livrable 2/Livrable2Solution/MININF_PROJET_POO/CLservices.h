#pragma once

#include "CLcad.h"

#include "CLmap_stock_article.h"

#include "CLmap_utilisateur.h"


#include "CLmap_commandes.h"


#include "CL_map_statistiques.h"
/*
#include "CLmapTB.h"


#include "CLmap_articles.h"

*/


namespace NS_Comp_Svc {

//------------------------------------stock-------------------------------------------------------------------------------------------------
	ref class CLservices_stock_article
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageStockArticle::stock_article^ oMappArticleStock;
	public:
		CLservices_stock_article(void);
		//----------------------stock--------------------------------------------------
		System::Data::DataSet^ aficherTousLesStock(System::String^);
		System::Data::DataSet^ aficherStockOuArticle(System::String^, int, int);
		//---------------------article-------------------------------------------------
		System::Data::DataSet^ aficherAticle(System::String^);
		void deleteArticle(int);
		void insererUnArticle(System::String^, float);
		void modifierArticle(int, System::String^, float);
	};

//-----------------------------------------------------------------------------------client-----------------------------------------------------


	ref class CLservices_Client
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageUtilisateur::utilisateur^ oMappUtilisateur;

	public:
		CLservices_Client(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^);
		void deleteUnClient(int);
		void insererUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifierUnClient(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	};
//---------------------------------------------------------------------------------personel------------------------------------------------------
	ref class CLservices_Personnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageUtilisateur::utilisateur^ oMappPersonnel;

	public:
		CLservices_Personnel(void);
		System::Data::DataSet^ selectionnerTousLePersonnel(System::String^);
		void deleteUnPersonnel(int);
		void insererUnPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifierUnPersonnel(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	};

//----------------------------------------------------------------------------commande---------------------------------------------------------

	ref class CLservices_Commande
	{
	private:
		NS_Comp_Data::CLcad^ oCadCommande;
		NS_Comp_MappageCommande::commande^ oMappCommande;

	public:
		CLservices_Commande(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		void CréerUneCommande(System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);
		void SupprimerUneCommande(int);
		void ModifierUneCommande(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);
	};


//-------------------------------------------------------------------------------stat-------------------------------------------------------------
	ref class CLservices_Statistiques
	{
	private:
		System::Data::SqlClient::SqlConnection^ oConn;
		System::Data::SqlClient::SqlCommand^ oCmd;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageStatistiques::statistiques^ oMappStatistiques;

	public:
		CLservices_Statistiques(void);
		System::Data::DataSet^ Servicecalculerpaniermoyen(System::String^);
		System::Data::DataSet^ ServiceproduitsSousSueilReaprovisionnement(System::String^);
		System::Data::DataSet^ ServicearticlePlusVendus(System::String^);
		System::Data::DataSet^ ServicearticleMoinssVendus(System::String^);
		System::Data::DataSet^ ServiceChiffreAffaireSurUnMois(System::String^, System::String^);
		System::Data::DataSet^ ServiceTotalAchatClient(System::String^, int);
		System::Data::DataSet^ ServiceTotalValeurAchatStock(System::String^, int);
		System::Data::DataSet^ ServicetotalValeurCommercialeStock(System::String^, int);
		System::Data::DataSet^ ServicetotalSimulationValeurCommercialeStock(System::String^, int, System::String^, System::String^, System::String^, System::String^);
	};
}



