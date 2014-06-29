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
  int quantiteLion;

 protected:
  static int numLion;

 public:
  Lion();
  Lion(string nomL, int quantiteL);
  ~Lion();

  void afficherA();
  string getNomLion()const;
  int getNumeroLion()const;
  int getQuantiteLion()const;
};

#endif
