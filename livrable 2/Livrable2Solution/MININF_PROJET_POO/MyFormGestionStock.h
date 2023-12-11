#pragma once
#include "CLservices.h"
#include "MyFormArticle.h"
namespace MININFPROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormGestionStock
	/// </summary>
	public ref class MyFormGestionStock : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionStock(void)
		{
			InitializeComponent();

			//
			//TODO: ajoutez ici le code du constructeur
			Action->Visible = true;
			txt_id_article->Visible = false;
			id_article->Visible = false;
			txt_id_stock->Visible = false;
			id_stock->Visible = false;
			Valider_Article->Visible = false;
			Valider_Stock->Visible = false;
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormGestionStock()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Comp_Svc::CLservices_stock_article^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Button^ load;
	private: System::Windows::Forms::Button^ ajout_objet;


	private: System::Windows::Forms::Label^ txt_id_article;
	private: System::Windows::Forms::Label^ txt_id_stock;
	private: System::Windows::Forms::TextBox^ id_stock;
	private: System::Windows::Forms::TextBox^ id_article;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Rechercher_stock;
	private: System::Windows::Forms::Button^ rechecher_article;
	private: System::Windows::Forms::Label^ Action;
	private: System::Windows::Forms::Button^ Valider_Article;
	private: System::Windows::Forms::Button^ Valider_Stock;






	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormGestionStock::typeid));
			this->Rechercher_stock = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->load = (gcnew System::Windows::Forms::Button());
			this->ajout_objet = (gcnew System::Windows::Forms::Button());
			this->txt_id_article = (gcnew System::Windows::Forms::Label());
			this->txt_id_stock = (gcnew System::Windows::Forms::Label());
			this->id_stock = (gcnew System::Windows::Forms::TextBox());
			this->id_article = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Valider_Stock = (gcnew System::Windows::Forms::Button());
			this->Valider_Article = (gcnew System::Windows::Forms::Button());
			this->Action = (gcnew System::Windows::Forms::Label());
			this->rechecher_article = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Rechercher_stock
			// 
			this->Rechercher_stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Rechercher_stock->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Rechercher_stock->FlatAppearance->BorderSize = 2;
			this->Rechercher_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Rechercher_stock->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Rechercher_stock->Location = System::Drawing::Point(422, 661);
			this->Rechercher_stock->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Rechercher_stock->Name = L"Rechercher_stock";
			this->Rechercher_stock->Size = System::Drawing::Size(290, 62);
			this->Rechercher_stock->TabIndex = 7;
			this->Rechercher_stock->Text = L"Rechercher stock";
			this->Rechercher_stock->UseVisualStyleBackColor = false;
			this->Rechercher_stock->Click += gcnew System::EventHandler(this, &MyFormGestionStock::rechercher_stock_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1396, 385);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormGestionStock::dataGridView1_CellContentClick);
			// 
			// load
			// 
			this->load->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->load->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->load->FlatAppearance->BorderSize = 2;
			this->load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->load->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->load->Location = System::Drawing::Point(1234, 681);
			this->load->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(141, 112);
			this->load->TabIndex = 1;
			this->load->Text = L"Afficher";
			this->load->UseVisualStyleBackColor = false;
			this->load->Click += gcnew System::EventHandler(this, &MyFormGestionStock::load_Click);
			// 
			// ajout_objet
			// 
			this->ajout_objet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ajout_objet->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->ajout_objet->FlatAppearance->BorderSize = 2;
			this->ajout_objet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ajout_objet->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ajout_objet->Location = System::Drawing::Point(576, 731);
			this->ajout_objet->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ajout_objet->Name = L"ajout_objet";
			this->ajout_objet->Size = System::Drawing::Size(290, 62);
			this->ajout_objet->TabIndex = 2;
			this->ajout_objet->Text = L"Gestion d\'objet";
			this->ajout_objet->UseVisualStyleBackColor = false;
			this->ajout_objet->Click += gcnew System::EventHandler(this, &MyFormGestionStock::ajout_objet_Click);
			// 
			// txt_id_article
			// 
			this->txt_id_article->AutoSize = true;
			this->txt_id_article->Location = System::Drawing::Point(162, 42);
			this->txt_id_article->Name = L"txt_id_article";
			this->txt_id_article->Size = System::Drawing::Size(79, 20);
			this->txt_id_article->TabIndex = 3;
			this->txt_id_article->Text = L"ID_Article";
			// 
			// txt_id_stock
			// 
			this->txt_id_stock->AutoSize = true;
			this->txt_id_stock->Location = System::Drawing::Point(162, 42);
			this->txt_id_stock->Name = L"txt_id_stock";
			this->txt_id_stock->Size = System::Drawing::Size(76, 20);
			this->txt_id_stock->TabIndex = 4;
			this->txt_id_stock->Text = L"ID_Stock";
			// 
			// id_stock
			// 
			this->id_stock->Location = System::Drawing::Point(166, 66);
			this->id_stock->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->id_stock->Name = L"id_stock";
			this->id_stock->Size = System::Drawing::Size(128, 26);
			this->id_stock->TabIndex = 5;
			// 
			// id_article
			// 
			this->id_article->Location = System::Drawing::Point(166, 66);
			this->id_article->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->id_article->Name = L"id_article";
			this->id_article->Size = System::Drawing::Size(128, 26);
			this->id_article->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Valider_Stock);
			this->panel1->Controls->Add(this->Valider_Article);
			this->panel1->Controls->Add(this->Action);
			this->panel1->Controls->Add(this->id_article);
			this->panel1->Controls->Add(this->id_stock);
			this->panel1->Controls->Add(this->txt_id_stock);
			this->panel1->Controls->Add(this->txt_id_article);
			this->panel1->Location = System::Drawing::Point(503, 424);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(453, 159);
			this->panel1->TabIndex = 8;
			// 
			// Valider_Stock
			// 
			this->Valider_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Valider_Stock->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Valider_Stock->FlatAppearance->BorderSize = 2;
			this->Valider_Stock->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Valider_Stock->Location = System::Drawing::Point(356, 109);
			this->Valider_Stock->Name = L"Valider_Stock";
			this->Valider_Stock->Size = System::Drawing::Size(80, 37);
			this->Valider_Stock->TabIndex = 9;
			this->Valider_Stock->Text = L"Valider";
			this->Valider_Stock->UseVisualStyleBackColor = false;
			this->Valider_Stock->Click += gcnew System::EventHandler(this, &MyFormGestionStock::Valider_Stock_Click);
			// 
			// Valider_Article
			// 
			this->Valider_Article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Valider_Article->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Valider_Article->FlatAppearance->BorderSize = 2;
			this->Valider_Article->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Valider_Article->Location = System::Drawing::Point(356, 109);
			this->Valider_Article->Name = L"Valider_Article";
			this->Valider_Article->Size = System::Drawing::Size(80, 37);
			this->Valider_Article->TabIndex = 8;
			this->Valider_Article->Text = L"Valider";
			this->Valider_Article->UseVisualStyleBackColor = false;
			this->Valider_Article->Click += gcnew System::EventHandler(this, &MyFormGestionStock::Valider_Article_Click);
			// 
			// Action
			// 
			this->Action->AutoSize = true;
			this->Action->Location = System::Drawing::Point(113, 72);
			this->Action->Name = L"Action";
			this->Action->Size = System::Drawing::Size(223, 20);
			this->Action->TabIndex = 7;
			this->Action->Text = L"~~ Selectionnez une action ~~";
			// 
			// rechecher_article
			// 
			this->rechecher_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->rechecher_article->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->rechecher_article->FlatAppearance->BorderSize = 2;
			this->rechecher_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rechecher_article->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rechecher_article->Location = System::Drawing::Point(745, 661);
			this->rechecher_article->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->rechecher_article->Name = L"rechecher_article";
			this->rechecher_article->Size = System::Drawing::Size(290, 62);
			this->rechecher_article->TabIndex = 9;
			this->rechecher_article->Text = L"rechecher article";
			this->rechecher_article->UseVisualStyleBackColor = false;
			this->rechecher_article->Click += gcnew System::EventHandler(this, &MyFormGestionStock::rechecher_article_Click);
			// 
			// MyFormGestionStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1423, 808);
			this->Controls->Add(this->rechecher_article);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Rechercher_stock);
			this->Controls->Add(this->ajout_objet);
			this->Controls->Add(this->load);
			this->Controls->Add(this->dataGridView1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyFormGestionStock";
			this->Text = L"MyFormGestionStock";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionStock::MyFormGestionStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void load_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = true;
		txt_id_article->Visible = false;
		id_article->Visible = false;
		txt_id_stock->Visible = false;
		id_stock->Visible = false;
		Valider_Article->Visible = false;
		Valider_Stock->Visible = false;
		this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->aficherTousLesStock("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}

	private: System::Void rechercher_stock_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		txt_id_article->Visible = false;
		id_article->Visible = false;
		txt_id_stock->Visible = true;
		id_stock->Visible = true;
		Valider_Article->Visible = false;
		Valider_Stock->Visible = true;
	}
	private: System::Void ajout_objet_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormArticle^ myForm_article = gcnew MyFormArticle();
		myForm_article->Show();
	}
	private: System::Void MyFormGestionStock_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->aficherTousLesStock("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void rechecher_article_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		txt_id_article->Visible = true;
		id_article->Visible = true;
		txt_id_stock->Visible = false;
		id_stock->Visible = false;
		Valider_Article->Visible = true;
		Valider_Stock->Visible = false;
	}
private: System::Void Valider_Article_Click(System::Object^ sender, System::EventArgs^ e) {
	Int32 id_art;
	if (Int32::TryParse(id_article->Text, id_art)) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
		this->dataGridView1->Refresh();

		this->oDs = this->oSvc->aficherStockOuArticle("Rsl", 0, id_art);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		Valider_Article->Visible = false;
	}
	else {
		MessageBox::Show("La valeur dans id_article n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void Valider_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
	Int32 id_sto;
	if (Int32::TryParse(id_stock->Text, id_sto)) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->aficherStockOuArticle("Rsl", id_sto, 0);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		Valider_Stock->Visible = false;
	}
	else {
		MessageBox::Show("La valeur dans id_stock n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
