// Fichier main.cc
#include <iostream>
#include "Boite.h"
#include "Point.h"
using namespace std;

int main(){
  Point a(5,7);
  Point b(1,2);
  Point c(4,3);
  Point d(100,100);
  Point e(1,1);
  Boite o = Boite(a);
  o.affiche();
  o.ajouterPoint(c);
  o.affiche();
  o.interieur(d);
  o.interieur(e);
  o.interieur(a);
  
}

