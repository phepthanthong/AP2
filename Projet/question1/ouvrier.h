#ifndef OUVRIER_H
#define OUVRIER_H

#include <iostream>
#include <string>
#include "employe.h"
using namespace std;

class Ouvrier: public Employe {
 private:
  string nomOuvrier;
  int numOuvrier;
  
 public:
  Ouvrier();
  ~Ouvrier();
  Ouvrier(string nomO);

  void jeSuis();
};

#endif
  
