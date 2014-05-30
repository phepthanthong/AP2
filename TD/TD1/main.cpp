#include <iostream>
#include "rationnel.h"
#include "util.h"
using namespace std;

int main(){
  rationnel a(3,4);
  a.affiche();

  rationnel b;
  b.setNum(15);
  b.setDeno(5);
  b.affiche();

  rationnel c;
  c.setNum(5);
  c.setDeno(7);
  c.affiche();
  c.inverse();

  rationnel temp;
  c.inverse(& temp);
  temp.affiche();

  rationnel d(10,14);
  c.test(d);
  c.test(a);

  rationnel e;
  a.multiplier(b,e);
  e.affiche();

  rationnel g;
  g.intToString(15);
  g.intToString(5);
  g.ToString();

  rationnel f;
  f.reduit(b);
  f.affiche();
}
