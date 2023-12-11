#pragma once
#include "CLservices.h"
namespace MININFPROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormArticle
	/// </summary>
	public ref class MyFormArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			Action->Visible = true;
			IdArticles->Visible = false;
			NomArticles->Visible = false;
			PrixArticles->Visible = false;
			IdArticles_label->Visible = false;
			NomArticles_label->Visible = false;
			PrixArticles_label->Visible = false;
			Valider_supprimer->Visible = false;
			Valider_Créer->Visible = false;
			Valider_modifier->Visible = false;
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::CLservices_stock_article^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ load;
	private: System::Windows::Forms::Button^ ajouter;
	private: System::Windows::Forms::Button^ modifier;
	private: System::Windows::Forms::Button^ suprimer;
	protected:




	private: System::Windows::Forms::TextBox^ IdArticles;
	private: System::Windows::Forms::TextBox^ NomArticles;
	private: System::Windows::Forms::TextBox^ PrixArticles;
	private: System::Windows::Forms::Label^ IdArticles_label;
	private: System::Windows::Forms::Label^ NomArticles_label;
	private: System::Windows::Forms::Label^ PrixArticles_label;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Action;
	private: System::Windows::Forms::Button^ Valider_supprimer;
	private: System::Windows::Forms::Button^ Valider_Créer;
	private: System::Windows::Forms::Button^ Valider_modifier;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormArticle::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->load = (gcnew System::Windows::Forms::Button());
			this->ajouter = (gcnew System::Windows::Forms::Button());
			this->modifier = (gcnew System::Windows::Forms::Button());
			this->suprimer = (gcnew System::Windows::Forms::Button());
			this->IdArticles = (gcnew System::Windows::Forms::TextBox());
			this->NomArticles = (gcnew System::Windows::Forms::TextBox());
			this->PrixArticles = (gcnew System::Windows::Forms::TextBox());
			this->IdArticles_label = (gcnew System::Windows::Forms::Label());
			this->NomArticles_label = (gcnew System::Windows::Forms::Label());
			this->PrixArticles_label = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Valider_modifier = (gcnew System::Windows::Forms::Button());
			this->Valider_Créer = (gcnew System::Windows::Forms::Button());
			this->Valider_supprimer = (gcnew System::Windows::Forms::Button());
			this->Action = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1396, 386);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormArticle::dataGridView1_CellContentClick);
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
			this->load->Click += gcnew System::EventHandler(this, &MyFormArticle::load_Click);
			// 
			// ajouter
			// 
			this->ajouter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ajouter->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->ajouter->FlatAppearance->BorderSize = 2;
			this->ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ajouter->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ajouter->Location = System::Drawing::Point(576, 659);
			this->ajouter->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ajouter->Name = L"ajouter";
			this->ajouter->Size = System::Drawing::Size(132, 62);
			this->ajouter->TabIndex = 2;
			this->ajouter->Text = L"Créer";
			this->ajouter->UseVisualStyleBackColor = false;
			this->ajouter->Click += gcnew System::EventHandler(this, &MyFormArticle::ajouter_Click);
			// 
			// modifier
			// 
			this->modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->modifier->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->modifier->FlatAppearance->BorderSize = 2;
			this->modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modifier->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->modifier->Location = System::Drawing::Point(576, 731);
			this->modifier->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->modifier->Name = L"modifier";
			this->modifier->Size = System::Drawing::Size(290, 62);
			this->modifier->TabIndex = 3;
			this->modifier->Text = L"Modifier";
			this->modifier->UseVisualStyleBackColor = false;
			this->modifier->Click += gcnew System::EventHandler(this, &MyFormArticle::modifier_Click);
			// 
			// suprimer
			// 
			this->suprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->suprimer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->suprimer->FlatAppearance->BorderSize = 2;
			this->suprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->suprimer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->suprimer->Location = System::Drawing::Point(735, 659);
			this->suprimer->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->suprimer->Name = L"suprimer";
			this->suprimer->Size = System::Drawing::Size(132, 62);
			this->suprimer->TabIndex = 4;
			this->suprimer->Text = L"Supprimer";
			this->suprimer->UseVisualStyleBackColor = false;
			this->suprimer->Click += gcnew System::EventHandler(this, &MyFormArticle::suprimer_Click);
			// 
			// IdArticles
			// 
			this->IdArticles->Location = System::Drawing::Point(35, 54);
			this->IdArticles->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IdArticles->Name = L"IdArticles";
			this->IdArticles->Size = System::Drawing::Size(112, 26);
			this->IdArticles->TabIndex = 5;
			// 
			// NomArticles
			// 
			this->NomArticles->Location = System::Drawing::Point(266, 54);
			this->NomArticles->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NomArticles->Name = L"NomArticles";
			this->NomArticles->Size = System::Drawing::Size(112, 26);
			this->NomArticles->TabIndex = 6;
			// 
			// PrixArticles
			// 
			this->PrixArticles->Location = System::Drawing::Point(500, 54);
			this->PrixArticles->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->PrixArticles->Name = L"PrixArticles";
			this->PrixArticles->Size = System::Drawing::Size(112, 26);
			this->PrixArticles->TabIndex = 7;
			// 
			// IdArticles_label
			// 
			this->IdArticles_label->AutoSize = true;
			this->IdArticles_label->Location = System::Drawing::Point(36, 30);
			this->IdArticles_label->Name = L"IdArticles_label";
			this->IdArticles_label->Size = System::Drawing::Size(79, 20);
			this->IdArticles_label->TabIndex = 8;
			this->IdArticles_label->Text = L"ID_Article";
			this->IdArticles_label->Click += gcnew System::EventHandler(this, &MyFormArticle::txt_id_stock_Click);
			// 
			// NomArticles_label
			// 
			this->NomArticles_label->AutoSize = true;
			this->NomArticles_label->Location = System::Drawing::Point(267, 30);
			this->NomArticles_label->Name = L"NomArticles_label";
			this->NomArticles_label->Size = System::Drawing::Size(42, 20);
			this->NomArticles_label->TabIndex = 9;
			this->NomArticles_label->Text = L"Nom";
			this->NomArticles_label->Click += gcnew System::EventHandler(this, &MyFormArticle::label1_Click);
			// 
			// PrixArticles_label
			// 
			this->PrixArticles_label->AutoSize = true;
			this->PrixArticles_label->Location = System::Drawing::Point(501, 30);
			this->PrixArticles_label->Name = L"PrixArticles_label";
			this->PrixArticles_label->Size = System::Drawing::Size(34, 20);
			this->PrixArticles_label->TabIndex = 10;
			this->PrixArticles_label->Text = L"Prix";
			this->PrixArticles_label->Click += gcnew System::EventHandler(this, &MyFormArticle::label2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Valider_modifier);
			this->panel1->Controls->Add(this->Valider_Créer);
			this->panel1->Controls->Add(this->Valider_supprimer);
			this->panel1->Controls->Add(this->Action);
			this->panel1->Controls->Add(this->PrixArticles_label);
			this->panel1->Controls->Add(this->NomArticles_label);
			this->panel1->Controls->Add(this->IdArticles_label);
			this->panel1->Controls->Add(this->PrixArticles);
			this->panel1->Controls->Add(this->NomArticles);
			this->panel1->Controls->Add(this->IdArticles);
			this->panel1->Location = System::Drawing::Point(403, 428);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(649, 168);
			this->panel1->TabIndex = 11;
			// 
			// Valider_modifier
			// 
			this->Valider_modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Valider_modifier->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Valider_modifier->FlatAppearance->BorderSize = 2;
			this->Valider_modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Valider_modifier->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Valider_modifier->Location = System::Drawing::Point(539, 117);
			this->Valider_modifier->Name = L"Valider_modifier";
			this->Valider_modifier->Size = System::Drawing::Size(95, 38);
			this->Valider_modifier->TabIndex = 14;
			this->Valider_modifier->Text = L"Valider";
			this->Valider_modifier->UseVisualStyleBackColor = false;
			this->Valider_modifier->Click += gcnew System::EventHandler(this, &MyFormArticle::Valider_modifier_Click);
			// 
			// Valider_Créer
			// 
			this->Valider_Créer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Valider_Créer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Valider_Créer->FlatAppearance->BorderSize = 2;
			this->Valider_Créer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Valider_Créer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Valider_Créer->Location = System::Drawing::Point(539, 117);
			this->Valider_Créer->Name = L"Valider_Créer";
			this->Valider_Créer->Size = System::Drawing::Size(95, 38);
			this->Valider_Créer->TabIndex = 13;
			this->Valider_Créer->Text = L"Valider";
			this->Valider_Créer->UseVisualStyleBackColor = false;
			this->Valider_Créer->Click += gcnew System::EventHandler(this, &MyFormArticle::Valider_Créer_Click);
			// 
			// Valider_supprimer
			// 
			this->Valider_supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Valider_supprimer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Valider_supprimer->FlatAppearance->BorderSize = 2;
			this->Valider_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Valider_supprimer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Valider_supprimer->Location = System::Drawing::Point(539, 117);
			this->Valider_supprimer->Name = L"Valider_supprimer";
			this->Valider_supprimer->Size = System::Drawing::Size(95, 38);
			this->Valider_supprimer->TabIndex = 12;
			this->Valider_supprimer->Text = L"Valider";
			this->Valider_supprimer->UseVisualStyleBackColor = false;
			this->Valider_supprimer->Click += gcnew System::EventHandler(this, &MyFormArticle::Valider_supprimer_Click);
			// 
			// Action
			// 
			this->Action->AutoSize = true;
			this->Action->Location = System::Drawing::Point(220, 75);
			this->Action->Name = L"Action";
			this->Action->Size = System::Drawing::Size(223, 20);
			this->Action->TabIndex = 11;
			this->Action->Text = L"~~ Selectionnez une action ~~";
			// 
			// MyFormArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1423, 808);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->suprimer);
			this->Controls->Add(this->modifier);
			this->Controls->Add(this->ajouter);
			this->Controls->Add(this->load);
			this->Controls->Add(this->dataGridView1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyFormArticle";
			this->Text = L"MyFormArticle";
			this->Load += gcnew System::EventHandler(this, &MyFormArticle::MyFormArticle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void load_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = true;
		IdArticles->Visible = false;
		NomArticles->Visible = false;
		PrixArticles->Visible = false;
		IdArticles_label->Visible = false;
		NomArticles_label->Visible = false;
		PrixArticles_label->Visible = false;
		Valider_supprimer->Visible = false;
		Valider_Créer->Visible = false;
		Valider_modifier->Visible = false;


		this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->aficherAticle("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		NomArticles_label->Visible = true;
		PrixArticles_label->Visible = true;
		NomArticles->Visible = true;
		PrixArticles->Visible = true;
		Valider_Créer->Visible = true;
		IdArticles->Visible = false;
		IdArticles_label->Visible = false;
		Valider_supprimer->Visible = false;
		Valider_modifier->Visible = false;
	}

	private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		IdArticles->Visible = true;
		NomArticles->Visible = true;
		PrixArticles->Visible = true;
		IdArticles_label->Visible = true;
		NomArticles_label->Visible = true;
		PrixArticles_label->Visible = true;
		Valider_modifier->Visible = true;
		Valider_supprimer->Visible = false;
		Valider_Créer->Visible = false;
	}

	private: System::Void suprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		IdArticles->Visible = true;
		NomArticles->Visible = false;
		PrixArticles->Visible = false;
		IdArticles_label->Visible = true;
		NomArticles_label->Visible = false;
		PrixArticles_label->Visible = false;
		Valider_modifier->Visible = false;
		Valider_supprimer->Visible = true;
		Valider_Créer->Visible = false;


	}
	private: System::Void txt_id_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyFormArticle_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->aficherAticle("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}


		   bool AreTextBoxesNotEmpty() {
			   return !String::IsNullOrWhiteSpace(NomArticles->Text) &&
				   !String::IsNullOrWhiteSpace(PrixArticles->Text);
		   }

private: System::Void Valider_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	Int32 id_art;
	if (Int32::TryParse(IdArticles->Text, id_art)) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
		int id = Convert::ToInt32(this->IdArticles->Text);
		this->oSvc->deleteArticle(id);
		Valider_supprimer->Visible = false;
	}
	else {
		MessageBox::Show("La valeur dans id_article n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Valider_Créer_Click(System::Object^ sender, System::EventArgs^ e) {
	Single prix;
	if (Single::TryParse(PrixArticles->Text, prix)){
		if (AreTextBoxesNotEmpty()) {
			this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();
			System::String^ nom = this->NomArticles->Text;
			this->oSvc->insererUnArticle(nom, prix);
			Valider_Créer->Visible = false;
		}
		else {
			MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("La valeur de prix n'est pas un reel valide", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Valider_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	Int32 id_art;
	Single prix;
	if (Int32::TryParse(IdArticles->Text, id_art) && Single::TryParse(PrixArticles->Text, prix)) {
		if (AreTextBoxesNotEmpty()) {
			this->oSvc = gcnew NS_Comp_Svc::CLservices_stock_article();

			System::String^ nom = this->NomArticles->Text;

			this->oSvc->modifierArticle(id_art, nom, prix);

			Valider_modifier->Visible = false;
		}
		else {
			MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("La valeur dans id_article n'est pas un entier valide.\n La valeur de prix n'est pas un reel valide", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}