#ifndef CAGE_H
#define CAGE_H

//#include "Liste.h"
#include "animal.h"
#include "ouvrier.h"
#include <iostream>
#include <string>

using namespace std;

class Cage {
 private:
  
  static int numCage;
  string taille;
  
 public:
  Cage();
  ~Cage();
  Cage(string tailleC);

  Cage(const Cage &c);
  Cage &operator= (const Cage &c);
  friend ostream & operator<<(ostream &os, const Cage & cage);

  int getNumCage()const;
  string getTaille()const;  

  void saisieCage();
  void afficher();
  void compterAnimaux();
  
};

#endif
