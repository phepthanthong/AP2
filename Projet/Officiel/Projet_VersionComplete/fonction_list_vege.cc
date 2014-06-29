#include "fonction_list_vege.h"


/*======================= LISTE LEGUME =======*/
void show_list_Legume(list <Legume>  vegetable)
{
  list<Legume>::iterator it_Legume;
  if(vegetable.size()==0)
    cout << " LISTE VIDE: PAS DE LEGUME"<< endl;
  else
    {
      int sothutu=1;
      for(it_Legume = vegetable.begin(); it_Legume != vegetable.end(); it_Legume++)
	{
	  cout << sothutu << ")\t";
	  (*it_Legume).afficherInfoAliment();
	  sothutu++;
	}
    }
}

void add_list_Legume (Legume moi ,list <Legume> & vegetable)
{
  vegetable.push_back(moi);
  cout << " ACHAT D'UN NOUVEAU LEGUME REUSSITE" <<endl;
}

void nhap_rau (int vitri, int khoiluong, list <Legume> & vegetable)
{
  list<Legume>::iterator it_Legume;
  for(it_Legume = vegetable.begin(); it_Legume != vegetable.end(); it_Legume++)
    {
      vitri--;
      if (vitri==0)
	{
	  (*it_Legume).importLegume(khoiluong);
	  cout << " AJOUT REUSSITE " <<endl;
	  break;
	}
    }
  if (it_Legume == vegetable.end())
    cout << " INVALIDE" <<endl;
}
void xuat_rau (int vitri, int khoiluong, list <Legume> & vegetable)
{
  list<Legume>::iterator it_Legume;
  for(it_Legume = vegetable.begin(); it_Legume != vegetable.end(); it_Legume++)
    {
      vitri--;
      if (vitri==0)
	{
	  if ((*it_Legume).getQuantiteLegume() >= khoiluong)
	    {
	      (*it_Legume).exportLegume(khoiluong);
	      cout << " FAIRE MANGER: REUSSITE" <<endl;
	    }
	  else
	    cout << " PAS ASSEZ D'ALIMENT POUR FAIRE MANGER" << endl;
	  (*it_Legume).exportLegume(khoiluong);
	}
    }
  if (it_Legume == vegetable.end())
    cout << " INVALIDE" <<endl;
}
