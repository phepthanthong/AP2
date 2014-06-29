#include "workZone.h"

using namespace std;

void workZone( list<Zone> & zon, list <Cage> &chuong)
{
  char chose;
  list <Zone>::iterator it_Zone;
  system("clear");
  do
  {
    menu_zone();
    cin >> chose;
    fflush(stdin);
    switch (chose)
    {
      case '1':
      {
	if (zon.size() == 0)
	  cout << " LISTE VIDE: PAS DE ZONE \n";
	else
	  for(it_Zone=zon.begin(); it_Zone != zon.end(); it_Zone++)
	    (*it_Zone).showZone();
	break;
      }
      case '2':
      {
	Zone moi;
	zon.push_back(moi);
	cout << " AJOUT REUSSI DE LA ZONE " << moi.getNom() << " DANS LA LISTE \n";
	break;
      }
      case '3':
      {
	if(zon.size() == 0)
	  cout << " LISTE VIDE: PAS DE ZONE \n";
	else
	{
	  string maZone;
	  cout << " ENTRER LE NOM DE ZONE QUE VOUS VOULEZ SUPPRIMER: "; cin >> maZone;
	  for(it_Zone=zon.begin(); it_Zone != zon.end(); it_Zone++)
	  {
	    if ((*it_Zone).getNom() == maZone)
	    {
	      if((*it_Zone).checkCage())
	      {
		cout << " SUPPRIMER IMPOSSIBLE: UNE CAGE EST ENCORE EXISTEE \n";
		break;
	      }
	      else
	      {
		zon.erase(it_Zone);
		cout << " SUPPRESSION REUSSITE \n";
		break;
	      }
	    }
	  }
	  if (it_Zone == zon.end())
	    cout << " CETTE ZONE N'EXISTE PAS \n";
	  }
	break;
      }
      case '4':
      {
	system("clear");
	break;
      }
      case '5':
      {
	break;
      }
      default:
      {
	cout << " INVALIDE: VEUILLEZ ENTRER ENCORE UNE FOIS" << endl;
	break;
      }
    }
  }while (chose != '5');
}
