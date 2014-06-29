#ifndef TIGRE_H
#define TIGRE_H

#include <iostream>
#include <string>
#include "animal.h"
#include "Date.h"
using namespace std;

class Tigre : public Animal {
 private:
  string nomTigre;
  int numeroTigre;

 protected:
  static int numTigre;

 public:
  Tigre();
  Tigre(string nomT);
  ~Tigre();

  void afficherA();
};

#endif
