#include <iostream>
#include "operation.h"
using namespace std;
int main(){
  entier f;
  //entier f2(10,5);
  //entier *f3 = new entier;
  //entier *f4 = new entier(10,2);
  f.initialise();
  f.additionner();
  f.soustraire();
  f.multiplier();
  f.diviser();
}
/*
e.additionner(10);
cout << e.getvaleur() <<endl;
e2.soustraire(10);
cout << e2.getvaleur() <<endl;

e3->additionner(5);
cout << e3->getvaleur() <<endl;
e4->soustraire(10);
cout << e4->getvaleur() <<endl;

delete e3;
delete e4;
return 0;
*/
