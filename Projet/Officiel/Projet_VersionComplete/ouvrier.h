#ifndef OUVRIER_H
#define OUVRIER_H

#include "animal.h"
#include "fonction_list_meat.h"
#include "fonction_list_vege.h"
#include <iostream>
#include <string>
#include "employe.h"

using namespace std;

class Ouvrier: public Employe {
 private:
  string nomOuvrier;
  string numOuvrier;
  string numcage;
  string birthday;
  string tel;
  
 public:
  Ouvrier();
  ~Ouvrier();

  void initialise_cage (string cage);
  string getNom();
  string getNum();
  string getChuong();
  void jeSuis();

};

#endif
  
