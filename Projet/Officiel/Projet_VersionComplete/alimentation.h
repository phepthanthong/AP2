#ifndef ALIMENTATION_H
#define ALIMENTATION_H

#include <iostream>
#include <string>
using namespace std;

class Alimentation {
 private:
  int calorie;
  string nomAliment;

 public:
  Alimentation();
  ~Alimentation();
  
  virtual void afficherInfoAliment() = 0;
};

#endif
