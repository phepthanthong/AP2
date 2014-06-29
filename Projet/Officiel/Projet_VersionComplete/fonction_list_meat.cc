#include "fonction_list_meat.h"


/*======================= LISTE VIANDE =======*/
void show_list_viande(list <Viande>  meat)
{
  list<Viande>::iterator it_viande;
  if(meat.size()==0)
    cout << " LISTE VIDE: PAS DE VIANDE"<< endl;
  else
    {
      int sothutu=1;
      for(it_viande = meat.begin(); it_viande != meat.end(); it_viande++)
	{
	  cout << sothutu << ")\t";
	  (*it_viande).afficherInfoAliment();
	  sothutu++;
	}
    }
}

void add_list_viande (Viande moi ,list <Viande> & meat)
{
  meat.push_back(moi);
  cout << " ACHAT D'UNE NOUVELLE VIANDE REUSSITE" <<endl;
}

void nhap_thit (int vitri, int khoiluong, list <Viande> & meat)
{
  list<Viande>::iterator it_viande;
  for(it_viande = meat.begin(); it_viande != meat.end(); it_viande++)
    {
      vitri--;
      if (vitri==0)
	{
	  (*it_viande).importViande(khoiluong);
	  cout << " AJOUT REUSSITE " <<endl;
	  break;
	}
    }
  if (it_viande == meat.end())
    cout << " INVALIDE" <<endl;
}
void xuat_thit (int vitri, int khoiluong, list <Viande> & meat)
{
  list<Viande>::iterator it_viande;
  for(it_viande = meat.begin(); it_viande != meat.end(); it_viande++)
    {
      vitri--;
      if (vitri==0)
	{
	  if ((*it_viande).getQuantiteViande() >= khoiluong)
	    {
	      (*it_viande).exportViande(khoiluong);
	      cout << " FAIRE MANGER: REUSSITE" <<endl;
	      break;
	    }
	  else
	    {
	      cout << " PAS ASSEZ D'ALIMENT POUR FAIRE MANGER" << endl;
	      break;
	    }
	}
    }
  if (it_viande == meat.end())
    cout << " INVALIDE" <<endl;
}
