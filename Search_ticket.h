#pragma once

namespace ticketmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for Search_ticket
	/// </summary>
	public ref class Search_ticket : public System::Windows::Forms::Form
	{
		//SqlConnection^ sqlConn = gcnew SqlConnection();
		SqlCommand^ sqlCmd = gcnew SqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		SqlDataAdapter^ sqlDta = gcnew SqlDataAdapter();
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ logoutbt;
	private: System::Windows::Forms::CheckBox^ resolvedbox;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;




		   SqlDataReader^ sqlRd;
		


	public:
		Search_ticket(void)
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
		~Search_ticket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ heading_label;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search_ticket::typeid));
			this->heading_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->logoutbt = (gcnew System::Windows::Forms::Button());
			this->resolvedbox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// heading_label
			// 
			this->heading_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->heading_label->BackColor = System::Drawing::Color::Transparent;
			this->heading_label->Font = (gcnew System::Drawing::Font(L"Cooper Black", 19.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heading_label->Location = System::Drawing::Point(16, 6);
			this->heading_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->heading_label->Name = L"heading_label";
			this->heading_label->Size = System::Drawing::Size(1457, 87);
			this->heading_label->TabIndex = 0;
			this->heading_label->Text = L"Search Ticket Number";
			this->heading_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->heading_label->Click += gcnew System::EventHandler(this, &Search_ticket::heading_label_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(236, 12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(92, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 135);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 49);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ticket #";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(236, 135);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(956, 57);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Search_ticket::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Search_ticket::textBox1_KeyPress);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Honeydew;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 408);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1441, 506);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Search_ticket::dataGridView1_CellContentClick);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.24596F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.75404F)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(26, 935);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1437, 113);
			this->tableLayoutPanel1->TabIndex = 7;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Search_ticket::tableLayoutPanel1_Paint);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(4, 4);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(712, 105);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Search_ticket::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(725, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(709, 107);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Search_ticket::button2_Click_1);
			// 
			// logoutbt
			// 
			this->logoutbt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logoutbt->BackColor = System::Drawing::Color::Transparent;
			this->logoutbt->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->logoutbt->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutbt->Location = System::Drawing::Point(1265, 19);
			this->logoutbt->Margin = System::Windows::Forms::Padding(4);
			this->logoutbt->Name = L"logoutbt";
			this->logoutbt->Size = System::Drawing::Size(204, 73);
			this->logoutbt->TabIndex = 8;
			this->logoutbt->Text = L"Logout";
			this->logoutbt->UseVisualStyleBackColor = false;
			this->logoutbt->Click += gcnew System::EventHandler(this, &Search_ticket::logoutbt_Click);
			// 
			// resolvedbox
			// 
			this->resolvedbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->resolvedbox->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resolvedbox->Location = System::Drawing::Point(646, 331);
			this->resolvedbox->Margin = System::Windows::Forms::Padding(4);
			this->resolvedbox->Name = L"resolvedbox";
			this->resolvedbox->Size = System::Drawing::Size(269, 58);
			this->resolvedbox->TabIndex = 9;
			this->resolvedbox->Text = L"Resolved";
			this->resolvedbox->UseVisualStyleBackColor = true;
			this->resolvedbox->CheckedChanged += gcnew System::EventHandler(this, &Search_ticket::checkBox1_CheckedChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1388, 344);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Search_ticket::pictureBox2_Click);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::Blue;
			this->linkLabel2->Location = System::Drawing::Point(364, 331);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(187, 49);
			this->linkLabel2->TabIndex = 12;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Display";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Search_ticket::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(20, 331);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(268, 49);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Add Ticket";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Search_ticket::linkLabel1_LinkClicked);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(236, 248);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(956, 57);
			this->textBox2->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 258);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 49);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Update";
			// 
			// Search_ticket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1501, 1068);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->resolvedbox);
			this->Controls->Add(this->logoutbt);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->heading_label);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1527, 1139);
			this->Name = L"Search_ticket";
			this->Text = L"Search_ticket";
			this->Load += gcnew System::EventHandler(this, &Search_ticket::Search_ticket_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			bool^ resolvedbt = false;
			bool^ logoutbtt3 = false;
			DateTime Time_LUD = DateTime::Now;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		

}
private: System::Void Search_ticket_Load(System::Object^ sender, System::EventArgs^ e) {
 
	String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();
	//sqlCmd->Connection = sqlConn;
	String^ sqlQuery = "select * from Troubleshoot_Underprocess";
	SqlCommand command(sqlQuery, % sqlConn);
	//sqlRd = sqlCmd->ExecuteReader();
	sqlRd=command.ExecuteReader();
	sqlDt->Load(sqlRd);
	sqlRd->Close();
	dataGridView1->DataSource = sqlDt;
	sqlConn.Close();
}
	  
