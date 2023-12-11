
#pragma once
#include <string.h>

namespace NS_Comp_MappageStockArticle {
	ref class stock_article
	{
	private:
		int Id_article;
		int Id_stock;
		System::String^ nom_article;
		float prix_article;
	public:
		int get_Id_article(void);
		int get_Id_stock(void);
		System::String^ get_nom_article(void);
		float get_prix_article(void);

		void set_Id_article(int);
		void set_Id_stock(int);
		void set_nom_article(System::String^);
		void set_prix_article(float);


		System::String^ selectStock(void);
		System::String^ selectChois(void);

		System::String^ SelectArticle(void);
		System::String^ InsertArticle(void);
		System::String^ DeleteArticle(void);
		System::String^ UpdateArticle(void);
	};
}
