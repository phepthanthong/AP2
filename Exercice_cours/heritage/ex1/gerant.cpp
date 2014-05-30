#include "gerant.h"
#include "employer.h"
#include <iostream>
using namespace std;
Gerant::Gerant():Employer(){cout << "constructeur par defaut: Gerant" <<endl;}
Gerant::Gerant(string nomEmployer, int salaireInitial):Employer(nomEmployer,salaireInitial){
  cout << "constructeur avec parametre: Gerant" <<endl;
}
void Gerant::ajouter(){my_nb++;}
int Gerant::getNombre()const{return my_nb;}
