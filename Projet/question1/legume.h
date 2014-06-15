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

 public:
  Legume();
  ~Legume();
  Legume(string nomLeg, int calLeg);

  void affiAliment();

};

#endif
