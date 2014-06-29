#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <sstream>
#include "Date.h"
using namespace std;

class Animal {
 private:
  string nomAnimal;
  Date dateNais;
  int numero;
  string quelType;

 protected:
  static int numAnimal;

 public:
  Animal();
  Animal(string nomA);
  ~Animal();

  Animal(const Animal &ani);
  Animal &operator= (const Animal &ani);
  friend ostream & operator<<(ostream &os, const Animal & ani);

  string getNomAnimal()const;
  int getNumero()const;
  string getType()const;

  void saisieAnimal();
  void affiInfoAni(); 

};

#endif  

