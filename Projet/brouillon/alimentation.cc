#include "alimentation.h"

Alimentation::Alimentation()
{
  cout << " == Constructeur par defaut: Alimentation" << endl;
  calorie = 0;
  nomAliment = "NULL";
}

Alimentation::~Alimentation()
{
  cout << " == Destructeur: Alimentation" << endl;
}

Alimentation::Alimentation(string nomAli, int cal)
{
  cout << " == Constructeur avec parametre: Alimentation" << endl;
  nomAliment = nomAli;
  calorie = cal;
}

void Alimentation::affiAliment()
{
  cout << "Nom de l'Aliment: " << nomAliment << endl;
  cout << "Il contient " << calorie << " calorie" << endl;
}
