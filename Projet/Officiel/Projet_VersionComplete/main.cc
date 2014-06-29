#include "library.h"
#include "workalimentation.h"
#include "workEmploye.h"
#include "workCage.h"
#include "workAnimal.h"
#include "workZone.h"
#include "workTicket.h"
#include "workVeterinaire.h"

using namespace std;

int main()
{
  system("clear");
  list <Cage> cage;
  list <Ouvrier> ouv;
  list <Animal> ani;
  list <Viande> viande;
  list <Legume> legume;
  list <Zone> zone;
  VeterinaireGeneral vet;
  Chiropracteur chiro;
  Dentiste dent;
  Zoo zoo;
  zoo.initialiseZoo();
  zoo.showZoo();
  char choix;
  do{
    menu_main();
    cin >> choix;
    cout << endl;
    switch (choix)
    {
      case '1':
      {
	zoo.showZoo();
	cout << endl << "\tNotre Zoo a: " << endl;
	cout << "\t\t" << zone.size() << " Zone(s)" <<endl;
	cout << "\t\t" << cage. size() << " Cage(s)" << endl;
	cout << "\t\t" << zoo.compterAnimaux(ani) << " Animal(aux)" <<endl;
	cout << "\t\t" << ouv.size() << " Employe(s)" << endl;
	cout << "\t\t" << viande.size()+legume.size() << " Aliment(s): " << viande.size();
	cout << " sont de type Viande et " << legume.size() << " sont de type Legume" << endl;
	break;
      }
      case '2':
      {
	workZone(zone, cage);
	break;
      }
      case '3':
      {
	workCage(cage, ani, viande, legume, ouv, zone);
	break;
      }
      case '4':
      {
	workAnimal(ani, cage, zone, vet, chiro);
	break;
      }
      case '5':
      {
	workAlimentation(viande, legume);
	break;
      }
      case '6':
      {
	workEmploye(cage, ouv); 
	break; 
      }
      case '7':
      {
	workTicket(cage, ani);
	break;
      }
      case '8':
      {
	workVeterinaire(ani, vet, dent, chiro);
	break;
      }
      case '9':
      {
	cout << "JE VOUS REMERCIE D'AVOIR UTILISE LE PROGRAMME - A BIENTOT " << endl << "PROGRAMME TERMINE" <<endl;
	break;
      }
      default:
      {
	cout << "ENTREE INVALIDE: VEUILLEZ ENTRER DE NOUVEAU UN NUMERO DE 1 A 9 " << endl;
	break;
      }
    }
  }while(choix!='9');
 }
