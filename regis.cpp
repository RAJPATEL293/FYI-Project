#include "ticket_add_form.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//ticketmanagement::loginmainform loginmainform;
	//loginmainform.ShowDialog();
	//User^ user = loginmainform.user;
		ticketmanagement::ticket_add_form ticket_add_form;
		ticket_add_form.ShowDialog();
		registt^ user = nullptr;

	if (user != nullptr) {
		MessageBox::Show("Authentication Successful", "Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}
}