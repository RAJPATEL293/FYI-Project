#pragma once
#include"usercheck.h"
namespace ticketmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for loginmainform
	/// </summary>
	public ref class loginmainform : public System::Windows::Forms::Form
	{
	public:
		loginmainform(void)
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
		~loginmainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TableLayoutPanel^ logincanceltable;
	private: System::Windows::Forms::Button^ loginbutton;
	private: System::Windows::Forms::Button^ cancelbutton;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ addticket;
	private: System::Windows::Forms::RadioButton^ searchticket;
	private: System::Windows::Forms::RadioButton^ displayticket;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginmainform::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->logincanceltable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->cancelbutton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->addticket = (gcnew System::Windows::Forms::RadioButton());
			this->searchticket = (gcnew System::Windows::Forms::RadioButton());
			this->displayticket = (gcnew System::Windows::Forms::RadioButton());
			this->logincanceltable->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Islander-ID";
			this->label1->Click += gcnew System::EventHandler(this, &loginmainform::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::Lavender;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(376, 38);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(846, 57);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &loginmainform::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 196);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 49);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &loginmainform::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::Color::Lavender;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(376, 196);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(844, 57);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &loginmainform::textBox2_TextChanged);
			// 
			// logincanceltable
			// 
			this->logincanceltable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->logincanceltable->ColumnCount = 2;
			this->logincanceltable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.83766F)));
			this->logincanceltable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.16234F)));
			this->logincanceltable->Controls->Add(this->loginbutton, 0, 0);
			this->logincanceltable->Controls->Add(this->cancelbutton, 1, 0);
			this->logincanceltable->Location = System::Drawing::Point(10, 633);
			this->logincanceltable->Margin = System::Windows::Forms::Padding(4);
			this->logincanceltable->Name = L"logincanceltable";
			this->logincanceltable->RowCount = 1;
			this->logincanceltable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->logincanceltable->Size = System::Drawing::Size(1232, 137);
			this->logincanceltable->TabIndex = 4;
			// 
			// loginbutton
			// 
			this->loginbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->loginbutton->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbutton->Location = System::Drawing::Point(4, 4);
			this->loginbutton->Margin = System::Windows::Forms::Padding(4);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(606, 129);
			this->loginbutton->TabIndex = 0;
			this->loginbutton->Text = L"Login";
			this->loginbutton->UseVisualStyleBackColor = true;
			this->loginbutton->Click += gcnew System::EventHandler(this, &loginmainform::loginbutton_Click);
			// 
			// cancelbutton
			// 
			this->cancelbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cancelbutton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelbutton->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelbutton->Location = System::Drawing::Point(618, 4);
			this->cancelbutton->Margin = System::Windows::Forms::Padding(4);
			this->cancelbutton->Name = L"cancelbutton";
			this->cancelbutton->Size = System::Drawing::Size(610, 129);
			this->cancelbutton->TabIndex = 1;
			this->cancelbutton->Text = L"Cancel";
			this->cancelbutton->UseVisualStyleBackColor = true;
			this->cancelbutton->Click += gcnew System::EventHandler(this, &loginmainform::cancelbutton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(0, 396);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(244, 98);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Choose \r\nOperation";
			// 
			// addticket
			// 
			this->addticket->AutoSize = true;
			this->addticket->BackColor = System::Drawing::Color::Transparent;
			this->addticket->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addticket->ForeColor = System::Drawing::Color::Wheat;
			this->addticket->Location = System::Drawing::Point(9, 508);
			this->addticket->Margin = System::Windows::Forms::Padding(4);
			this->addticket->Name = L"addticket";
			this->addticket->Size = System::Drawing::Size(310, 53);
			this->addticket->TabIndex = 7;
			this->addticket->TabStop = true;
			this->addticket->Text = L"Add Ticket ";
			this->addticket->UseVisualStyleBackColor = false;
			// 
			// searchticket
			// 
			this->searchticket->AutoSize = true;
			this->searchticket->BackColor = System::Drawing::Color::Transparent;
			this->searchticket->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchticket->ForeColor = System::Drawing::Color::Wheat;
			this->searchticket->Location = System::Drawing::Point(10, 569);
			this->searchticket->Margin = System::Windows::Forms::Padding(4);
			this->searchticket->Name = L"searchticket";
			this->searchticket->Size = System::Drawing::Size(357, 53);
			this->searchticket->TabIndex = 8;
			this->searchticket->TabStop = true;
			this->searchticket->Text = L"Search Ticket";
			this->searchticket->UseVisualStyleBackColor = false;
			// 
			// displayticket
			// 
			this->displayticket->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->displayticket->AutoSize = true;
			this->displayticket->BackColor = System::Drawing::Color::Transparent;
			this->displayticket->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayticket->ForeColor = System::Drawing::Color::Wheat;
			this->displayticket->Location = System::Drawing::Point(870, 572);
			this->displayticket->Margin = System::Windows::Forms::Padding(4);
			this->displayticket->Name = L"displayticket";
			this->displayticket->Size = System::Drawing::Size(372, 53);
			this->displayticket->TabIndex = 9;
			this->displayticket->TabStop = true;
			this->displayticket->Text = L"Display Ticket";
			this->displayticket->UseVisualStyleBackColor = false;
			this->displayticket->CheckedChanged += gcnew System::EventHandler(this, &loginmainform::displayticket_CheckedChanged);
			// 
			// loginmainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->cancelbutton;
			this->ClientSize = System::Drawing::Size(1246, 769);
			this->Controls->Add(this->displayticket);
			this->Controls->Add(this->searchticket);
			this->Controls->Add(this->addticket);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->logincanceltable);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1622, 1575);
			this->MinimumSize = System::Drawing::Size(1144, 719);
			this->Name = L"loginmainform";
			this->Text = L"loginmainform";
			this->Load += gcnew System::EventHandler(this, &loginmainform::loginmainform_Load);
			this->logincanceltable->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   public: User^ user=nullptr;
			bool adticketbool= false;
			bool searchh = false;
			bool display_y_n = false;
			bool finalext = false;
			
	private: System::Void loginbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->textBox1->Text;
		String^ password = this->textBox2->Text;
		
		if (email->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Please enter email and password"," Email or Password Empty", MessageBoxButtons::OK);
			return;
		}
		
		try {
			String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM USERS WHERE email=@email and password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->email = reader->GetString(1);
				user->password = reader->GetString(2);
				//this->Close();
				// open registration
			}
			else {
				MessageBox::Show("Incorrect id or password", " Email or Password error", MessageBoxButtons::OK);
				return;
			}
			if (addticket->Checked)
			{
				this->adticketbool = true;
				this->Close();
			}
			if (searchticket->Checked)
			{
				this->searchh = true;
				this->Close();
			}
			if (displayticket->Checked)
			{
				this->display_y_n = true;
				this->Close();

			}
			
		}
		catch(Exception^ e) {
			MessageBox::Show("Database error", "Please try again", MessageBoxButtons::OK);
			return;
		}
	}
private: System::Void cancelbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	finalext = true;
	this->Close();
}
private: System::Void loginmainform_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void displayticket_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
