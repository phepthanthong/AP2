#include "animal.h"

int Animal::numAnimal = 0;

Animal::Animal(){}

Animal::~Animal(){}

string Animal::getNomAnimal()
{
  return nomAnimal;
}
string Animal::getNumero()
{
  return codeAnimal;
}
string Animal::getType()
{
  return type;
}
string Animal::getChungloai()
{
  return quelType;
}
string Animal::getCage ()
{
  return cage;
}
string Animal::get_malade()
{
  return malade;
}
void Animal::set_malade(string mal)
{
  malade = mal;
}
void Animal::change_Cage(string maCage)
{
  cage = maCage;
}
void Animal::visiterMedicale(VeterinaireGeneral &vet)
{
  int random;
  random = rand()%5+1;
  if (random <=2)
  {
    random = rand()%2+1;
    if(random == 1) 
      {
      malade="ALERTE: MALADIE DENTAIRE DETECTE";
      }
    else malade="CHIROPRACTEUR";
    vet.set_malade(codeAnimal,malade);
  }
  else malade="NULL";
}

void Animal::parler()
{
  cout << endl;
  cout << "\t Bonjour, je suis un animal" << endl;
  cout << "\t\t - Mon numero est: " << codeAnimal << endl;
  cout << "\t\t - Je m'appelles: " << nomAnimal << endl;
  cout << "\t\t - Mon type est: " << type << endl;
  cout << "\t\t - J'appartiens a: " << quelType << endl;
  cout << "\t\t - Ma date de naissance est: " << dateNais << endl;
  cout << "\t\t - Je vis dans la cage: " << cage << endl;
  if (malade=="NULL") 
    cout << "\t\t - Mon etat de sante est bien." << endl;
  else cout << "\t\t - Mon etat de sante est mauvais. Je suis malade." << endl;
  cout << endl;
}

