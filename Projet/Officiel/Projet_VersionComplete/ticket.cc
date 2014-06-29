#include "ticket.h"

using namespace std;

int Ticket::numTicket=0;
int Ticket::doanhthu=0;

Ticket::Ticket()
{
  nameTicket ="TICKET-";
  numTicket++;
  nameTicket.append(static_cast<ostringstream*>( &(ostringstream() << numTicket) )->str());
  money=0;
}
Ticket::~Ticket() {}

void Ticket::setZone(string z) { zone.push_back(z); }

void Ticket::setMoney(int xu) { money = xu * zone.size();}

void Ticket::destroyTicket() {numTicket--; cout << "Ticket da bi huy \n";}

void Ticket::printTicket() {cout << "Ticket da in thanh cong \n"; doanhthu+=money;}

void Ticket::showTicket()
{
  list<string>::iterator it_Ticket;
  cout << "So hieu ve: " << nameTicket << endl;
  cout << "Zone tham quan: " ;
  for( it_Ticket = zone.begin(); it_Ticket != zone.end(); it_Ticket++)
    cout << *it_Ticket << "  ";
  cout << "\n\t\t\t\tPrice:  " << money <<endl;
}

void Ticket::information()
{
  cout << "Tong so ve da ban: " << numTicket-1 <<endl;
  cout << "Doanh thu dat duoc: " << doanhthu << " euros\n";
}
