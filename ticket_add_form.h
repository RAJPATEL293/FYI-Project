#pragma once
#include "regist.h" 
#include "loginmainform.h"
#include <iostream>
#include <random>
#include <algorithm>
#include <chrono>
#include <string>

namespace ticketmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Threading::Tasks;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace System::Net::Mail;



	/// <summary>
	/// Summary for ticket_add_form
	/// </summary>
	public ref class ticket_add_form : public System::Windows::Forms::Form
	{
		
	public:
		ticket_add_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ticket_add_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ headinglabel;
	private: System::Windows::Forms::Label^ name_label2;
	private: System::Windows::Forms::Label^ email_label3;
	private: System::Windows::Forms::Label^ ticket_number_label4;
	private: System::Windows::Forms::Label^ issue_label5;
	private: System::Windows::Forms::TextBox^ nametextbox;
	private: System::Windows::Forms::TextBox^ idtextbox;
	private: System::Windows::Forms::TextBox^ ticketnumbertextbox;
	private: System::Windows::Forms::TextBox^ issuetextbox;





	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ search_link;
	private: System::Windows::Forms::LinkLabel^ display_link;
	private: System::Windows::Forms::Button^ logoutbt;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::RadioButton^ completed;
	private: System::Windows::Forms::RadioButton^ underprocess;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button3;








	private: System::ComponentModel::IContainer^ components;






	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ticket_add_form::typeid));
			this->headinglabel = (gcnew System::Windows::Forms::Label());
			this->name_label2 = (gcnew System::Windows::Forms::Label());
			this->email_label3 = (gcnew System::Windows::Forms::Label());
			this->ticket_number_label4 = (gcnew System::Windows::Forms::Label());
			this->issue_label5 = (gcnew System::Windows::Forms::Label());
			this->nametextbox = (gcnew System::Windows::Forms::TextBox());
			this->idtextbox = (gcnew System::Windows::Forms::TextBox());
			this->ticketnumbertextbox = (gcnew System::Windows::Forms::TextBox());
			this->issuetextbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->search_link = (gcnew System::Windows::Forms::LinkLabel());
			this->display_link = (gcnew System::Windows::Forms::LinkLabel());
			this->logoutbt = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->completed = (gcnew System::Windows::Forms::RadioButton());
			this->underprocess = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// headinglabel
			// 
			this->headinglabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->headinglabel->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headinglabel->Location = System::Drawing::Point(28, 37);
			this->headinglabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->headinglabel->Name = L"headinglabel";
			this->headinglabel->Size = System::Drawing::Size(1290, 79);
			this->headinglabel->TabIndex = 0;
			this->headinglabel->Text = L"Enter Ticket Infomation";
			this->headinglabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->headinglabel->Click += gcnew System::EventHandler(this, &ticket_add_form::label1_Click);
			// 
			// name_label2
			// 
			this->name_label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->name_label2->AutoSize = true;
			this->name_label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label2->Location = System::Drawing::Point(20, 154);
			this->name_label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_label2->Name = L"name_label2";
			this->name_label2->Size = System::Drawing::Size(146, 49);
			this->name_label2->TabIndex = 1;
			this->name_label2->Text = L"Name";
			this->name_label2->Click += gcnew System::EventHandler(this, &ticket_add_form::label1_Click_1);
			// 
			// email_label3
			// 
			this->email_label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->email_label3->AutoSize = true;
			this->email_label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label3->Location = System::Drawing::Point(24, 235);
			this->email_label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->email_label3->Name = L"email_label3";
			this->email_label3->Size = System::Drawing::Size(148, 49);
			this->email_label3->TabIndex = 2;
			this->email_label3->Text = L"Email";
			// 
			// ticket_number_label4
			// 
			this->ticket_number_label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ticket_number_label4->AutoSize = true;
			this->ticket_number_label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticket_number_label4->Location = System::Drawing::Point(20, 329);
			this->ticket_number_label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ticket_number_label4->Name = L"ticket_number_label4";
			this->ticket_number_label4->Size = System::Drawing::Size(392, 49);
			this->ticket_number_label4->TabIndex = 3;
			this->ticket_number_label4->Text = L"Ticket Number #";
			// 
			// issue_label5
			// 
			this->issue_label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->issue_label5->AutoSize = true;
			this->issue_label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issue_label5->Location = System::Drawing::Point(20, 419);
			this->issue_label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->issue_label5->Name = L"issue_label5";
			this->issue_label5->Size = System::Drawing::Size(132, 49);
			this->issue_label5->TabIndex = 4;
			this->issue_label5->Text = L"Issue";
			// 
			// nametextbox
			// 
			this->nametextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nametextbox->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nametextbox->Location = System::Drawing::Point(444, 146);
			this->nametextbox->Margin = System::Windows::Forms::Padding(4);
			this->nametextbox->Name = L"nametextbox";
			this->nametextbox->Size = System::Drawing::Size(874, 57);
			this->nametextbox->TabIndex = 5;
			this->nametextbox->TextChanged += gcnew System::EventHandler(this, &ticket_add_form::textBox1_TextChanged);
			// 
			// idtextbox
			// 
			this->idtextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->idtextbox->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idtextbox->Location = System::Drawing::Point(444, 235);
			this->idtextbox->Margin = System::Windows::Forms::Padding(4);
			this->idtextbox->Name = L"idtextbox";
			this->idtextbox->Size = System::Drawing::Size(874, 57);
			this->idtextbox->TabIndex = 6;
			// 
			// ticketnumbertextbox
			// 
			this->ticketnumbertextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ticketnumbertextbox->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticketnumbertextbox->Location = System::Drawing::Point(444, 329);
			this->ticketnumbertextbox->Margin = System::Windows::Forms::Padding(4);
			this->ticketnumbertextbox->Name = L"ticketnumbertextbox";
			this->ticketnumbertextbox->Size = System::Drawing::Size(401, 57);
			this->ticketnumbertextbox->TabIndex = 7;
			this->ticketnumbertextbox->TextChanged += gcnew System::EventHandler(this, &ticket_add_form::ticketnumbertextbox_TextChanged);
			// 
			// issuetextbox
			// 
			this->issuetextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->issuetextbox->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issuetextbox->Location = System::Drawing::Point(444, 419);
			this->issuetextbox->Margin = System::Windows::Forms::Padding(4);
			this->issuetextbox->Name = L"issuetextbox";
			this->issuetextbox->Size = System::Drawing::Size(874, 57);
			this->issuetextbox->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 636);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 49);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Troubleshooting";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(28, 796);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1278, 162);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(4, 4);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(631, 154);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ticket_add_form::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(643, 4);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(631, 154);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ticket_add_form::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(76, 44);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// search_link
			// 
			this->search_link->AutoSize = true;
			this->search_link->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_link->Location = System::Drawing::Point(32, 721);
			this->search_link->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->search_link->Name = L"search_link";
			this->search_link->Size = System::Drawing::Size(326, 49);
			this->search_link->TabIndex = 14;
			this->search_link->TabStop = true;
			this->search_link->Text = L"Search Ticket";
			this->search_link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ticket_add_form::linkLabel1_LinkClicked_1);
			// 
			// display_link
			// 
			this->display_link->AutoSize = true;
			this->display_link->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display_link->Location = System::Drawing::Point(435, 721);
			this->display_link->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->display_link->Name = L"display_link";
			this->display_link->Size = System::Drawing::Size(318, 49);
			this->display_link->TabIndex = 15;
			this->display_link->TabStop = true;
			this->display_link->Text = L"Display Table";
			this->display_link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ticket_add_form::display_link_LinkClicked);
			// 
			// logoutbt
			// 
			this->logoutbt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logoutbt->BackColor = System::Drawing::Color::Transparent;
			this->logoutbt->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->logoutbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutbt->ForeColor = System::Drawing::Color::Black;
			this->logoutbt->Location = System::Drawing::Point(1128, 37);
			this->logoutbt->Margin = System::Windows::Forms::Padding(4);
			this->logoutbt->Name = L"logoutbt";
			this->logoutbt->Size = System::Drawing::Size(192, 79);
			this->logoutbt->TabIndex = 16;
			this->logoutbt->Text = L"logout ";
			this->logoutbt->UseVisualStyleBackColor = false;
			this->logoutbt->Click += gcnew System::EventHandler(this, &ticket_add_form::logoutbt_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(472, 17);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(294, 53);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Trac Cloud";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(7, 17);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(251, 53);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Star Fish";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 531);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 49);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Input TF";
			// 
			// completed
			// 
			this->completed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->completed->AutoSize = true;
			this->completed->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->completed->Location = System::Drawing::Point(472, 18);
			this->completed->Margin = System::Windows::Forms::Padding(4);
			this->completed->Name = L"completed";
			this->completed->Size = System::Drawing::Size(290, 53);
			this->completed->TabIndex = 11;
			this->completed->TabStop = true;
			this->completed->Text = L"Completed";
			this->completed->UseVisualStyleBackColor = true;
			this->completed->CheckedChanged += gcnew System::EventHandler(this, &ticket_add_form::completed_CheckedChanged);
			// 
			// underprocess
			// 
			this->underprocess->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->underprocess->AutoSize = true;
			this->underprocess->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->underprocess->Location = System::Drawing::Point(7, 18);
			this->underprocess->Margin = System::Windows::Forms::Padding(4);
			this->underprocess->Name = L"underprocess";
			this->underprocess->Size = System::Drawing::Size(366, 53);
			this->underprocess->TabIndex = 10;
			this->underprocess->TabStop = true;
			this->underprocess->Text = L"Under Process";
			this->underprocess->UseVisualStyleBackColor = true;
			this->underprocess->CheckedChanged += gcnew System::EventHandler(this, &ticket_add_form::underprocess_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(443, 510);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(773, 81);
			this->panel1->TabIndex = 23;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->underprocess);
			this->panel2->Controls->Add(this->completed);
			this->panel2->Location = System::Drawing::Point(443, 618);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(773, 100);
			this->panel2->TabIndex = 24;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(915, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(391, 57);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Ticket_Number";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ticket_add_form::button3_Click);
			// 
			// ticket_add_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->CancelButton = this->logoutbt;
			this->ClientSize = System::Drawing::Size(1332, 967);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->logoutbt);
			this->Controls->Add(this->display_link);
			this->Controls->Add(this->search_link);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->issuetextbox);
			this->Controls->Add(this->ticketnumbertextbox);
			this->Controls->Add(this->idtextbox);
			this->Controls->Add(this->nametextbox);
			this->Controls->Add(this->issue_label5);
			this->Controls->Add(this->ticket_number_label4);
			this->Controls->Add(this->email_label3);
			this->Controls->Add(this->name_label2);
			this->Controls->Add(this->headinglabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1358, 1038);
			this->Name = L"ticket_add_form";
			this->Text = L"ticket_add_form";
			this->Load += gcnew System::EventHandler(this, &ticket_add_form::ticket_add_form_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
public: registt^ userdata = nullptr;
	  public:
		  bool^ logoutbtt1 = false;
		  bool^ underprocesscheck;
		  bool^ resolvedcheck;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {    
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void loginmainform_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}    
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ Name = nametextbox->Text;
	String^ Email = idtextbox->Text;
	String^ Ticket = ticketnumbertextbox->Text;
	String^ issue = issuetextbox->Text;
	String^ location;
	DateTime Time_LUD = DateTime::Now;
	//bool^ troubbleshoot = false;

	if (Name->Length == 0 || Email->Length == 0 || Ticket->Length == 0 || issue->Length == 0)
	{
		MessageBox::Show("Please enter all the fields", "On or more empty fields are detected", MessageBoxButtons::OK);
		return;
	}
	if (radioButton1->Checked) {
			location = "Trac Cloud";
	}
	else {
			location = "Star Fish";
	}
	if (underprocess->Checked) {
		
		try {
			String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO Troubleshoot_Underprocess" + "(Name, Email, Ticket, issue, Location, Time_LUD) VALUES" +
				"(@Name, @Email, @Ticket,@issue,@Location, @Time_LUD);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Name", Name);
			command.Parameters->AddWithValue("@Email", Email);
			command.Parameters->AddWithValue("@Ticket", Ticket);
			command.Parameters->AddWithValue("@issue", issue);
			command.Parameters->AddWithValue("@Location", location);
			command.Parameters->AddWithValue("@Time_LUD", Time_LUD);
			command.ExecuteNonQuery();
			userdata = gcnew registt;
			userdata->Name = Name;
			userdata->Email = Email;
			userdata->Ticket = Ticket;
			userdata->issue = issue;
			//this->Close();
			

			//Trying to send mail to the user once the information is save on the server.

			SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com", 587);
			client->EnableSsl = true;
			client->DeliveryMethod = SmtpDeliveryMethod(NetworkAccess());
			client->UseDefaultCredentials = false;
			client->Credentials = gcnew NetworkCredential("12g23raj.nes@gmail.com", "faacehkluhswolra");
			MailMessage^ msgobj = gcnew MailMessage();
			msgobj->To->Add(idtextbox->Text);
			msgobj->IsBodyHtml = true;
			msgobj->From = gcnew MailAddress("12g23raj.nes@gmail.com");
			msgobj->Subject = "TroubleShoot Report";
			//msgobj->Body = "Hello" + nametextbox->Text + " <br / > You troubleshoot is underprocess and your ticket number is " + ticketnumbertextbox->Text;
			msgobj->Body = "Dear " + nametextbox->Text + "<br / > <br / > We have received a report regarding an IT issue that needs to be addressed.  <br / > You troubleshoot is underprocess and your ticket number is " + ticketnumbertextbox->Text + ". The issue concerns " + issuetextbox->Text + ". We would like to request your assistance in resolving this matter.<br / ><br / > Please find below the details of the issue :<br ><br >Ticket Number : " + ticketnumbertextbox->Text + "<br / >Issue description : " + issuetextbox->Text + "<br / >Date and time of occurrence : " + DateTime::Now + "<br / >We kindly request that you provide us with an estimated timeline for the resolution of this issue. If you require any further information or clarification, please do not hesitate to contact us. <br / ><br / >Thank you for your attention to this matter. <br / ><br / >Best regards,<br / >IT Team";

			try
			{
				client->Send(msgobj);
				nametextbox->Clear();
				idtextbox->Clear();
				ticketnumbertextbox->Clear();
				issuetextbox->Clear();
				return;
				
			}
			catch (SmtpException^ ex)
			{
				MessageBox::Show("FAIL TO SEND MAIL", "Register Failure", MessageBoxButtons::OK);
				nametextbox->Clear();
				idtextbox->Clear();
				ticketnumbertextbox->Clear();
				issuetextbox->Clear();
				return;
			}

			//End of trying sending mail through command.
			
		}

		catch (Exception^ e)
		{
			MessageBox::Show("Failed to register new ticket information", "Register Failure", MessageBoxButtons::OK);
			nametextbox->Clear();
			idtextbox->Clear();
			ticketnumbertextbox->Clear();
			issuetextbox->Clear();
			return;
		}
		
	}
	else if(completed->Checked) {
		try {
			String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO Troubleshoot_Resolved" + "(Name, Email, Ticket, issue, Location, Time_LUD) VALUES" +
				"(@Name, @Email, @Ticket,@issue,@Location, @Time_LUD);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Name", Name);
			command.Parameters->AddWithValue("@Email", Email);
			command.Parameters->AddWithValue("@Ticket", Ticket);
			command.Parameters->AddWithValue("@issue", issue);
			command.Parameters->AddWithValue("@Location", location);
			command.Parameters->AddWithValue("@Time_LUD", Time_LUD);
			
			command.ExecuteNonQuery();
			userdata = gcnew registt;
			userdata->Name = Name;
			userdata->Email = Email;
			userdata->Ticket = Ticket;
			userdata->issue = issue;
			//this->Close();
			


			//Trying to send mail to the user once the information is save on the server.

			SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com", 587);
			client->EnableSsl = true;
			client->DeliveryMethod = SmtpDeliveryMethod(NetworkAccess());
			client->UseDefaultCredentials = false;
			client->Credentials = gcnew NetworkCredential("12g23raj.nes@gmail.com", "faacehkluhswolra");
			MailMessage^ msgobj = gcnew MailMessage();
			msgobj->To->Add(idtextbox->Text);
			msgobj->IsBodyHtml = true;
			msgobj->From = gcnew MailAddress("12g23raj.nes@gmail.com");
			msgobj->Subject = "TroubleShoot Report";
			//msgobj->Body = "Hello " + nametextbox->Text + " <br / > You troubleshoot is resolved and your ticket number was " + ticketnumbertextbox->Text;
			msgobj->Body = "Dear" + nametextbox->Text + "<br / ><br / > I am pleased to inform you that the IT issue that was reported has been resolved.<br / > You troubleshoot is completely resolved and your ticket number was " + ticketnumbertextbox->Text +" The issue concerns " + issuetextbox->Text + ". <br / ><br / > Please find below the details of the issue : <br ><br >Ticket Number : "+ticketnumbertextbox->Text+ "<br / >Issue description : " + issuetextbox->Text + "<br / >Date and time of occurrence : " + DateTime::Now + "<br / > We have tested the system and can confirm that the issue has been fully resolved. If you experience any further issues or have any questions, please do not hesitate to contact us. <br / ><br / >Thank you for your cooperation and understanding in this matter. <br / ><br / >Best regards,<br / >IT Team";
			try
			{
				client->Send(msgobj);
				nametextbox->Clear();
				idtextbox->Clear();
				ticketnumbertextbox->Clear();
				issuetextbox->Clear();
				return;
				
			}
			catch (SmtpException^ ex)
			{
				MessageBox::Show("FAIL TO SEND MAIL", "Register Failure", MessageBoxButtons::OK);
				nametextbox->Clear();
				idtextbox->Clear();
				ticketnumbertextbox->Clear();
				issuetextbox->Clear();
				return;
			}

			//End of trying sending mail through command.
		}

		catch (Exception^ e)
		{
			MessageBox::Show("Failed to register new ticket information", "Register Failure", MessageBoxButtons::OK);
			nametextbox->Clear();
			idtextbox->Clear();
			ticketnumbertextbox->Clear();
			issuetextbox->Clear();
			return;
		}
		
	}
	else {
		MessageBox::Show("Please fill all information", "Register Failure", MessageBoxButtons::OK);
		nametextbox->Clear();
		idtextbox->Clear();
		ticketnumbertextbox->Clear();
		issuetextbox->Clear();
		return;
	}




}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	nametextbox->Clear();
	idtextbox->Clear();
	ticketnumbertextbox->Clear();
	issuetextbox->Clear();
	//this->Close();
}
private: System::Void ticket_add_form_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   public: bool to_search = false;
			 bool to_display = false;
