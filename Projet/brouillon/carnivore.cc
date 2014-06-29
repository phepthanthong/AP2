#include "carnivore.h"

int Carnivore::numCarnivore = 0;
Carnivore::Carnivore()
{
  cout << " == Constructeur par defaut: Carnivore" << endl;
}

Carnivore::Carnivore(string nomAnimal, Date dateNais, int numero)
{
  cout << " == Constructeur avec parametre: Carnivore" << endl;
}

Carnivore::~Carnivore()
{
  cout << " == Destructeur: Carnivore" << endl;
}

