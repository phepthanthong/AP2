#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
#include <sstream>
#include "Liste.h"
using namespace std;

//typedef Liste <Cage>::TIterator TAdrCage;
class Zoo {
 private:
  string nomZoo;
  string adrZoo;
  int phoneZoo;
  //Liste <Cage> cage;
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

  void afficher();
  void compterAnimaux();

};

#endif
