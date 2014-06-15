#ifndef OUVRIER_H
#define OUVRIER_H

#include <iostream>
#include <string>
#include "employe.h"
#include "cage.h"
#include <sstream>
using namespace std;

class Ouvrier: public Employe {
 private:
  string nomOuvrier;
  int numOuvrier;
  //Cage *cage;
  
 public:
  Ouvrier();
  ~Ouvrier();
  Ouvrier(string nomO);

  string getNomOuvrier()const;
  int getNumOuvrier()const;
  void jeSuis();

  //friend ostream & operator<<(ostream &os, const Ouvrier & ouv);
};

#endif
  
