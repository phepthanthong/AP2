#ifndef HERBIVORE_H
#define HERBIVORE_H

#include <iostream>
#include <string>
#include "animal.h"
#include "Date.h"
using namespace std;

class Herbivore: public Animal {
 private:
  string nomHerbivore;
  Date dateNaisHer;
  int numero;

 protected:
  static int numHerbivore;

 public:
  Herbivore();
  Herbivore(string nomAnimal, Date dateNais, int numero);
  ~Herbivore();
  
  virtual void fairManger() = 0;
  virtual void faireParler() = 0;
};

#endif
