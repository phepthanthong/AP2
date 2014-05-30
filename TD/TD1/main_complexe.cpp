#include <iostream>
#include "complexe.h"
int main(){
  Complexe comp;
  comp.setValeur(2,6);
  comp.getValeur();

  Complexe comp1(8,3);
  comp1.getValeur();

  Complexe comp2;
  comp.add(comp1,comp2);
  cout << "apres l'addition ";
  comp2.getValeur();

  comp.multip(comp1,comp2);
  cout << "apres la multiplication ";
  comp2.getValeur();

}
