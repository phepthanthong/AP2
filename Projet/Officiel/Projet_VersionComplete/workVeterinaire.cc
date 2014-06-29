#include "workVeterinaire.h"
using namespace std;

/*
void menu_veterinaire()
{
  cout << endl;
  cout << "\t1. Veterinaire General \n";
  cout << "\t2. Send to Doctor Special \n";
  cout << "\t3  Dentiste\n";
  cout << "\t4  Dentiste chua benh \n";
  cout << "\t5. Chiropracteur\n";
  cout << "\t6. Chiropracteur chua benh\n";
  cout << "\t7. Clear screen\n";
  cout << "\t8. Quay ve menu truoc\n\n";
  cout << "\t\tLua chon cua ban: "; 
  
} 
*/

void workVeterinaire(list<Animal>& ani, VeterinaireGeneral &vet, Dentiste & dent, Chiropracteur & chiro)
{
  char chose;
  list <Cage>::iterator it_Cage;
  Ticket tk;
  system("clear");
  do
  {
    menu_veterinaire();
    cin >> chose;
    switch (chose)
    {
      case '1':
      {
	vet.jeSuis();
	break;
      }
      case '2':
      {
	string maAni, mal;
	map<string, string>::iterator it;
	map <string,string> list_malade;
	list_malade = vet.send_malade();
	vet.delete_list();
	if (list_malade.size() == 0) cout << "Khong co Animal benh\n";
	else
	{
	  for (it=list_malade.begin(); it!=list_malade.end(); ++it)
	  {
	    cout << it->first << " => " << it->second << '\n';
	    maAni = it->first; mal = it-> second;
	    if(mal =="DENTISTE")
	      dent.receive_malade(maAni, mal);
	    else chiro.receive_malade(maAni, mal);
	  }
	}
	
	break;
      }
      case '3':
      {
	dent.jeSuis();
	break;
      }
      case '4':
      {
	dent.soigner_malade(ani);
	break;
      }
      case '5':
      {
	chiro.jeSuis();
	break;
      }
      case '6':
      {
	chiro.soigner_malade(ani);
	break;
      }
      case '7':
      {
	system("clear");
	break;
      }
      case '8':
      {

	break;
      }
      default:
      {
	cout << "Nhap sai... Xin vui long nhap lai" << endl;
	break;
      }
    }
  }while (chose != '8');
}

