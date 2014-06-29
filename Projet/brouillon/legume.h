#ifndef LEGUME_H
#define LEGUME_H

#include <iostream>
#include <string>
#include "alimentation.h"
using namespace std;

class Legume: public Alimentation {
 private:
  string nomLegume;
  int calorieLegume;
  float quantiteLegume;

 public:
  Legume();
  ~Legume();
  Legume(string nomLeg, int calLeg, float quantite);

  void affiAliment();
  float getQuantiteLegume();
  void stockerLegume(float mass);
  void destockerLegume(float mass);

};

#endif
