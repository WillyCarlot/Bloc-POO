#pragma once
#include <string>

namespace NS_Comp_MappageCommande
{
	ref class commande {
	private:
		int Id_Commande;
		System::String^ com_reference;
		System::String^ com_dateLivraison;
		System::String^ com_dateEmission;
		System::String^ com_datePaiement;
		System::String^ com_moyenPaiement;
		int Id_Client;
		System::String^ Id_Articles;
	public:
		//get
		System::String^ SelectCommande(void);
		System::String^ InsérerCommande(void);
		System::String^ SupprimerCommande(void);
		System::String^ ModifierCommande(void);
		int get_Id_Commande(void);
		System::String^ get_com_reference(void);
		System::String^ get_com_dateLivraison(void);
		System::String^ get_com_datEmission(void);
		System::String^ get_com_datePaiement(void);
		System::String^ get_com_moyenPaiement(void);
		System::String^ get_com_ID_Articles(void);
		int get_com_ID_Client(void);
		//set
		void set_Id_Commande(int);
		void set_com_reference(System::String^);
		void set_com_dateLivraison(System::String^);
		void set_com_datEmission(System::String^);
		void set_com_datePaiement(System::String^);
		void set_com_moyenPaiement(System::String^);
		void set_com_ID_Client(int);
		void set_com_ID_Articles(System::String^);
	};
}
