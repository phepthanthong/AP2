#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
using namespace std;
class Zoo {
 private:
  string nomZoo;
  string adrZoo;
  int phoneZoo;
  
 public:
  Zoo();
  Zoo(string nom, string adresse, int telephone);
  ~Zoo();
  void afficher();
  void compterAnimaux();

};

#endif
