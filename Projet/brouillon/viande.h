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
  float quantiteViande;

 public:
  Viande();
  ~Viande();
  Viande(string nomV, int calV, float quantiteV);

  void affiAliment();

  float getQuantiteViande();
  void stockerViande(float mass);
  void destockerViande(float mass);
 
};

#endif
