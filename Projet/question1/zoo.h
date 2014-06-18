#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
#include <sstream>
#include "Liste.h"
#include "cage.h"
using namespace std;

typedef Liste <Animal>::TIterator TAdrAni;

class Zoo {
 private:
  string nomZoo;
  string adrZoo;
  int phoneZoo;
  
 public:
  Zoo();
  Zoo(string nom, string adresse, int telephone);
  ~Zoo();

  Zoo(const Zoo &c);
  Zoo &operator= (const Zoo &c);
  friend ostream & operator<<(ostream &os, const Zoo & cage);

  string getNomZoo()const;
  string getAdrZoo()const;
  int getPhoneZoo()const;

  void compterAnimaux( Liste <Animal> &a );

};

#endif
