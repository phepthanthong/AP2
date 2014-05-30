#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <string>
#include <iostream>
using namespace std;
class Employer {
 private:
  string my_nom;
  int my_salaire;
 public:
  Employer();
  Employer(string nomEmployer, int salaireInitial);
  void changerSalaire(int nouveauSalaire);
  int getSalaire()const;
  string getNom()const;
};
#endif
