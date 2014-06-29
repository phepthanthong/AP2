#ifndef CHIRO_H
#define CHIRO_H
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <sstream>
#include "employe.h"
#include "animal.h"
using namespace std;


class Chiropracteur : public Employe {
 private:
  string numChiro;
  map<string, string> ani_malade;
  
 public:
  Chiropracteur();
  ~Chiropracteur();
  string getNum();
  string getChuong();
  void receive_malade(string maAni, string mal);
  void jeSuis();
  void soigner_malade(list<Animal> &ani);


};

#endif