private: System::Void heading_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void logoutbt_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult itexit;
	itexit = MessageBox::Show("Confirm if you want to exit", "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	logoutbtt3 = true;
	try {
		if (itexit == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if(e->KeyChar == (Char)13){
		try {
			String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			//sqlConn.Open();
			//String^ sqlQuery = "select * from Troubleshoot_Underprocess";
			//SqlCommand command(sqlQuery, % sqlConn);
			SqlDataAdapter^ Dta = gcnew SqlDataAdapter("select * from Troubleshoot_Underprocess where Ticket = '"+textBox1->Text+"';", connString);
			DataTable^ sqlta = gcnew DataTable();
			Dta->Fill(sqlta);
			dataGridView1->DataSource = sqlta;
			sqlConn.Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	//NO need for below function becuase referece code is workig pretty good with update function.
	//try {
		//if (e->KeyChar == (Char)13)
		//{
		//	DataView^ dv = sqlDt->DefaultView;
		//	dv->RowFilter = String::Format("Ticket like '%{0}%'", textBox1->Text);
		//	dataGridView1->DataSource = dv->ToTable();
		//}

	//}
	//catch (Exception^ e) {
		//MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

	//}

}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try {
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Ticket like '%{0}%'", textBox2->Text);
			dataGridView1->DataSource = dv->ToTable();
		}

	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	resolvedbt = true;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	//refresh button works!! Yayssss;
	try {
		String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
		SqlConnection sqlConn(connString);
		//sqlConn.Open();
		//String^ sqlQuery = "select * from Troubleshoot_Underprocess";
		//SqlCommand command(sqlQuery, % sqlConn);
		SqlDataAdapter^ Dta= gcnew SqlDataAdapter("select * from Troubleshoot_Underprocess",connString);
		DataTable^ sqlta = gcnew DataTable();
		Dta->Fill(sqlta);
		dataGridView1->DataSource = sqlta;
		sqlConn.Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Yicks selecting and saving infomation into resolved database is done
	
	if (resolvedbox->Checked)
	{
		try {
			String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO Troubleshoot_Resolved (Name, Email, Ticket, issue) SELECT Name, Email, Ticket,issue FROM Troubleshoot_Underprocess WHERE Ticket = '"+ textBox1->Text+"';";
			SqlCommand command(sqlQuery, % sqlConn);
			command.ExecuteNonQuery();
			MessageBox::Show("Information Got Saved in Resolved database", "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			sqlConn.Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

		}
			// deleting information from underprocess database;
			try {
				String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();
				String^ sqlQuery2 = "delete from Troubleshoot_Underprocess where Ticket ='" + textBox1->Text + "';";
				SqlCommand command(sqlQuery2, % sqlConn);
				command.ExecuteNonQuery();
				MessageBox::Show("Information Got Deleted from Underprocess database", "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
				sqlConn.Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

			}
	}

	if (textBox2->Text->Length != 0)
	{
		try{
			String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			//String^ sqlQuery = "INSERT INTO Troubleshoot_Underprocess" + "(update,Time_LUD) VALUES Where Ticket = 123123124" +"("+update+","+Time_LUD+");";
			String^ sqlQuery = "UPDATE Troubleshoot_Underprocess SET Ticket_update = " + "'" + textBox2->Text + "'" + "WHERE Ticket = '"+textBox1->Text+"';";
			SqlCommand command(sqlQuery, % sqlConn);
			//command.Parameters->AddWithValue("@update", update);
			//command.Parameters->AddWithValue("@Time_LUD", Time_LUD);
			command.ExecuteNonQuery();
			MessageBox::Show("Information got updated", "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

		}
		if (textBox1->TextLength!=0) {
			try {
				String^ connString = "Data Source=DESKTOP-JU6H8T8;Initial Catalog=LOG_IN_DATACHECK;Integrated Security=True";
				SqlConnection sqlConn(connString);
				//sqlConn.Open();
				//String^ sqlQuery = "select * from Troubleshoot_Underprocess";
				//SqlCommand command(sqlQuery, % sqlConn);
				SqlDataAdapter^ Dta = gcnew SqlDataAdapter("select * from Troubleshoot_Underprocess where Ticket = '" + textBox1->Text + "';", connString);
				DataTable^ sqlta = gcnew DataTable();
				Dta->Fill(sqlta);
				dataGridView1->DataSource = sqlta;
				sqlConn.Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Ticket add form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			}
		}

	}
}

	   public: bool to_add = false;
			 bool to_display = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->to_add = true;
	this->Close();

}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->to_display = true;
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	return;

}
};
}
