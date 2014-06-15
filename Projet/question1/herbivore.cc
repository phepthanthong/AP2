#include "herbivore.h"

int Herbivore::numHerbivore = 0;
Herbivore::Herbivore()
{
  cout << " == Constructeur par defaut: Herbivore" << endl;
}

Herbivore::Herbivore(string nomAnimal, Date dateNais, int numero)
{
  cout << " == Constructeur avec parametre: Herbivore" << endl;
}

Herbivore::~Herbivore()
{
  cout << " == Destructeur: Herbivore" << endl;
}
