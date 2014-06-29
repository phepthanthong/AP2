#ifndef ZOO_H
#define ZOO_H

#include "library.h"
using namespace std;


class Zoo {
 private:
  string nomZoo;
  string adrZoo;
  string phoneZoo;
  int numberAnimal;
  
 public:
  Zoo();
  ~Zoo();
int compterAnimaux(list <Animal> ani);
void initialiseZoo();
void showZoo();

};

#endif
