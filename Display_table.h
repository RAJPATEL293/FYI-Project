#pragma once
#include "ticket_add_form.h"
namespace ticketmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Display_table
	/// </summary>
	public ref class Display_table : public System::Windows::Forms::Form
	{
		//SqlConnection^ sqlConn = gcnew SqlConnection();
		SqlCommand^ sqlCmd = gcnew SqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		SqlDataAdapter^ sqlDta = gcnew SqlDataAdapter();
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ logoutbt;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
		   SqlDataReader^ sqlRd;
	public:
		Display_table(void)
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
		~Display_table()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_table::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->logoutbt = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Honeydew;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 154);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1330, 746);
			this->dataGridView1->TabIndex = 0;
			// 
			// logoutbt
			// 
			this->logoutbt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logoutbt->BackColor = System::Drawing::Color::Transparent;
			this->logoutbt->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->logoutbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutbt->Location = System::Drawing::Point(1146, 31);
			this->logoutbt->Margin = System::Windows::Forms::Padding(4);
			this->logoutbt->Name = L"logoutbt";
			this->logoutbt->Size = System::Drawing::Size(206, 77);
			this->logoutbt->TabIndex = 1;
			this->logoutbt->Text = L"Logout";
			this->logoutbt->UseVisualStyleBackColor = false;
			this->logoutbt->Click += gcnew System::EventHandler(this, &Display_table::logoutbt_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(22, 44);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(268, 49);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Add Ticket";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Display_table::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(336, 44);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(326, 49);
			this->linkLabel2->TabIndex = 3;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Search Ticket";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Display_table::linkLabel2_LinkClicked);
			// 
			// Display_table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CancelButton = this->logoutbt;
			this->ClientSize = System::Drawing::Size(1374, 921);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->logoutbt);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Display_table";
			this->Text = L"Display_table";
			this->Load += gcnew System::EventHandler(this, &Display_table::Display_table_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	public:
		bool^ logoutbtt2 = false;

	private: System::Void Display_table_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		//sqlCmd->Connection = sqlConn;
		String^ sqlQuery = "select * from Troubleshoot_Underprocess ORDER BY Time_LUD";
		SqlCommand command(sqlQuery, % sqlConn);
		//sqlRd = sqlCmd->ExecuteReader();
		sqlRd = command.ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		dataGridView1->DataSource = sqlDt;
	}
	private: System::Void logoutbt_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult itexit;
		itexit = MessageBox::Show("Confirm if you want to exit", "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		
		try {
			if (itexit == System::Windows::Forms::DialogResult::Yes)
			{	
				this->logoutbtt2 = true;
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
			public: bool to_search = false;
				  bool to_add = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
	this->to_add = true;
	this->Close();
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->to_search = true;
	this->Close();
}
};
}
