#include "complexe.h"
#include <iostream>
using namespace std;
Complexe::Complexe(){
  my_reel = my_ima = 0;
}
Complexe::Complexe(float a, float b){
  my_reel = a;
  my_ima = b;
}
void Complexe::setValeur(float reel, float ima){
  my_reel = reel;
  my_ima = ima;
}
float Complexe::getValeur(){
  cout << "mon nombre complexe est " << my_reel << " + " << my_ima << "i " << endl;
}
void Complexe::add(const Complexe &autre, Complexe &somme)const{
  somme.my_reel = my_reel + autre.my_reel;
  somme.my_ima = my_ima + autre.my_ima;
}
void Complexe::multip(const Complexe &autre, Complexe & produit)const{
  produit.my_reel = my_reel*autre.my_reel - my_ima*autre.my_ima;
  produit.my_ima = my_reel*autre.my_ima + my_ima*autre.my_reel;
}
/*Complexe Complexe::operator+(const Complexe &n){
  float a=my_reel; float b=my_ima;
  float c=n.my_reel; float d=n.my_ima;
  float new_my_reel=a+c; float new_my_ima=b+d;
  return Complexe(new_my_reel,new_my_ima);
}
*/
