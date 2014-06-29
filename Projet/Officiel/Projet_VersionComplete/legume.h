#ifndef LEGUME_H
#define LEGUME_H

#include <iostream>
#include <string>
#include <stdio.h>
#include "alimentation.h"
using namespace std;

class Legume: public Alimentation {
 private:
  string nomLegume;
  int calorieLegume;
  int quantiteLegume;

 public:
  Legume();
  ~Legume();

  void saisirLegume();
  int getQuantiteLegume();
  void importLegume(int a);
  void exportLegume(int a);
  void afficherInfoAliment();

};

#endif
