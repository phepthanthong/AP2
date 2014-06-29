 #include "zone.h"

using namespace std;

int Zone::numZone = 0;

Zone::Zone()
{
  numZone++;
  nomZone = "Z-";
  nomZone.append(static_cast<ostringstream*>( &(ostringstream() << numZone) )->str());
  numberAnimal =0;
}
Zone::~Zone(){}

string Zone::getNom()
{
  return nomZone;
}
int Zone::compterAnimaux() {return numberAnimal;}

bool Zone::checkCage()
{
  return (listCage.size() != 0);
}
void Zone::addCage(string maCage)
{
  listCage.push_back(maCage);
  cout << "AJOUT REUSSI D'UNE NOUVELLE CAGE " << maCage << " DANS LA ZONE: " << nomZone << "\n";
}

void Zone::deleteCage(string maCage)
{
  list<string>::iterator it_Cage;
  for(it_Cage = listCage.begin(); it_Cage != listCage.end(); it_Cage++)
    if(maCage == *it_Cage)
      {
	listCage.remove(maCage);
	cout << " SUPPRESSION REUSSITE DE LA CAGE " << maCage <<" DU ZONE " << nomZone <<endl;
      break;
      }
  if(it_Cage == listCage.end())
    cout << " CETTE CAGE N'EXISTE PAS DANS CETTE ZONE" <<endl;
}

void Zone::increase() {numberAnimal++;}

void Zone::decrease() {numberAnimal--;}

void Zone::showZone()
{
  cout << " ZONE: " << nomZone << " \t\tLE NOMBRE TOTAL DES ANIMAUX:  " << numberAnimal <<endl;
  if (listCage.size() == 0)
    cout << "\t\t PAS DE CAGE DANS CETTE ZONE\n";
  else
    {
      cout << "\t\t LES CAGES SONT:  ";
      list<string>::iterator it_Cage;
      for(it_Cage = listCage.begin(); it_Cage != listCage.end(); it_Cage++)
    {
      cout << *it_Cage << "    "; 
    }
      cout << endl;
    }
  
}

