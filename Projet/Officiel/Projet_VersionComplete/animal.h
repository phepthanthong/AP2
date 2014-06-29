#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>  //besoin d'uiliser les fonctions srand et rand
#include "veterinaire_General.h"

using namespace std;

class Animal {
 protected:
  string nomAnimal;
  string dateNais;
  string codeAnimal;
  string quelType; // chung loai gi? vi du thu an con, an thit
  string type; // loai thu gi? vi du lion, tiger
  string cage;
  string malade;

  static int numAnimal;

 public:
  Animal();
  ~Animal();

  string getNomAnimal();
  string getNumero();
  string getChungloai();
  string getType();
  string getCage();
  string get_malade();

  void set_malade(string mal);
  void change_Cage(string mal);
  void visiterMedicale(VeterinaireGeneral &vet);
  void parler();


};

#endif  

