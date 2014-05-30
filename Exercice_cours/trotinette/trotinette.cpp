#include "trotinette.h"
#include <iostream>
using namespace std;
Roue::Roue(){
  cout << "constructeur par defaut" <<endl;
  my_diametre = 0;
}
Roue::Roue(float diametre){
  cout << "constructeur avec parametre" << endl;
  my_diametre = diametre;
}
Roue::Roue(const Roue &r){
  cout << "constructeur par copie" << endl;
  my_diametre = r.my_diametre;
}
void Roue::setDiametre(float diametre){
  my_diametre = diametre;
}
float Roue::getDiametre()const{
  return my_diametre;
}
Roue::~Roue(){
  cout << "da huy" <<endl;
}
Trotinette::Trotinette(){
 cout << "constructeur par defaut" <<endl;
  my_roue_avant = Roue (0);
  my_roue_arriere = Roue (0);
}
Trotinette::Trotinette(float diametre_avant, float diametre_arriere){
cout << "constructeur avec parametre" << endl;
  my_roue_avant = Roue (diametre_avant);
  my_roue_arriere = Roue (diametre_arriere);
}
Trotinette::~Trotinette(){
cout << "da huy" <<endl;
}
void Trotinette::changerRoueAvant(Roue r){
  my_roue_avant = r;
}
void Trotinette::changerRoueArriere(Roue r){
  my_roue_arriere = r;
}
Roue Trotinette::getRoueAvant()const {
  return my_roue_avant;
}
Roue Trotinette::getRoueArriere()const {
  return my_roue_arriere;
}
