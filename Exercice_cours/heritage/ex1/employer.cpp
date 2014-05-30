#include "employer.h"
#include <iostream>
using namespace std;
Employer::Employer(){
  cout << "constructeur par defaut: Employer" << endl;
  my_nom = "indefinit";
  my_salaire = 0;
}
Employer::Employer(string nomEmployer, int salaireInitial){
  cout << "constructeur avec parametre: Employer" << endl;
  my_nom = nomEmployer;
  my_salaire = salaireInitial;
}
void Employer::changerSalaire(int nouveauSalaire){ my_salaire = nouveauSalaire;}
int Employer::getSalaire()const{return my_salaire;}
string Employer::getNom()const{return my_nom;}
