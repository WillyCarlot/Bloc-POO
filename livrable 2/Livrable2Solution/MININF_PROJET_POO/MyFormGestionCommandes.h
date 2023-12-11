/*MATHIS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#pragma once
#include "CLservices.h"

namespace POOP6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormGestionCommandes
	/// </summary>
	public ref class MyFormGestionCommandes : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionCommandes(void)
		{
			InitializeComponent();
			//
			oSvcCommande = gcnew NS_Comp_Svc::CLservices_Commande(); // Initialiser oSvcCommande
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormGestionCommandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Comp_Svc::CLservices_Commande^ oSvcCommande; //oublie pas ------------------------------------
	private: System::Data::DataSet^ oDsCommande; //oublie pas ------------------------------------------
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			//
			// dataGridView1
			//
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ScrollBar;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1198, 410);
			this->dataGridView1->TabIndex = 0;
			//
			// button2
			//
			this->button2->Location = System::Drawing::Point(12, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 63);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Créer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Créer_Click);
			//
			// button3
			//
			this->button3->Location = System::Drawing::Point(12, 520);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(290, 63);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Modifier_Click);
			//
			// button4
			//
			this->button4->Location = System::Drawing::Point(170, 439);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 63);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Supprimer_Click);
			//
			// button5
			//
			this->button5->Location = System::Drawing::Point(1078, 716);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 63);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Afficher";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Afficher_Click);
			//
			// textBox1
			//
			this->textBox1->Location = System::Drawing::Point(381, 482);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 26);
			this->textBox1->TabIndex = 6;
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->Location = System::Drawing::Point(388, 459);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"ID";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(651, 459);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Référence";
			//
			// textBox2
			//
			this->textBox2->Location = System::Drawing::Point(644, 482);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 26);
			this->textBox2->TabIndex = 8;
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Location = System::Drawing::Point(932, 459);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Moyen De Paiement";
			//
			// textBox3
			//
			this->textBox3->Location = System::Drawing::Point(925, 482);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 26);
			this->textBox3->TabIndex = 10;
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->Location = System::Drawing::Point(388, 566);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Date De Livraison";
			//
			// textBox4
			//
			this->textBox4->Location = System::Drawing::Point(381, 589);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(165, 26);
			this->textBox4->TabIndex = 12;
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Location = System::Drawing::Point(651, 566);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Date D\'Emission";
			//
			// textBox5
			//
			this->textBox5->Location = System::Drawing::Point(644, 589);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(174, 26);
			this->textBox5->TabIndex = 14;
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Location = System::Drawing::Point(932, 566);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Date De Paiement";
			//
			// textBox6
			//
			this->textBox6->Location = System::Drawing::Point(925, 589);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 26);
			this->textBox6->TabIndex = 16;
			//
			// button6
			//
			this->button6->Location = System::Drawing::Point(972, 744);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 35);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Valider";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Création_Click);
			//
			// button7
			//
			this->button7->Location = System::Drawing::Point(522, 473);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 35);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Valider";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Supp_Click);
			//
			// button1
			//
			this->button1->Location = System::Drawing::Point(1078, 675);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 35);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Modif_Click);
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Info;
			this->label7->Location = System::Drawing::Point(662, 661);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 20);
			this->label7->TabIndex = 23;
			this->label7->Text = L"ID Client";
			//
			// textBox7
			//
			this->textBox7->Location = System::Drawing::Point(655, 684);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(111, 26);
			this->textBox7->TabIndex = 22;
			//
			// MyFormGestionCommandes
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(1222, 791);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormGestionCommandes";
			this->Text = L"GestionCommandes";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionCommandes::MyFormGestionCommandes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Créer_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Visible = false;
		label1->Visible = false;
		textBox2->Visible = true;
		label2->Visible = true;
		textBox3->Visible = true;
		label3->Visible = true;
		textBox4->Visible = true;
		label4->Visible = true;
		textBox5->Visible = true;
		label5->Visible = true;
		textBox6->Visible = true;
		label6->Visible = true;
		button7->Visible = false;
		button6->Visible = true;
		button1->Visible = false;
		textBox7->Visible = true;
		label7->Visible = true;
	}

private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Visible = true;
	label1->Visible = true;
	textBox2->Visible = true;
	label2->Visible = true;
	textBox3->Visible = true;
	label3->Visible = true;
	textBox4->Visible = true;
	label4->Visible = true;
	textBox5->Visible = true;
	label5->Visible = true;
	textBox6->Visible = true;
	label6->Visible = true;
	button7->Visible = false;
	button6->Visible = false;
	button1->Visible = true;
	textBox7->Visible = true;
	label7->Visible = true;
}

private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Visible = true;
	label1->Visible = true;
	textBox2->Visible = false;
	label2->Visible = false;
	textBox3->Visible = false;
	label3->Visible = false;
	textBox4->Visible = false;
	label4->Visible = false;
	textBox5->Visible = false;
	label5->Visible = false;
	textBox6->Visible = false;
	label6->Visible = false;
	button7->Visible = true;
	button6->Visible = false;
	button1->Visible = false;
	textBox7->Visible = false;
	label7->Visible = false;
}

private: System::Void Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDsCommande = this->oSvcCommande->selectionnerToutesLesCommandes("Rsl");
	this->dataGridView1->DataSource = this->oDsCommande;
	this->dataGridView1->DataMember = "Rsl";

	textBox1->Visible = false;
	label1->Visible = false;
	textBox2->Visible = false;
	label2->Visible = false;
	textBox3->Visible = false;
	label3->Visible = false;
	textBox4->Visible = false;
	label4->Visible = false;
	textBox5->Visible = false;
	label5->Visible = false;
	textBox6->Visible = false;
	label6->Visible = false;
	button7->Visible = false;
	button6->Visible = false;
	button1->Visible = false;
	textBox7->Visible = false;
	label7->Visible = false;
}


	private: System::Void MyFormGestionCommandes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDsCommande = this->oSvcCommande->selectionnerToutesLesCommandes("Rsl");
		this->dataGridView1->DataSource = this->oDsCommande;
		this->dataGridView1->DataMember = "Rsl";
		// Masquer toutes les TextBox et les Labels
		textBox1->Visible = false;
		label1->Visible = false;
		textBox2->Visible = false;
		label2->Visible = false;
		textBox3->Visible = false;
		label3->Visible = false;
		textBox4->Visible = false;
		label4->Visible = false;
		textBox5->Visible = false;
		label5->Visible = false;
		textBox6->Visible = false;
		label6->Visible = false;
		button7->Visible = false;
		button6->Visible = false;
		button1->Visible = false;
		textBox7->Visible = false;
		label7->Visible = false;

	}



private: System::Void Supp_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Modif_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Création_Click(System::Object^ sender, System::EventArgs^ e) {
	// Convertir la valeur de la textBox7 en entier (int)
	int valeurTextBox7 = System::Convert::ToInt32(this->textBox7->Text);

	this->oSvcCommande->CréerUneCommande(this->textBox2->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->textBox3->Text, valeurTextBox7);
	//MessageBox::Show("id_client écrit"+ valeurTextBox7);
}
};
}
*/


