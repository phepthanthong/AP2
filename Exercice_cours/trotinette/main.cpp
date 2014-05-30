#include "trotinette.h"
#include <iostream>
using namespace std;
int main (){
  Roue a;
  a.setDiametre(5);
  cout << a.getDiametre() << endl;

  Roue b(10);
  cout << b.getDiametre() << endl;

  Roue c(a);
  cout << c.getDiametre() << endl;
  
  Trotinette d;
  d.changerRoueAvant(a);
  cout << (d.getRoueAvant()).getDiametre() << endl;

  Trotinette e;
  e.changerRoueArriere(b);
  cout << (e.getRoueArriere()).getDiametre() << endl; 
  
}
