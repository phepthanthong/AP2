#ifndef VIANDE_H
#define VIANDE_H

#include <iostream>
#include <string>
#include "alimentation.h"
using namespace std;

class Viande: public Alimentation {
 private:
  string nomViande;
  int calorieViande;

 public:
  Viande();
  ~Viande();
  Viande(string nomV, int calV);

  void affiAliment();

};

#endif
