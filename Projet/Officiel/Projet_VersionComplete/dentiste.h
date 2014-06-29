#ifndef DENTISTE_H
#define DENTISTE_H
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <sstream>
#include "employe.h"
#include "animal.h"
using namespace std;


class Dentiste : public Employe {
 private:
  string numDent;
  map<string, string> ani_malade;
  
 public:
  Dentiste();
  ~Dentiste();
  string getNum();
  string getChuong();
  void jeSuis();
  void soigner_malade(list<Animal> &ani);
  void receive_malade(string maAni, string mal);


};

#endif

