#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <iostream>
#include <string>
#include "animal.h"
#include "Date.h"
using namespace std;

class Carnivore: public Animal {
 private:
  string nomCarnivore;
  Date dateNaisCar;
  int numero;

 protected:
  static int numCarnivore;

 public:
  Carnivore();
  Carnivore(string nomAnimal,Date dateNais,int numero);
  ~Carnivore();

  virtual void fairManger() = 0;
  virtual void faireParler() = 0;
};

#endif