private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->to_search = true;
	this->Close();
}

private: System::Void display_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->to_display = true;
	this->Close();
}
//private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	
private: System::Void logoutbt_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult itexit;
	itexit = MessageBox::Show("Confirm if you want to exit", "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	
	try {
		if (itexit == System::Windows::Forms::DialogResult::Yes)
		{
			this->logoutbtt1 = true;
			this->Close();
		}
		else {
			return;
		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

	}
}
private: System::Void underprocess_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//underprocesscheck = true;
	//resolvedcheck = false;
	this->underprocesscheck = underprocess->Checked;
	this->resolvedcheck = completed->Checked;

}
private: System::Void completed_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//underprocesscheck = false;
	//resolvedcheck = true;
	this->underprocesscheck = underprocess->Checked;
	this->resolvedcheck = completed->Checked;
}
private: System::Void ticketnumbertextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get a truly random seed for the random number generator

	std::random_device rd;
	std::mt19937 gen(rd());
	// Get the current time as a high-resolution timestamp
	auto now = std::chrono::high_resolution_clock::now();
	// Use the timestamp to seed the random number generator
	gen.seed(now.time_since_epoch().count());
	// Generate the random number
	int digits[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::shuffle(digits, digits + 10, gen);
	int random_number = 0;
	for (int i = 0; i < 6; i++) {
		random_number = random_number * 10 + digits[i];
	}
	// Make sure the generated number has no leading zeros
	while (random_number > 0 && random_number % 10 == 0) {
		std::shuffle(digits, digits + 10, gen);
		random_number = 0;
		for (int i = 0; i < 6; i++) {
			random_number = random_number * 10 + digits[i];
		}
	}

	ticketnumbertextbox->Text = random_number.ToString();

	// Print the random number
	//std::cout << "The random number is: " << random_number << std::endl;

}
};
}
