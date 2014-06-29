#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>
#include <string>
#include <map>

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

  virtual string getNom();
  virtual string getNum();
  virtual void jeSuis() = 0;
 
};

#endif
  
