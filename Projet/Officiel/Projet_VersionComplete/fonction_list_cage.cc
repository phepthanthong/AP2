#include "fonction_list_cage.h"

using namespace std;

void show_list_cage(list <Cage> chuong)
{
  list <Cage>::iterator it_Cage;
  if (chuong.size() == 0)
	  cout << " LISTE VIDE: PAS DE CAGE" << endl;
	else
	{
	  cout << " LES CAGES SONT: \n";
	  for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	  {
	    cout <<"\t\t\t" << (*it_Cage).get_numCage() << "\t" ;
	    if( (*it_Cage).compterAnimaux()==0) cout << " VIDE \t";
	    else cout << " ANIMAL DEJA EXISTE \t";
	    if( (*it_Cage).get_take_care()=="NULL") cout <<" PAS D'OUVRIER\n";
	    else cout << " OUVRIER PRESENT\n";
	  }
	}
}

void show_detail_cage(list <Cage> chuong)
{
  list <Cage>::iterator it_Cage;
  string maCage;
	cout << endl <<" ENTRER LE NOM DE CAGE QUE VOUS VOULEZ CONSULTER: " ;
	cin >> maCage;
	for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	{
	  if((*it_Cage).get_numCage() == maCage)
	  {
	    (*it_Cage).showCage();
	    break;
	  }
	}
	if (it_Cage == chuong.end())
	  cout <<" PAS DE CAGE RECHECHE" <<endl;
}

void create_cage (list <Cage> &chuong,  list<Zone> & zon)
{
  list <Cage>::iterator it_Cage;
  list <Zone>::iterator it_Zone;
	if (zon.size() == 0)
	  cout <<" PAS DE ZONE, VEULLEZ CREER UNE ZONE AVANT DE CREER UNE CAGE \n";
	else
	{
	  string nameZone;
	  bool check=false;
	  Cage cg;
	  cout <<" CREATION REUSSITE DE LA CAGE " << cg.get_numCage() <<endl;
	  do{
	    cout << " LISTE DE ZONE POSSIBLE:  ";
	    for(it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
	      cout << (*it_Zone).getNom() << "    ";
	    cout <<endl << " ENTRER LE NOM DE ZONE SOUHAITE: "; cin >> nameZone;
	    for(it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
	      if ((*it_Zone).getNom() == nameZone)
	      {
		check = true;
		cg.setZone(nameZone);
		(*it_Zone).addCage(cg.get_numCage());
		chuong.push_back(cg);
		break;
	      }
	    if(it_Zone == zon.end())
	      cout << " CETTE ZONE N'EXISTE PAS, VEUILLEZ ENTRER ENCORE UNE FOIS\n";
	  }while ( check == false);
	}
}

void delete_cage(list <Cage> &chuong, list <Ouvrier> &ouv, list<Zone> & zon)
{
  list <Zone>::iterator it_Zone;
  list <Cage>::iterator it_Cage;
	string nameZone;
	string maCage;
	if(chuong.size()==0)
	  cout << " LISTE CAGE VIDE "<< endl;
	else
	{
	  cout << " LE NOM DE CAGE QUE VOUS VOULEZ SUPPRIMER: ";
	  cin >> maCage;
	  for(it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	    {
	      if (maCage == (*it_Cage).get_numCage())
		{
		  if ((*it_Cage).compterAnimaux()==0)
		  {
		    nameZone = (*it_Cage).getZone();
		    for(it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
		      if ((*it_Zone).getNom() == nameZone)
			(*it_Zone).deleteCage(maCage);
		    deactivate(ouv, maCage);
		    chuong.erase(it_Cage);
		    cout << " SUPPRESSION DE CAGE REUSSITE" <<endl;
		  }
		  else
		    cout << " ANIMAL EST DEDANS, IMPOSSIBLE DE SUPPRIMER" << endl;
		  break;
		}
	    }
	  if (it_Cage == chuong.end())
	    cout << " CETTE CAGE N'EXISTE PAS " << endl;
	}
}

