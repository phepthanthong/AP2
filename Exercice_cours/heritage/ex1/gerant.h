#ifndef GERANT_H
#define GERANT_H
#include "employer.h"
#include <iostream>
#include <string>
class Gerant : public Employer {
 private:
  int my_nb;
 public:
  Gerant();
  Gerant(string nomEmployer, int salaireInitial);
  void ajouter();
  int getNombre()const;
};
#endif
