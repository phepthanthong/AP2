#include "workTicket.h"

using namespace std;
/*
void menu_ticket()
{
  cout << endl;
  cout << "\t1. Ban ve \n";
  cout << "\t2. Xem lai thong tin \n";
  cout << "\t3  Dong y in\n";
  cout << "\t4  Huy Ticket va quay ve menu chinh \n";
  cout << "\t5. Xem ket qua hoat dong\n";
  cout << "\t6. Clear screen\n";
  cout << "\t7. Quay ve menu truoc\n\n";
  cout << "\t\tLua chon cua ban: "; 
}
*/
void workTicket(list <Cage> chuong, list <Animal> ani)
{
  char chose;
  list <Cage>::iterator it_Cage;
  Ticket tk;
  system("clear");
  do
  {
    menu_ticket();
    cin >> chose;
    switch (chose)
    {
      case '1':
      {
	if (ani.size() ==0) cout << "Zoo chua co Animal nao. Khong ban ve \n";
	else
	{
	  int sothutu=0; int choice=0;
	  cout <<" Ban chon loai thu nao: \n";
	  for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	  {
	    if( (*it_Cage).getType() != "NULL")
	    {
	      sothutu++;
	      cout << "\t\t" << sothutu <<" )  " << (*it_Cage).getType() <<endl;
	    }
	  }
	  enter_value (choice);
	  for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	  {
	    if( (*it_Cage).getType() != "NULL")
	    {
	      sothutu--; choice--;
	      if (choice == 0) { tk.setZone((*it_Cage).getZone()) ; break;}
	    }
	  }
	  if (choice != 0) cout << "Ban nhap chon lua khong dung\n";
	  else {cout << "Gia ve zone la: 2 euros\n"; tk.setMoney(2);}
	}
	break;
      }
      case '2':
      {
	tk.showTicket();
	break;
      }
      case '3':
      {
	tk.printTicket();
	break;
      }
      case '4':
      {
	tk.destroyTicket();
	break;
      }
      case '5':
      {
	tk.information();
	break;
      }
      case '6':
      {
	system("clear");
	break;
      }
      case '7':
      {
	break;
      }
      default:
      {
	cout << "Nhap sai... Xin vui long nhap lai" << endl;
	break;
      }
    }
  }while (chose != '7' && chose !='4' && chose != '3');
}
