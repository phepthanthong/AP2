#include "workalimentation.h"

void workAlimentation (list <Viande> &meat, list <Legume> & vege)
{
  char choix;
  system("clear");
  do
  {
    menu_alimentation();
    cin >> choix;
    fflush(stdin);
    switch (choix)
      {
      case '1':
	{
	  show_list_viande(meat);
	  break;
	}
      case '2':
	{
	  show_list_Legume(vege);
	  break;
	}
      case '3':
	{
	  char luachon;
	  cout <<" VOUDRIER-VOUS ACHETER UNE NOUVELLE VIANDE OU AJOUTER VIANDE DEJA EXISTEE DANS LA LISTE ? " <<endl;
	  cout <<"\t CHOISIR '1' POUR ACHETER" << endl;
	  cout <<"\t CHOISIR '2' POUR AJOUTER" << endl;
	  cout <<"\t CHOISIR UNE AUTRE TOUCHE POUR REVENIR AU MENU PRECEDENT" <<endl;
	  cout <<"\t\tVOTRE CHOIX: ";
	  cin.ignore();
	  scanf("%c", &luachon);
	  if (luachon == '1')
	    {
	      Viande thit;
	      thit.saisirViande();
	      add_list_viande (thit ,meat);
	    }
	  else if (luachon == '2')
	    {
	      int sothutu=0;
	      int weight=0;
	      cout << " LE NUMERO DE VIANDE QUE VOUS VOULEZ AJOUTER ? ";
	      enter_value (sothutu);
	      cout << " QUANTITE AJOUTEE ? ";
	      enter_value(weight);
	      nhap_thit (sothutu, weight, meat);
	    }
	  else cout << " INVALIDE\n";
	  break;
	}
      case '4':
	{
	  char luachon; // nen de string, vi neu ta danh 1 ky tu khong phai la so, thi chay tum lum het
	  cout <<" VOUDRIER-VOUS ACHETER UN NOUVEAU LEGUME OU AJOUTER LEGUME DEJA EXISTE DANS LA LISTE ? " <<endl;
	  cout <<"\t CHOISIR '1' POUR ACHETER" << endl;
	  cout <<"\t CHOISIR '2' POUR AJOUTER" << endl;
	  cout <<"\t CHOISIR UNE AUTRE TOUCHE POUR REVENIR AU MENU PRECEDENT" <<endl;
	  cout <<"\t\tVOTRE CHOIX: ";
	  cin.ignore();
	  scanf("%c", &luachon);
	  if (luachon == '1')
	    {
	      Legume rau;
	      rau.saisirLegume();
	      add_list_Legume (rau ,vege);
	    }
	else if (luachon == '2')
	  {
	    int sothutu=0;
	    int weight=0;
	    cout << " LE NUMERO DE LEGUME QUE VOUS VOULEZ AJOUTER ? ";
	    enter_value(sothutu);
	    cout << " QUANTITE AJOUTEE ? ";
	    enter_value(weight);
	    nhap_rau (sothutu, weight, vege);
	  }
	else cout << " INVALIDE\n";
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
  }while (choix!='5');
}
