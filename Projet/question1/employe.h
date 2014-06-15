#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Employe {
 private:
  string metier;
  string nomEmploye;
  int numcode;
 protected:
  static int numEmploye ;
 public:
  Employe();
  ~Employe();
  Employe(string nom, string leMetier);

  string getNomEmploye()const;
  int getNumEmploye()const;
  virtual void jeSuis() = 0;
  //friend ostream & operator<<(ostream &os, const Employe & emp);
};

#endif
  
