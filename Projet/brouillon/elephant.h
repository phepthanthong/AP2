#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <iostream>
#include <string>
#include "animal.h"
#include "Date.h"
using namespace std;

class Elephant : public Animal {
 private:
  string nomElephant;
  int numeroElephant;

 protected:
  static int numElephant;

 public:
  Elephant();
  Elephant(string nomE);
  ~Elephant();

  void afficherA();
};

#endif
