#ifndef LION_H
#define LION_H

#include <iostream>
#include <string>
#include "animal.h"
#include "Date.h"
using namespace std;

class Lion : public Animal {
 private:
  string nomLion;
  int numeroLion;

 protected:
  static int numLion;

 public:
  Lion();
  Lion(string nomL);
  ~Lion();

  void afficherA();
};

#endif
