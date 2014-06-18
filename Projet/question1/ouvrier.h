#ifndef OUVRIER_H
#define OUVRIER_H

#include <iostream>
#include <string>
#include "employe.h"
#include "cage.h"

using namespace std;

class Ouvrier: public Employe {
 private:
  string nomOuvrier;
  int numOuvrier;
    
 public:
  Ouvrier();
  ~Ouvrier();
  Ouvrier(string nomO);

  Ouvrier(const Ouvrier &o);
  Ouvrier &operator= (const Ouvrier &o);
  friend ostream & operator<<(ostream &os, const Ouvrier & ouv);

  string getNomOuvrier()const;
  int getNumOuvrier()const;
  void jeSuis();

};

#endif
  
