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
	/// Description résumée de MyFormGestionPersonnel
	/// </summary>
	public ref class MyFormGestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			Action->Visible = true;

			Nom_textBox->Visible = false;
			Nom_label->Visible = false;

			Prenom_textBox->Visible = false;
			Prenom_label->Visible = false;

			Numero_textBox->Visible = false;
			Numero_label->Visible = false;

			Rue_textBox->Visible = false;
			Rue_label->Visible = false;

			ID_textBox->Visible = false;
			ID_label->Visible = false;
				
			CodePostal_comboBox->Visible = false;
			CodePostal_label->Visible = false;

			Pays_comboBox->Visible = false;
			Pays_label->Visible = false;

			Region_comboBox->Visible = false;
			Region_label->Visible = false;

			Ville_comboBox->Visible = false;
			Ville_label->Visible = false;

			IdSupH_textBox->Visible = false;
			IdSupH_label->Visible = false;

			NiveauH_textBox->Visible = false;
			NiveauH_label->Visible = false;

			DateNaissance_dateTimePicker->Visible = false;
			DateNaissance_label->Visible = false;

			DateDuJour_dateTimePicker->Visible = false;
			DateDuJour_label->Visible = false;

			Validation_Modifier->Visible = false;
			Validation_Supp->Visible = false;
			Validation_Créer->Visible = false;
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormGestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Comp_Svc::CLservices_Personnel^ oSvc; //oublie pas ------------------------------------
	private: System::Data::DataSet^ oDs;////oublie pas ------------------------------------
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Nom_textBox;
	private: System::Windows::Forms::TextBox^ Prenom_textBox;
	private: System::Windows::Forms::TextBox^ Numero_textBox;
	private: System::Windows::Forms::TextBox^ Rue_textBox;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ ID_textBox;
	private: System::Windows::Forms::ComboBox^ CodePostal_comboBox;



	private: System::Windows::Forms::ComboBox^ Pays_comboBox;

	private: System::Windows::Forms::ComboBox^ Region_comboBox;

	private: System::Windows::Forms::ComboBox^ Ville_comboBox;

	private: System::Windows::Forms::Label^ ID_label;
	private: System::Windows::Forms::Label^ Nom_label;
	private: System::Windows::Forms::Label^ Prenom_label;
	private: System::Windows::Forms::Label^ Numero_label;
	private: System::Windows::Forms::Label^ Rue_label;
	private: System::Windows::Forms::Label^ CodePostal_label;






	private: System::Windows::Forms::Label^ Ville_label;
	private: System::Windows::Forms::Label^ Region_label;
	private: System::Windows::Forms::Label^ Pays_label;



	private: System::Windows::Forms::TextBox^ IdSupH_textBox;
	private: System::Windows::Forms::TextBox^ NiveauH_textBox;


	private: System::Windows::Forms::Label^ IdSupH_label;
	private: System::Windows::Forms::Label^ NiveauH_label;



	private: System::Windows::Forms::DateTimePicker^ DateNaissance_dateTimePicker;
	private: System::Windows::Forms::Label^ DateNaissance_label;






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DateTimePicker^ DateDuJour_dateTimePicker;
	private: System::Windows::Forms::Label^ DateDuJour_label;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ Action;
	private: System::Windows::Forms::Button^ Validation_Modifier;
	private: System::Windows::Forms::Button^ Validation_Supp;
	private: System::Windows::Forms::Button^ Validation_Créer;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormGestionPersonnel::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Nom_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Prenom_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Numero_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Rue_textBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->ID_textBox = (gcnew System::Windows::Forms::TextBox());
			this->CodePostal_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Pays_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Region_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Ville_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ID_label = (gcnew System::Windows::Forms::Label());
			this->Nom_label = (gcnew System::Windows::Forms::Label());
			this->Prenom_label = (gcnew System::Windows::Forms::Label());
			this->Numero_label = (gcnew System::Windows::Forms::Label());
			this->Rue_label = (gcnew System::Windows::Forms::Label());
			this->CodePostal_label = (gcnew System::Windows::Forms::Label());
			this->Ville_label = (gcnew System::Windows::Forms::Label());
			this->Region_label = (gcnew System::Windows::Forms::Label());
			this->Pays_label = (gcnew System::Windows::Forms::Label());
			this->IdSupH_textBox = (gcnew System::Windows::Forms::TextBox());
			this->NiveauH_textBox = (gcnew System::Windows::Forms::TextBox());
			this->IdSupH_label = (gcnew System::Windows::Forms::Label());
			this->NiveauH_label = (gcnew System::Windows::Forms::Label());
			this->DateNaissance_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->DateNaissance_label = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Validation_Modifier = (gcnew System::Windows::Forms::Button());
			this->Validation_Supp = (gcnew System::Windows::Forms::Button());
			this->Validation_Créer = (gcnew System::Windows::Forms::Button());
			this->Action = (gcnew System::Windows::Forms::Label());
			this->DateDuJour_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->DateDuJour_label = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1397, 302);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(1236, 682);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 112);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::Load_database_Click);
			// 
			// Nom_textBox
			// 
			this->Nom_textBox->Location = System::Drawing::Point(260, 31);
			this->Nom_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Nom_textBox->Name = L"Nom_textBox";
			this->Nom_textBox->Size = System::Drawing::Size(128, 26);
			this->Nom_textBox->TabIndex = 2;
			// 
			// Prenom_textBox
			// 
			this->Prenom_textBox->Location = System::Drawing::Point(457, 31);
			this->Prenom_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Prenom_textBox->Name = L"Prenom_textBox";
			this->Prenom_textBox->Size = System::Drawing::Size(128, 26);
			this->Prenom_textBox->TabIndex = 3;
			// 
			// Numero_textBox
			// 
			this->Numero_textBox->Location = System::Drawing::Point(660, 31);
			this->Numero_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Numero_textBox->Name = L"Numero_textBox";
			this->Numero_textBox->Size = System::Drawing::Size(128, 26);
			this->Numero_textBox->TabIndex = 4;
			// 
			// Rue_textBox
			// 
			this->Rue_textBox->Location = System::Drawing::Point(55, 108);
			this->Rue_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Rue_textBox->Name = L"Rue_textBox";
			this->Rue_textBox->Size = System::Drawing::Size(128, 26);
			this->Rue_textBox->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(574, 659);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 62);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Créer";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::inserer_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(732, 659);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 62);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::delete_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(574, 732);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(290, 62);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::modifier_Click);
			// 
			// ID_textBox
			// 
			this->ID_textBox->Location = System::Drawing::Point(55, 31);
			this->ID_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_textBox->Name = L"ID_textBox";
			this->ID_textBox->Size = System::Drawing::Size(128, 26);
			this->ID_textBox->TabIndex = 10;
			// 
			// CodePostal_comboBox
			// 
			this->CodePostal_comboBox->FormattingEnabled = true;
			this->CodePostal_comboBox->Location = System::Drawing::Point(660, 186);
			this->CodePostal_comboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CodePostal_comboBox->Name = L"CodePostal_comboBox";
			this->CodePostal_comboBox->Size = System::Drawing::Size(128, 28);
			this->CodePostal_comboBox->TabIndex = 11;
			// 
			// Pays_comboBox
			// 
			this->Pays_comboBox->FormattingEnabled = true;
			this->Pays_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"France" });
			this->Pays_comboBox->Location = System::Drawing::Point(457, 188);
			this->Pays_comboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Pays_comboBox->Name = L"Pays_comboBox";
			this->Pays_comboBox->Size = System::Drawing::Size(128, 28);
			this->Pays_comboBox->TabIndex = 12;
			this->Pays_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormGestionPersonnel::comboBox2_SelectedIndexChanged);
			// 
			// Region_comboBox
			// 
			this->Region_comboBox->FormattingEnabled = true;
			this->Region_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Auvergne-Rhône-Alpes", L"Bourgogne-Franche-Comté",
					L"Bretagne", L"Centre-Val de Loire", L"Corse", L"Grand Est", L"Hauts-de-France", L"Île-de-France", L"Normandie", L"Nouvelle-Aquitaine",
					L"Occitanie", L"Pays de la Loire", L"Provence-Alpes-Côte d\'Azur"
			});
			this->Region_comboBox->Location = System::Drawing::Point(260, 188);
			this->Region_comboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Region_comboBox->Name = L"Region_comboBox";
			this->Region_comboBox->Size = System::Drawing::Size(128, 28);
			this->Region_comboBox->TabIndex = 13;
			// 
			// Ville_comboBox
			// 
			this->Ville_comboBox->FormattingEnabled = true;
			this->Ville_comboBox->Location = System::Drawing::Point(55, 188);
			this->Ville_comboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ville_comboBox->Name = L"Ville_comboBox";
			this->Ville_comboBox->Size = System::Drawing::Size(128, 28);
			this->Ville_comboBox->TabIndex = 14;
			// 
			// ID_label
			// 
			this->ID_label->AutoSize = true;
			this->ID_label->Location = System::Drawing::Point(56, 8);
			this->ID_label->Name = L"ID_label";
			this->ID_label->Size = System::Drawing::Size(26, 20);
			this->ID_label->TabIndex = 15;
			this->ID_label->Text = L"ID";
			// 
			// Nom_label
			// 
			this->Nom_label->AutoSize = true;
			this->Nom_label->Location = System::Drawing::Point(260, 8);
			this->Nom_label->Name = L"Nom_label";
			this->Nom_label->Size = System::Drawing::Size(42, 20);
			this->Nom_label->TabIndex = 16;
			this->Nom_label->Text = L"Nom";
			// 
			// Prenom_label
			// 
			this->Prenom_label->AutoSize = true;
			this->Prenom_label->Location = System::Drawing::Point(458, 6);
			this->Prenom_label->Name = L"Prenom_label";
			this->Prenom_label->Size = System::Drawing::Size(64, 20);
			this->Prenom_label->TabIndex = 17;
			this->Prenom_label->Text = L"Prenom";
			// 
			// Numero_label
			// 
			this->Numero_label->AutoSize = true;
			this->Numero_label->Location = System::Drawing::Point(662, 8);
			this->Numero_label->Name = L"Numero_label";
			this->Numero_label->Size = System::Drawing::Size(65, 20);
			this->Numero_label->TabIndex = 18;
			this->Numero_label->Text = L"Numéro";
			// 
			// Rue_label
			// 
			this->Rue_label->AutoSize = true;
			this->Rue_label->Location = System::Drawing::Point(55, 85);
			this->Rue_label->Name = L"Rue_label";
			this->Rue_label->Size = System::Drawing::Size(39, 20);
			this->Rue_label->TabIndex = 19;
			this->Rue_label->Text = L"Rue";
			// 
			// CodePostal_label
			// 
			this->CodePostal_label->AutoSize = true;
			this->CodePostal_label->Location = System::Drawing::Point(662, 164);
			this->CodePostal_label->Name = L"CodePostal_label";
			this->CodePostal_label->Size = System::Drawing::Size(94, 20);
			this->CodePostal_label->TabIndex = 20;
			this->CodePostal_label->Text = L"Code postal";
			// 
			// Ville_label
			// 
			this->Ville_label->AutoSize = true;
			this->Ville_label->Location = System::Drawing::Point(56, 164);
			this->Ville_label->Name = L"Ville_label";
			this->Ville_label->Size = System::Drawing::Size(38, 20);
			this->Ville_label->TabIndex = 21;
			this->Ville_label->Text = L"Ville";
			// 
			// Region_label
			// 
			this->Region_label->AutoSize = true;
			this->Region_label->Location = System::Drawing::Point(262, 165);
			this->Region_label->Name = L"Region_label";
			this->Region_label->Size = System::Drawing::Size(60, 20);
			this->Region_label->TabIndex = 22;
			this->Region_label->Text = L"Région";
			// 
			// Pays_label
			// 
			this->Pays_label->AutoSize = true;
			this->Pays_label->Location = System::Drawing::Point(458, 165);
			this->Pays_label->Name = L"Pays_label";
			this->Pays_label->Size = System::Drawing::Size(43, 20);
			this->Pays_label->TabIndex = 23;
			this->Pays_label->Text = L"Pays";
			// 
			// IdSupH_textBox
			// 
			this->IdSupH_textBox->Location = System::Drawing::Point(457, 110);
			this->IdSupH_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IdSupH_textBox->Name = L"IdSupH_textBox";
			this->IdSupH_textBox->Size = System::Drawing::Size(128, 26);
			this->IdSupH_textBox->TabIndex = 24;
			// 
			// NiveauH_textBox
			// 
			this->NiveauH_textBox->Location = System::Drawing::Point(660, 108);
			this->NiveauH_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NiveauH_textBox->Name = L"NiveauH_textBox";
			this->NiveauH_textBox->Size = System::Drawing::Size(128, 26);
			this->NiveauH_textBox->TabIndex = 25;
			// 
			// IdSupH_label
			// 
			this->IdSupH_label->AutoSize = true;
			this->IdSupH_label->Location = System::Drawing::Point(458, 86);
			this->IdSupH_label->Name = L"IdSupH_label";
			this->IdSupH_label->Size = System::Drawing::Size(79, 20);
			this->IdSupH_label->TabIndex = 27;
			this->IdSupH_label->Text = L"ID SUP H";
			this->IdSupH_label->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::label10_Click);
			// 
			// NiveauH_label
			// 
			this->NiveauH_label->AutoSize = true;
			this->NiveauH_label->Location = System::Drawing::Point(662, 85);
			this->NiveauH_label->Name = L"NiveauH_label";
			this->NiveauH_label->Size = System::Drawing::Size(73, 20);
			this->NiveauH_label->TabIndex = 28;
			this->NiveauH_label->Text = L"Niveau H";
			// 
			// DateNaissance_dateTimePicker
			// 
			this->DateNaissance_dateTimePicker->CustomFormat = L"dd-MM-yyyy";
			this->DateNaissance_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DateNaissance_dateTimePicker->Location = System::Drawing::Point(260, 108);
			this->DateNaissance_dateTimePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DateNaissance_dateTimePicker->Name = L"DateNaissance_dateTimePicker";
			this->DateNaissance_dateTimePicker->Size = System::Drawing::Size(128, 26);
			this->DateNaissance_dateTimePicker->TabIndex = 30;
			this->DateNaissance_dateTimePicker->Value = System::DateTime(2023, 12, 6, 0, 0, 0, 0);
			this->DateNaissance_dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &MyFormGestionPersonnel::dateTimePicker3_ValueChanged);
			// 
			// DateNaissance_label
			// 
			this->DateNaissance_label->AutoSize = true;
			this->DateNaissance_label->Location = System::Drawing::Point(262, 86);
			this->DateNaissance_label->Name = L"DateNaissance_label";
			this->DateNaissance_label->Size = System::Drawing::Size(120, 20);
			this->DateNaissance_label->TabIndex = 32;
			this->DateNaissance_label->Text = L"Date naissance";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Validation_Modifier);
			this->panel1->Controls->Add(this->Validation_Supp);
			this->panel1->Controls->Add(this->Validation_Créer);
			this->panel1->Controls->Add(this->Action);
			this->panel1->Controls->Add(this->DateDuJour_dateTimePicker);
			this->panel1->Controls->Add(this->DateNaissance_label);
			this->panel1->Controls->Add(this->DateDuJour_label);
			this->panel1->Controls->Add(this->DateNaissance_dateTimePicker);
			this->panel1->Controls->Add(this->NiveauH_label);
			this->panel1->Controls->Add(this->IdSupH_label);
			this->panel1->Controls->Add(this->NiveauH_textBox);
			this->panel1->Controls->Add(this->IdSupH_textBox);
			this->panel1->Controls->Add(this->Pays_label);
			this->panel1->Controls->Add(this->Region_label);
			this->panel1->Controls->Add(this->Ville_label);
			this->panel1->Controls->Add(this->CodePostal_label);
			this->panel1->Controls->Add(this->Rue_label);
			this->panel1->Controls->Add(this->Numero_label);
			this->panel1->Controls->Add(this->Prenom_label);
			this->panel1->Controls->Add(this->Nom_label);
			this->panel1->Controls->Add(this->ID_label);
			this->panel1->Controls->Add(this->Ville_comboBox);
			this->panel1->Controls->Add(this->Region_comboBox);
			this->panel1->Controls->Add(this->Pays_comboBox);
			this->panel1->Controls->Add(this->CodePostal_comboBox);
			this->panel1->Controls->Add(this->ID_textBox);
			this->panel1->Controls->Add(this->Rue_textBox);
			this->panel1->Controls->Add(this->Numero_textBox);
			this->panel1->Controls->Add(this->Prenom_textBox);
			this->panel1->Controls->Add(this->Nom_textBox);
			this->panel1->Location = System::Drawing::Point(299, 324);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(838, 305);
			this->panel1->TabIndex = 35;
			// 
			// Validation_Modifier
			// 
			this->Validation_Modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Validation_Modifier->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Validation_Modifier->FlatAppearance->BorderSize = 2;
			this->Validation_Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Validation_Modifier->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Validation_Modifier->Location = System::Drawing::Point(706, 251);
			this->Validation_Modifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Validation_Modifier->Name = L"Validation_Modifier";
			this->Validation_Modifier->Size = System::Drawing::Size(103, 37);
			this->Validation_Modifier->TabIndex = 38;
			this->Validation_Modifier->Text = L"Valider";
			this->Validation_Modifier->UseVisualStyleBackColor = false;
			this->Validation_Modifier->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::Validation_Modifier_Click);
			// 
			// Validation_Supp
			// 
			this->Validation_Supp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Validation_Supp->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Validation_Supp->FlatAppearance->BorderSize = 2;
			this->Validation_Supp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Validation_Supp->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Validation_Supp->Location = System::Drawing::Point(706, 251);
			this->Validation_Supp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Validation_Supp->Name = L"Validation_Supp";
			this->Validation_Supp->Size = System::Drawing::Size(103, 37);
			this->Validation_Supp->TabIndex = 37;
			this->Validation_Supp->Text = L"Valider";
			this->Validation_Supp->UseVisualStyleBackColor = false;
			this->Validation_Supp->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::Validation_Supp_Click);
			// 
			// Validation_Créer
			// 
			this->Validation_Créer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Validation_Créer->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Validation_Créer->FlatAppearance->BorderSize = 2;
			this->Validation_Créer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Validation_Créer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Validation_Créer->Location = System::Drawing::Point(706, 251);
			this->Validation_Créer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Validation_Créer->Name = L"Validation_Créer";
			this->Validation_Créer->Size = System::Drawing::Size(103, 37);
			this->Validation_Créer->TabIndex = 36;
			this->Validation_Créer->Text = L"Valider";
			this->Validation_Créer->UseVisualStyleBackColor = false;
			this->Validation_Créer->Click += gcnew System::EventHandler(this, &MyFormGestionPersonnel::Validation_Créer_Click);
			// 
			// Action
			// 
			this->Action->AutoSize = true;
			this->Action->Location = System::Drawing::Point(314, 136);
			this->Action->Name = L"Action";
			this->Action->Size = System::Drawing::Size(223, 20);
			this->Action->TabIndex = 33;
			this->Action->Text = L"~~ Selectionnez une action ~~";
			// 
			// DateDuJour_dateTimePicker
			// 
			this->DateDuJour_dateTimePicker->CustomFormat = L"dd-MM-yyyy";
			this->DateDuJour_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DateDuJour_dateTimePicker->Location = System::Drawing::Point(364, 262);
			this->DateDuJour_dateTimePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DateDuJour_dateTimePicker->Name = L"DateDuJour_dateTimePicker";
			this->DateDuJour_dateTimePicker->Size = System::Drawing::Size(128, 26);
			this->DateDuJour_dateTimePicker->TabIndex = 31;
			this->DateDuJour_dateTimePicker->Value = System::DateTime(2023, 12, 6, 0, 0, 0, 0);
			// 
			// DateDuJour_label
			// 
			this->DateDuJour_label->AutoSize = true;
			this->DateDuJour_label->Location = System::Drawing::Point(366, 241);
			this->DateDuJour_label->Name = L"DateDuJour_label";
			this->DateDuJour_label->Size = System::Drawing::Size(96, 20);
			this->DateDuJour_label->TabIndex = 29;
			this->DateDuJour_label->Text = L"Date du jour";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(171, 754);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(68, 26);
			this->textBox8->TabIndex = 33;
			this->textBox8->Visible = false;
			// 
			// MyFormGestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1423, 808);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyFormGestionPersonnel";
			this->Text = L"MyFormGestionPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionPersonnel::MyFormGestionPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormGestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices_Personnel();

		// Spécifiez le chemin complet de votre fichier texte
		String^ filePath = "C:\\Users\\coren\\Desktop\\finfin\\MININF_PROJET_POO\\cities.csv";
		String^ filePath2 = "C:\\Users\\coren\\Desktop\\finfin\\MININF_PROJET_POO\\pays.csv";

		try {
			// Vérifiez que le fichier existe avant de tenter de le lire
			if (System::IO::File::Exists(filePath)) {
				// Initialisez la ComboBox
				CodePostal_comboBox->Items->Clear();
				Ville_comboBox->Items->Clear();
				// Initialisez le StreamReader pour lire le fichier texte
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);

				// Lisez le fichier ligne par ligne
				while (!reader->EndOfStream) {
					System::String^ line = reader->ReadLine();

					// Divisez la ligne en champs en utilisant la virgule comme délimiteur
					array<System::String^>^ fields = line->Split(',');

					// Assurez-vous qu'il y a au moins deux champs avant d'essayer d'accéder au deuxième champ

						// Ajoutez le deuxième champ (nom de la ville) à la ComboBox
					Ville_comboBox->Items->Add(fields[1]);
					CodePostal_comboBox->Items->Add(fields[0]);


				}

				// Fermez le StreamReader
				reader->Close();
			}
			else {
				// Affichez un message d'erreur si le fichier n'existe pas
				System::Windows::Forms::MessageBox::Show("Le fichier texte n'existe pas.");
			}
		}
		catch (System::Exception^ ex) {
			// Gérez les exceptions appropriées
			System::Windows::Forms::MessageBox::Show("Erreur : " + ex->Message);
		}
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerTousLePersonnel("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}

		   bool AreTextBoxesNotEmpty() {
			   return !String::IsNullOrWhiteSpace(Nom_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(Prenom_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(Numero_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(Rue_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(IdSupH_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(NiveauH_textBox->Text) &&
				   !String::IsNullOrWhiteSpace(Ville_comboBox->Text) &&
				   !String::IsNullOrWhiteSpace(Region_comboBox->Text) &&
				   !String::IsNullOrWhiteSpace(Pays_comboBox->Text) &&
				   !String::IsNullOrWhiteSpace(CodePostal_comboBox->Text) &&
				   !String::IsNullOrWhiteSpace(DateDuJour_dateTimePicker->Text);
		   }

	private: System::Void Load_database_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = true;

		Nom_textBox->Visible = false;
		Nom_label->Visible = false;

		Prenom_textBox->Visible = false;
		Prenom_label->Visible = false;

		Numero_textBox->Visible = false;
		Numero_label->Visible = false;

		Rue_textBox->Visible = false;
		Rue_label->Visible = false;

		ID_textBox->Visible = false;
		ID_label->Visible = false;

		CodePostal_comboBox->Visible = false;
		CodePostal_label->Visible = false;

		Pays_comboBox->Visible = false;
		Pays_label->Visible = false;

		Region_comboBox->Visible = false;
		Region_label->Visible = false;

		Ville_comboBox->Visible = false;
		Ville_label->Visible = false;

		IdSupH_textBox->Visible = false;
		IdSupH_label->Visible = false;

		NiveauH_textBox->Visible = false;
		NiveauH_label->Visible = false;

		DateNaissance_dateTimePicker->Visible = false;
		DateNaissance_label->Visible = false;

		DateDuJour_dateTimePicker->Visible = false;
		DateDuJour_label->Visible = false;

		Validation_Modifier->Visible = false;
		Validation_Supp->Visible = false;
		Validation_Créer->Visible = false;
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerTousLePersonnel("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void inserer_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;

		Nom_textBox->Visible = true;
		Nom_label->Visible = true;

		Prenom_textBox->Visible = true;
		Prenom_label->Visible = true;

		Numero_textBox->Visible = true;
		Numero_label->Visible = true;

		Rue_textBox->Visible = true;
		Rue_label->Visible = true;

		ID_textBox->Visible = false;
		ID_label->Visible = false;

		CodePostal_comboBox->Visible = true;
		CodePostal_label->Visible = true;

		Pays_comboBox->Visible = true;
		Pays_label->Visible = true;

		Region_comboBox->Visible = true;
		Region_label->Visible = true;

		Ville_comboBox->Visible = true;
		Ville_label->Visible = true;

		IdSupH_textBox->Visible = true;
		IdSupH_label->Visible = true;

		NiveauH_textBox->Visible = true;
		NiveauH_label->Visible = true;

		DateNaissance_dateTimePicker->Visible = true;
		DateNaissance_label->Visible = true;

		DateDuJour_dateTimePicker->Visible = true;
		DateDuJour_label->Visible = true;

		Validation_Modifier->Visible = false;
		Validation_Supp->Visible = false;
		Validation_Créer->Visible = true;

	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;

		Nom_textBox->Visible = true;
		Nom_label->Visible = true;

		Prenom_textBox->Visible = true;
		Prenom_label->Visible = true;

		Numero_textBox->Visible = true;
		Numero_label->Visible = true;

		Rue_textBox->Visible = true;
		Rue_label->Visible = true;

		ID_textBox->Visible = true;
		ID_label->Visible = true;

		CodePostal_comboBox->Visible = true;
		CodePostal_label->Visible = true;

		Pays_comboBox->Visible = true;
		Pays_label->Visible = true;

		Region_comboBox->Visible = true;
		Region_label->Visible = true;

		Ville_comboBox->Visible = true;
		Ville_label->Visible = true;

		IdSupH_textBox->Visible = true;
		IdSupH_label->Visible = true;

		NiveauH_textBox->Visible = true;
		NiveauH_label->Visible = true;

		DateNaissance_dateTimePicker->Visible = true;
		DateNaissance_label->Visible = true;

		DateDuJour_dateTimePicker->Visible = true;
		DateDuJour_label->Visible = true;

		Validation_Modifier->Visible = true;
		Validation_Supp->Visible = false;
		Validation_Créer->Visible = false;

	}




	private: System::Void delete_Click(System::Object^ sender, System::EventArgs^ e) {
		Action->Visible = false;

		Nom_textBox->Visible = false;
		Nom_label->Visible = false;

		Prenom_textBox->Visible = false;
		Prenom_label->Visible = false;

		Numero_textBox->Visible = false;
		Numero_label->Visible = false;

		Rue_textBox->Visible = false;
		Rue_label->Visible = false;

		ID_textBox->Visible = true;
		ID_label->Visible = true;

		CodePostal_comboBox->Visible = false;
		CodePostal_label->Visible = false;

		Pays_comboBox->Visible = false;
		Pays_label->Visible = false;

		Region_comboBox->Visible = false;
		Region_label->Visible = false;

		Ville_comboBox->Visible = false;
		Ville_label->Visible = false;

		IdSupH_textBox->Visible = false;
		IdSupH_label->Visible = false;

		NiveauH_textBox->Visible = false;
		NiveauH_label->Visible = false;

		DateNaissance_dateTimePicker->Visible = false;
		DateNaissance_label->Visible = false;

		DateDuJour_dateTimePicker->Visible = false;
		DateDuJour_label->Visible = false;

		Validation_Modifier->Visible = false;
		Validation_Supp->Visible = true;
		Validation_Créer->Visible = false;
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}




private: System::Void Validation_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AreTextBoxesNotEmpty()) {
		Int32 id;
		if (Int32::TryParse(ID_textBox->Text, id)) {

			Int32 entierTextBox6;
			Int32 entierTextBox7;

			if (Int32::TryParse(IdSupH_textBox->Text, entierTextBox6) && Int32::TryParse(NiveauH_textBox->Text, entierTextBox7)) {
				this->oSvc->modifierUnPersonnel(id, Nom_textBox->Text, Prenom_textBox->Text, DateNaissance_dateTimePicker->Text, Numero_textBox->Text, Rue_textBox->Text, CodePostal_comboBox->Text, textBox8->Text, Ville_comboBox->Text, Region_comboBox->Text, Region_comboBox->Text, entierTextBox6.ToString(), entierTextBox7.ToString(), DateDuJour_dateTimePicker->Text);
				Validation_Modifier->Visible = false;
			}
			else {
				MessageBox::Show("Les valeurs dans id_supérieur hiérarchique et/ou nivreau hiérarchique ne sont pas des entiers valides.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("La valeur dans id_personnel n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}


private: System::Void Validation_Supp_Click(System::Object^ sender, System::EventArgs^ e) {
	

	Int32 id;
	if (Int32::TryParse(ID_textBox->Text, id)) {
		this->oSvc->deleteUnPersonnel(id);
		Validation_Supp->Visible = false;
	}
	else {
		MessageBox::Show("La valeur dans id_personnel n'est pas un entier valide.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}


private: System::Void Validation_Créer_Click(System::Object^ sender, System::EventArgs^ e) {
	

	if (AreTextBoxesNotEmpty()) {
		Int32 entierTextBox6;
		Int32 entierTextBox7;

		if (Int32::TryParse(IdSupH_textBox->Text, entierTextBox6) && Int32::TryParse(NiveauH_textBox->Text, entierTextBox7)) {
			this->oSvc->insererUnPersonnel(Nom_textBox->Text, Prenom_textBox->Text, DateNaissance_dateTimePicker->Text, Numero_textBox->Text, Rue_textBox->Text, CodePostal_comboBox->Text, textBox8->Text, Ville_comboBox->Text, Region_comboBox->Text, Region_comboBox->Text, entierTextBox6.ToString(), entierTextBox7.ToString(), DateDuJour_dateTimePicker->Text);
			Validation_Créer->Visible = false;
		}
		else {
			MessageBox::Show("Les valeurs dans id_supérieur hiérarchique et/ou nivreau hiérarchique ne sont pas des entiers valides.", "Erreur de conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Veuillez remplir tous les champs.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}



