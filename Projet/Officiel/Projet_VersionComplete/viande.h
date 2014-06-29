#ifndef VIANDE_H
#define VIANDE_H

#include <string>
#include "enter_value.h"
#include "alimentation.h"
using namespace std;

class Viande: public Alimentation {
 private:
  string nomViande;
  int calorieViande;
  int quantiteViande;

 public:
  Viande();
  ~Viande();
  void saisirViande();
  int getQuantiteViande();
  void importViande(int a);
  void exportViande(int a);
  void afficherInfoAliment();

};

#endif