//AUGGY --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#pragma once
#include "CLservices.h"
#include <iostream>
#include <vector>
#include <string>


namespace MININFPROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormGestionCommandes
	/// </summary>
	public ref class MyFormGestionCommandes : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionCommandes(void)
		{
			InitializeComponent();
			//
			oSvcCommande = gcnew NS_Comp_Svc::CLservices_Commande(); // Initialiser oSvcCommande 
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormGestionCommandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ ZoneAffichageBaseDeDonnées;
	private: NS_Comp_Svc::CLservices_Commande^ oSvcCommande; //oublie pas ------------------------------------
	private: System::Data::DataSet^ oDsCommande; //oublie pas ------------------------------------------
	protected:

	private: System::Windows::Forms::Button^ Créer;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Afficher;
	private: System::Windows::Forms::TextBox^ ID_commande_textBox;
	private: System::Windows::Forms::Label^ ID_commande_label;
	private: System::Windows::Forms::Label^ référence_label;
	private: System::Windows::Forms::TextBox^ référence_textBox;
	private: System::Windows::Forms::Label^ moyenPaiement_label;
	private: System::Windows::Forms::TextBox^ moyenPaiement_textBox;
	private: System::Windows::Forms::Label^ dateLivraison_label;

	private: System::Windows::Forms::Label^ dateEmission_label;

	private: System::Windows::Forms::Label^ datePaiement_label;

	private: System::Windows::Forms::Button^ validation_créer;
	private: System::Windows::Forms::Button^ validation_supprimer;
	private: System::Windows::Forms::Button^ validation_modifier;
	private: System::Windows::Forms::Label^ IdClient_label;
	private: System::Windows::Forms::TextBox^ IdClient_textBox;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DateTimePicker^ dateLivraison_Picker;
	private: System::Windows::Forms::DateTimePicker^ dateEmission_Picker;
	private: System::Windows::Forms::DateTimePicker^ datePaiement_Picker;
	private: System::Windows::Forms::TextBox^ IdArticles_textBox;
	private: System::Windows::Forms::Label^ IdArticles_label;
	private: System::Windows::Forms::Label^ Action;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormGestionCommandes::typeid));
			this->ZoneAffichageBaseDeDonnées = (gcnew System::Windows::Forms::DataGridView());
			this->Créer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Afficher = (gcnew System::Windows::Forms::Button());
			this->ID_commande_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ID_commande_label = (gcnew System::Windows::Forms::Label());
			this->référence_label = (gcnew System::Windows::Forms::Label());
			this->référence_textBox = (gcnew System::Windows::Forms::TextBox());
			this->moyenPaiement_label = (gcnew System::Windows::Forms::Label());
			this->moyenPaiement_textBox = (gcnew System::Windows::Forms::TextBox());
			this->dateLivraison_label = (gcnew System::Windows::Forms::Label());
			this->dateEmission_label = (gcnew System::Windows::Forms::Label());
			this->datePaiement_label = (gcnew System::Windows::Forms::Label());
			this->validation_créer = (gcnew System::Windows::Forms::Button());
			this->validation_supprimer = (gcnew System::Windows::Forms::Button());
			this->validation_modifier = (gcnew System::Windows::Forms::Button());
			this->IdClient_label = (gcnew System::Windows::Forms::Label());
			this->IdClient_textBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Action = (gcnew System::Windows::Forms::Label());
			this->IdArticles_textBox = (gcnew System::Windows::Forms::TextBox());
			this->IdArticles_label = (gcnew System::Windows::Forms::Label());
			this->datePaiement_Picker = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateEmission_Picker = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateLivraison_Picker = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZoneAffichageBaseDeDonnées))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ZoneAffichageBaseDeDonnées
			// 
			this->ZoneAffichageBaseDeDonnées->BackgroundColor = System::Drawing::SystemColors::HighlightText;
			this->ZoneAffichageBaseDeDonnées->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ZoneAffichageBaseDeDonnées->Location = System::Drawing::Point(11, 10);
			this->ZoneAffichageBaseDeDonnées->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ZoneAffichageBaseDeDonnées->Name = L"ZoneAffichageBaseDeDonnées";
			this->ZoneAffichageBaseDeDonnées->RowHeadersWidth = 62;
			this->ZoneAffichageBaseDeDonnées->RowTemplate->Height = 28;
			this->ZoneAffichageBaseDeDonnées->Size = System::Drawing::Size(1242, 246);
			this->ZoneAffichageBaseDeDonnées->TabIndex = 0;

			// 
			// Créer
			// 
			this->Créer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Créer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Créer->FlatAppearance->BorderSize = 2;
			this->Créer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Créer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Créer->Location = System::Drawing::Point(519, 514);
			this->Créer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Créer->Name = L"Créer";
			this->Créer->Size = System::Drawing::Size(117, 50);
			this->Créer->TabIndex = 2;
			this->Créer->Text = L"Créer";
			this->Créer->UseVisualStyleBackColor = false;
			this->Créer->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Créer_Click);
			// 
			// Modifier
			// 
			this->Modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Modifier->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Modifier->FlatAppearance->BorderSize = 2;
			this->Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Modifier->Location = System::Drawing::Point(519, 579);
			this->Modifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(258, 50);
			this->Modifier->TabIndex = 3;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = false;
			this->Modifier->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Supprimer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Supprimer->FlatAppearance->BorderSize = 2;
			this->Supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Supprimer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Supprimer->Location = System::Drawing::Point(659, 514);
			this->Supprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(117, 50);
			this->Supprimer->TabIndex = 4;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = false;
			this->Supprimer->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Supprimer_Click);
			// 
			// Afficher
			// 
			this->Afficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Afficher->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Afficher->FlatAppearance->BorderSize = 2;
			this->Afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Afficher->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Afficher->Location = System::Drawing::Point(1075, 566);
			this->Afficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(117, 50);
			this->Afficher->TabIndex = 5;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = false;
			this->Afficher->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Afficher_Click);
			// 
			// ID_commande_textBox
			// 
			this->ID_commande_textBox->Location = System::Drawing::Point(84, 37);
			this->ID_commande_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_commande_textBox->Name = L"ID_commande_textBox";
			this->ID_commande_textBox->Size = System::Drawing::Size(99, 22);
			this->ID_commande_textBox->TabIndex = 6;
			// 
			// ID_commande_label
			// 
			this->ID_commande_label->AutoSize = true;
			this->ID_commande_label->BackColor = System::Drawing::Color::Transparent;
			this->ID_commande_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ID_commande_label->Location = System::Drawing::Point(84, 18);
			this->ID_commande_label->Name = L"ID_commande_label";
			this->ID_commande_label->Size = System::Drawing::Size(20, 16);
			this->ID_commande_label->TabIndex = 7;
			this->ID_commande_label->Text = L"ID";
			// 
			// référence_label
			// 
			this->référence_label->AutoSize = true;
			this->référence_label->BackColor = System::Drawing::Color::Transparent;
			this->référence_label->Location = System::Drawing::Point(317, 19);
			this->référence_label->Name = L"référence_label";
			this->référence_label->Size = System::Drawing::Size(70, 16);
			this->référence_label->TabIndex = 9;
			this->référence_label->Text = L"Référence";
			// 
			// référence_textBox
			// 
			this->référence_textBox->Location = System::Drawing::Point(317, 37);
			this->référence_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->référence_textBox->Name = L"référence_textBox";
			this->référence_textBox->Size = System::Drawing::Size(155, 22);
			this->référence_textBox->TabIndex = 8;
			// 
			// moyenPaiement_label
			// 
			this->moyenPaiement_label->AutoSize = true;
			this->moyenPaiement_label->BackColor = System::Drawing::Color::Transparent;
			this->moyenPaiement_label->Location = System::Drawing::Point(567, 18);
			this->moyenPaiement_label->Name = L"moyenPaiement_label";
			this->moyenPaiement_label->Size = System::Drawing::Size(129, 16);
			this->moyenPaiement_label->TabIndex = 11;
			this->moyenPaiement_label->Text = L"Moyen De Paiement";
			// 
			// moyenPaiement_textBox
			// 
			this->moyenPaiement_textBox->Location = System::Drawing::Point(567, 37);
			this->moyenPaiement_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->moyenPaiement_textBox->Name = L"moyenPaiement_textBox";
			this->moyenPaiement_textBox->Size = System::Drawing::Size(168, 22);
			this->moyenPaiement_textBox->TabIndex = 10;
			// 
			// dateLivraison_label
			// 
			this->dateLivraison_label->AutoSize = true;
			this->dateLivraison_label->BackColor = System::Drawing::Color::Transparent;
			this->dateLivraison_label->Location = System::Drawing::Point(85, 104);
			this->dateLivraison_label->Name = L"dateLivraison_label";
			this->dateLivraison_label->Size = System::Drawing::Size(114, 16);
			this->dateLivraison_label->TabIndex = 13;
			this->dateLivraison_label->Text = L"Date De Livraison";
			// 
			// dateEmission_label
			// 
			this->dateEmission_label->AutoSize = true;
			this->dateEmission_label->BackColor = System::Drawing::Color::Transparent;
			this->dateEmission_label->Location = System::Drawing::Point(317, 104);
			this->dateEmission_label->Name = L"dateEmission_label";
			this->dateEmission_label->Size = System::Drawing::Size(107, 16);
			this->dateEmission_label->TabIndex = 15;
			this->dateEmission_label->Text = L"Date D\'Emission";
			// 
			// datePaiement_label
			// 
			this->datePaiement_label->AutoSize = true;
			this->datePaiement_label->BackColor = System::Drawing::Color::Transparent;
			this->datePaiement_label->Location = System::Drawing::Point(568, 104);
			this->datePaiement_label->Name = L"datePaiement_label";
			this->datePaiement_label->Size = System::Drawing::Size(117, 16);
			this->datePaiement_label->TabIndex = 17;
			this->datePaiement_label->Text = L"Date De Paiement";
			// 
			// validation_créer
			// 
			this->validation_créer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->validation_créer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->validation_créer->FlatAppearance->BorderSize = 2;
			this->validation_créer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->validation_créer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->validation_créer->Location = System::Drawing::Point(704, 187);
			this->validation_créer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->validation_créer->Name = L"validation_créer";
			this->validation_créer->Size = System::Drawing::Size(89, 28);
			this->validation_créer->TabIndex = 19;
			this->validation_créer->Text = L"Valider";
			this->validation_créer->UseVisualStyleBackColor = false;
			this->validation_créer->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Création_Click);
			// 
			// validation_supprimer
			// 
			this->validation_supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->validation_supprimer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->validation_supprimer->FlatAppearance->BorderSize = 2;
			this->validation_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->validation_supprimer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->validation_supprimer->Location = System::Drawing::Point(704, 187);
			this->validation_supprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->validation_supprimer->Name = L"validation_supprimer";
			this->validation_supprimer->Size = System::Drawing::Size(89, 28);
			this->validation_supprimer->TabIndex = 20;
			this->validation_supprimer->Text = L"Valider";
			this->validation_supprimer->UseVisualStyleBackColor = false;
			this->validation_supprimer->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Supp_Click);
			// 
			// validation_modifier
			// 
			this->validation_modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->validation_modifier->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->validation_modifier->FlatAppearance->BorderSize = 2;
			this->validation_modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->validation_modifier->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->validation_modifier->Location = System::Drawing::Point(704, 187);
			this->validation_modifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->validation_modifier->Name = L"validation_modifier";
			this->validation_modifier->Size = System::Drawing::Size(89, 28);
			this->validation_modifier->TabIndex = 21;
			this->validation_modifier->Text = L"Valider";
			this->validation_modifier->UseVisualStyleBackColor = false;
			this->validation_modifier->Click += gcnew System::EventHandler(this, &MyFormGestionCommandes::Modif_Click);
			// 
			// IdClient_label
			// 
			this->IdClient_label->AutoSize = true;
			this->IdClient_label->BackColor = System::Drawing::Color::Transparent;
			this->IdClient_label->Location = System::Drawing::Point(343, 172);
			this->IdClient_label->Name = L"IdClient_label";
			this->IdClient_label->Size = System::Drawing::Size(56, 16);
			this->IdClient_label->TabIndex = 23;
			this->IdClient_label->Text = L"ID Client";
			// 
			// IdClient_textBox
			// 
			this->IdClient_textBox->Location = System::Drawing::Point(342, 190);
			this->IdClient_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IdClient_textBox->Name = L"IdClient_textBox";
			this->IdClient_textBox->Size = System::Drawing::Size(99, 22);
			this->IdClient_textBox->TabIndex = 22;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->Action);
			this->panel1->Controls->Add(this->IdArticles_textBox);
			this->panel1->Controls->Add(this->IdArticles_label);
			this->panel1->Controls->Add(this->datePaiement_Picker);
			this->panel1->Controls->Add(this->validation_modifier);
			this->panel1->Controls->Add(this->dateEmission_Picker);
			this->panel1->Controls->Add(this->validation_créer);
			this->panel1->Controls->Add(this->validation_supprimer);
			this->panel1->Controls->Add(this->IdClient_label);
			this->panel1->Controls->Add(this->IdClient_textBox);
			this->panel1->Controls->Add(this->datePaiement_label);
			this->panel1->Controls->Add(this->dateEmission_label);
			this->panel1->Controls->Add(this->dateLivraison_label);
			this->panel1->Controls->Add(this->dateLivraison_Picker);
			this->panel1->Controls->Add(this->moyenPaiement_label);
			this->panel1->Controls->Add(this->moyenPaiement_textBox);
			this->panel1->Controls->Add(this->référence_label);
			this->panel1->Controls->Add(this->référence_textBox);
			this->panel1->Controls->Add(this->ID_commande_label);
			this->panel1->Controls->Add(this->ID_commande_textBox);
			this->panel1->Location = System::Drawing::Point(261, 261);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(816, 231);
			this->panel1->TabIndex = 24;
			// 
			// Action
			// 
			this->Action->AutoSize = true;
			this->Action->Location = System::Drawing::Point(305, 104);
			this->Action->Name = L"Action";
			this->Action->Size = System::Drawing::Size(190, 16);
			this->Action->TabIndex = 29;
			this->Action->Text = L"~~ Selectionnez une action ~~";
			// 
			// IdArticles_textBox
			// 
			this->IdArticles_textBox->Location = System::Drawing::Point(84, 190);
			this->IdArticles_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IdArticles_textBox->Name = L"IdArticles_textBox";
			this->IdArticles_textBox->Size = System::Drawing::Size(99, 22);
			this->IdArticles_textBox->TabIndex = 28;
			// 
			// IdArticles_label
			// 
			this->IdArticles_label->AutoSize = true;
			this->IdArticles_label->BackColor = System::Drawing::Color::Transparent;
			this->IdArticles_label->Location = System::Drawing::Point(85, 172);
			this->IdArticles_label->Name = L"IdArticles_label";
			this->IdArticles_label->Size = System::Drawing::Size(67, 16);
			this->IdArticles_label->TabIndex = 27;
			this->IdArticles_label->Text = L"ID Articles";
			// 
			// datePaiement_Picker
			// 
			this->datePaiement_Picker->CustomFormat = L"yyyy-MM-dd";
			this->datePaiement_Picker->Location = System::Drawing::Point(567, 122);
			this->datePaiement_Picker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->datePaiement_Picker->Name = L"datePaiement_Picker";
			this->datePaiement_Picker->Size = System::Drawing::Size(178, 22);
			this->datePaiement_Picker->TabIndex = 26;
			// 
			// dateEmission_Picker
			// 
			this->dateEmission_Picker->CustomFormat = L"yyyy-MM-dd";
			this->dateEmission_Picker->Location = System::Drawing::Point(317, 122);
			this->dateEmission_Picker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateEmission_Picker->Name = L"dateEmission_Picker";
			this->dateEmission_Picker->Size = System::Drawing::Size(178, 22);
			this->dateEmission_Picker->TabIndex = 25;
			// 
			// dateLivraison_Picker
			// 
			this->dateLivraison_Picker->CustomFormat = L"yyyy-MM-dd";
			this->dateLivraison_Picker->ImeMode = System::Windows::Forms::ImeMode::On;
			this->dateLivraison_Picker->Location = System::Drawing::Point(84, 122);
			this->dateLivraison_Picker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateLivraison_Picker->Name = L"dateLivraison_Picker";
			this->dateLivraison_Picker->Size = System::Drawing::Size(178, 22);
			this->dateLivraison_Picker->TabIndex = 24;
			// 
			// MyFormGestionCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1265, 646);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Afficher);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Créer);
			this->Controls->Add(this->ZoneAffichageBaseDeDonnées);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyFormGestionCommandes";
			this->Text = L"GestionCommandes";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionCommandes::MyFormGestionCommandes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZoneAffichageBaseDeDonnées))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void Créer_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		ID_commande_textBox->Visible = false;
		ID_commande_label->Visible = false;
		référence_textBox->Visible = true;
		référence_label->Visible = true;
		moyenPaiement_textBox->Visible = true;
		moyenPaiement_label->Visible = true;
		dateLivraison_Picker->Visible = true;
		dateLivraison_label->Visible = true;
		dateEmission_Picker->Visible = true;
		dateEmission_label->Visible = true;
		datePaiement_Picker->Visible = true;
		datePaiement_label->Visible = true;
		validation_supprimer->Visible = false;
		validation_créer->Visible = true;
		validation_modifier->Visible = false;
		IdClient_textBox->Visible = true;
		IdClient_label->Visible = true;
		IdArticles_label->Visible = true;
		IdArticles_textBox->Visible = true;
	}

	private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		ID_commande_textBox->Visible = true;
		ID_commande_label->Visible = true;
		référence_textBox->Visible = true;
		référence_label->Visible = true;
		moyenPaiement_textBox->Visible = true;
		moyenPaiement_label->Visible = true;
		dateLivraison_Picker->Visible = true;
		dateLivraison_label->Visible = true;
		dateEmission_Picker->Visible = true;
		dateEmission_label->Visible = true;
		datePaiement_Picker->Visible = true;
		datePaiement_label->Visible = true;
		validation_supprimer->Visible = false;
		validation_créer->Visible = false;
		validation_modifier->Visible = true;
		IdClient_textBox->Visible = true;
		IdClient_label->Visible = true;
		IdArticles_label->Visible = true;
		IdArticles_textBox->Visible = true;
	}

	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;
		ID_commande_textBox->Visible = true;
		ID_commande_label->Visible = true;
		référence_textBox->Visible = false;
		référence_label->Visible = false;
		moyenPaiement_textBox->Visible = false;
		moyenPaiement_label->Visible = false;
		dateLivraison_Picker->Visible = false;
		dateLivraison_label->Visible = false;
		dateEmission_Picker->Visible = false;
		dateEmission_label->Visible = false;
		datePaiement_Picker->Visible = false;
		datePaiement_label->Visible = false;
		validation_supprimer->Visible = true;
		validation_créer->Visible = false;
		validation_modifier->Visible = false;
		IdClient_textBox->Visible = false;
		IdClient_label->Visible = false;
		IdArticles_label->Visible = false;
		IdArticles_textBox->Visible = false;
	}

	private: System::Void Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ZoneAffichageBaseDeDonnées->Refresh();
		this->oDsCommande = this->oSvcCommande->selectionnerToutesLesCommandes("Rsl");
		this->ZoneAffichageBaseDeDonnées->DataSource = this->oDsCommande;
		this->ZoneAffichageBaseDeDonnées->DataMember = "Rsl";
		Action->Visible = true;
		ID_commande_textBox->Visible = false;
		ID_commande_label->Visible = false;
		référence_textBox->Visible = false;
		référence_label->Visible = false;
		moyenPaiement_textBox->Visible = false;
		moyenPaiement_label->Visible = false;
		dateLivraison_Picker->Visible = false;
		dateLivraison_label->Visible = false;
		dateEmission_Picker->Visible = false;
		dateEmission_label->Visible = false;
		datePaiement_Picker->Visible = false;
		datePaiement_label->Visible = false;
		validation_supprimer->Visible = false;
		validation_créer->Visible = false;
		validation_modifier->Visible = false;
		IdClient_textBox->Visible = false;
		IdClient_label->Visible = false;
		IdArticles_label->Visible = false;
		IdArticles_textBox->Visible = false;
	}


	private: System::Void MyFormGestionCommandes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ZoneAffichageBaseDeDonnées->Refresh();
		this->oDsCommande = this->oSvcCommande->selectionnerToutesLesCommandes("Rsl");
		this->ZoneAffichageBaseDeDonnées->DataSource = this->oDsCommande;
		this->ZoneAffichageBaseDeDonnées->DataMember = "Rsl";
		// Masquer toutes les TextBox et les Labels
		Action->Visible = true;
		ID_commande_textBox->Visible = false;
		ID_commande_label->Visible = false;
		référence_textBox->Visible = false;
		référence_label->Visible = false;
		moyenPaiement_textBox->Visible = false;
		moyenPaiement_label->Visible = false;
		dateLivraison_Picker->Visible = false;
		dateLivraison_label->Visible = false;
		dateEmission_Picker->Visible = false;
		dateEmission_label->Visible = false;
		datePaiement_Picker->Visible = false;
		datePaiement_label->Visible = false;
		validation_supprimer->Visible = false;
		validation_créer->Visible = false;
		validation_modifier->Visible = false;
		IdClient_textBox->Visible = false;
		IdClient_label->Visible = false;
		IdArticles_label->Visible = false;
		IdArticles_textBox->Visible = false;

	}
		   bool AreTextBoxesNotEmpty() {
			   return !String::IsNullOrWhiteSpace(référence_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(moyenPaiement_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(IdArticles_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(IdClient_textBox->Text);
		   }

	private: System::Void Supp_Click(System::Object^ sender, System::EventArgs^ e) {

		Int32 id;
		if (Int32::TryParse(ID_commande_textBox->Text, id)) {

			this->oSvcCommande->SupprimerUneCommande(id);
			validation_supprimer->Visible = false;
		}
		else {
			MessageBox::Show("La valeur dans ID_commande n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
		




	private: System::Void Modif_Click(System::Object^ sender, System::EventArgs^ e) {


		Int32 id_Co;
		Int32 id_Cl;
		if (Int32::TryParse(ID_commande_textBox->Text, id_Co) && Int32::TryParse(IdClient_textBox->Text, id_Cl)) {
			if (AreTextBoxesNotEmpty()) {
				// Convertir la valeur de la ID_commande_textBox en entier (int)
				int valeurTextBoxID_commande = id_Co;
				// Convertir la valeur de la textBox7 en entier (int)
				int valeurTextBox7 = id_Cl;
				// Convertir la date en chaîne de caractères au format "yyyy-MM-dd"
				String^ dateLivraison = dateLivraison_Picker->Value.ToString("yyyy-MM-dd");
				String^ dateEmission = dateEmission_Picker->Value.ToString("yyyy-MM-dd");
				String^ datePaiement = datePaiement_Picker->Value.ToString("yyyy-MM-dd");

				this->oSvcCommande->ModifierUneCommande(valeurTextBoxID_commande, this->référence_textBox->Text, dateLivraison, dateEmission, datePaiement, this->moyenPaiement_textBox->Text, valeurTextBox7, this->IdArticles_textBox->Text);
				validation_modifier->Visible = false;
			}
			else {
				MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("La valeur dans ID_commande ou id_client n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}



	private: System::Void Création_Click(System::Object^ sender, System::EventArgs^ e) {
		Int32 id_Cl;
		if (Int32::TryParse(IdClient_textBox->Text, id_Cl)) {
			if (AreTextBoxesNotEmpty()) {

				// Convertir la valeur de la textBox7 en entier (int)
				int valeurTextBox7 = id_Cl;
				// Convertir la date en chaîne de caractères au format "yyyy-MM-dd"
				String^ dateLivraison = dateLivraison_Picker->Value.ToString("yyyy-MM-dd");
				String^ dateEmission = dateEmission_Picker->Value.ToString("yyyy-MM-dd");
				String^ datePaiement = datePaiement_Picker->Value.ToString("yyyy-MM-dd");

				this->oSvcCommande->CréerUneCommande(this->référence_textBox->Text, dateLivraison, dateEmission, datePaiement, this->moyenPaiement_textBox->Text, valeurTextBox7, this->IdArticles_textBox->Text);
				validation_créer->Visible = false;
			}
			else {

				MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("La valeur dans ID_client ou id_client n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}



		   // Fonction pour vider le contenu de toutes les TextBox
					  /*
					  void ViderContenuTextBox(std::vector<TextBox>& textBoxes) {
						  for (TextBox& textBox : textBoxes) {
							  textBox.content.clear();
						  }
					  }
					  */
	
};
}