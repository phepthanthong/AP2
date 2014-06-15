#include "animal.h"

int Animal::numAnimal = 0;
Animal::Animal()
{
  cout << "Constructeur par defaut: Animal" << endl;
  nomAnimal = "NULL";
  numAnimal++;
  numero = numAnimal;
  //dateNais.setDate(00,00,00);
}

Animal::Animal(string nomA)
{
  cout << "Constructeur avec parametre: Animal" << endl;
  nomAnimal = nomA;
  numAnimal++;
  numero = numAnimal;
  //dateNais.setDate(00,00,00);
}

Animal::~Animal()
{
  cout << " == Destructeur: Animal" << endl;
}

Animal::Animal(const Animal &ani)
{
  nomAnimal = ani.nomAnimal;
  numero = ani.numero;
}

Animal &Animal::operator= (const Animal &ani)
{
  if (this != &ani)
    {
      nomAnimal = ani.nomAnimal;
      numero = ani.numero;
    }
  return *this;
}

ostream & operator<<(ostream &os, const Animal &ani)
{
  os << " - Nom de l'animal: " << ani.getNomAnimal() << endl;
  os << " - Son numero: " << ani.getNumero() << endl;
  return os;

  //os << ouv.jeSuis();
  //return os;
}

string Animal::getNomAnimal()const
{
  return nomAnimal;
}

int Animal::getNumero()const
{
  return numero;
}

void Animal::saisieAnimal()
{
  cout << "Nom de l'Animal ?" << endl;
  cin >> nomAnimal;
  cout << "Numero de l'Animal ?" << endl;
  cin >> numero;
}
/*
void Animal::afficherA()
{
  cout << "C'est un animal" << endl;
  cout << "Nom de l'Animal: " << nomAnimal << endl;
  cout << "Son numero: " << numero << endl;
  //cout << "Sa date de naissance: " << dateNais << endl;
}
*/
