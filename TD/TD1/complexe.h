#ifndef COMPLEXE_H
#define COMPLEXE_H
#include <iostream>
using namespace std;
class Complexe {
 public:
  float my_reel;
  float my_ima;
 
  Complexe();
  Complexe(float a, float b);
  void setValeur(float reel, float ima);
  float getValeur();
  void add(const Complexe & autre, Complexe &somme)const;
  void multip(const Complexe & autre, Complexe &produit)const;
  //Complexe Complexe::operator+(const Complexe &n);
};
#endif
