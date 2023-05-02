#include "loginmainform.h"
#include "ticket_add_form.h"
#include "Search_ticket.h"
#include "Display_table.h"
using namespace System;
using namespace System::Windows::Forms;
bool condition = false; 
bool add = false;
bool search = false;
bool display = false;
bool finalexit = false;
void opendisplay();
void main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;
	
	
	
		ticketmanagement::loginmainform loginmainform;
		loginmainform.ShowDialog();
			if (loginmainform.adticketbool) {
				//ticketmanagement::ticket_add_form ticket_add_form;
				//ticket_add_form.ShowDialog();
				add = true;
				if (!condition)
				{
					opendisplay();
				}
			}
			else if (loginmainform.searchh) {
				//ticketmanagement::Search_ticket  Search_ticket;
				//Search_ticket.ShowDialog();
				search = true;
				if (!condition)
				{
					opendisplay();
				}

			}
			else if (loginmainform.display_y_n) {
				//ticketmanagement::Display_table Display_table;
				//Display_table.ShowDialog();
				display = true;
				if (!condition)
				{
					opendisplay();
				}

			}
		
		

	
	//if (user != nullptr) {
	//	MessageBox::Show("Authentication Successful","Program.cpp", MessageBoxButtons::OK);
	//}
	//else {
	//	MessageBox::Show("Authentication Canceled","Program.cpp", MessageBoxButtons::OK);
	//}
}

void opendisplay()
{
	do {
		if (add) {
			add = false;
			ticketmanagement::ticket_add_form ticket_add_form;
			ticket_add_form.ShowDialog();

			if (ticket_add_form.to_search) {
				//ticketmanagement::Search_ticket  Search_ticket;
				//Search_ticket.ShowDialog();
				search = true;
				opendisplay();
			}
			if (ticket_add_form.to_display)
			{
				//ticketmanagement::Display_table Display_table;
				//Display_table.ShowDialog();
				display = true;
				opendisplay();
			}
			else {
				opendisplay();
			}
		}
		else if (search) {
			search = false;
			ticketmanagement::Search_ticket  Search_ticket;
			Search_ticket.ShowDialog();

			if (Search_ticket.to_add) {
				//ticketmanagement::Search_ticket  Search_ticket;
				//Search_ticket.ShowDialog();
				add = true;
				opendisplay();
			}
			if (Search_ticket.to_display)
			{
				//ticketmanagement::Display_table Display_table;
				//Display_table.ShowDialog();
				display = true;
				opendisplay();
			}
			else {
				opendisplay();
			}
		}
		else if (display) {
			display = false;
			ticketmanagement::Display_table Display_table;
			Display_table.ShowDialog();

			if (Display_table.to_add) {
				//ticketmanagement::Search_ticket  Search_ticket;
				//Search_ticket.ShowDialog();
				add = true;
				opendisplay();
			}
			else if (Display_table.to_search)
			{
				//ticketmanagement::Display_table Display_table;
				//Display_table.ShowDialog();
				search = true;
				opendisplay();
			}
			else {
				opendisplay();
			}

		}
		else {
			condition = true;
			ticketmanagement::loginmainform loginmainform;
			loginmainform.ShowDialog();
			finalexit = loginmainform.finalext;
			if (loginmainform.adticketbool) {
				//ticketmanagement::ticket_add_form ticket_add_form;
				//ticket_add_form.ShowDialog();
				add = true;
			}
			else if (loginmainform.searchh) {
				//ticketmanagement::Search_ticket  Search_ticket;
				//Search_ticket.ShowDialog();
				search = true;
			}
			else if (loginmainform.display_y_n) {
				//ticketmanagement::Display_table Display_table;
				//Display_table.ShowDialog();
				display = true;
			}
		}
	} while (!finalexit);

}