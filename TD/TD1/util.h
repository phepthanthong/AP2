#ifndef PGCD_H
#define PGCD_H
#include <iostream>
#include "rationnel.h"
using namespace std;
class Pgcd {
 private:
  int my_num;
  int my_deno;
 public:
  Pgcd();
  Pgcd(int numerateur,int denominateur);
  ~Pgcd();
  void setNum(int num);
  void setDeno(int deno);
  int resultat();
  void reduit(rationnel r);
};
#endif
