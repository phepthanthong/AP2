#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>
#include <string>
using namespace std;

class Employe {
 private:
  string metier;
  string nomEmploye;
  //static int numEmploye ;
  int numcode;
 protected:
  static int numEmploye ;
 public:
  //static int numEmploye ;
  Employe();
  ~Employe();
  Employe(string nom, string leMetier);

  virtual void jeSuis() = 0;
};

#endif
  
