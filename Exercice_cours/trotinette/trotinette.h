#ifndef TROTINETTE_H
#define TROTINETTE_H
#include <iostream>
using namespace std;
class Roue {
 private:
  float my_diametre;
 public:
  Roue();
  Roue(float diametre);
  Roue(const Roue &r);
  ~Roue();

  void setDiametre(float diametre);
  float getDiametre()const;
};

class Trotinette {
 private:
  Roue my_roue_avant;
  Roue my_roue_arriere;
 public:
  Trotinette();
  Trotinette(float diametre_avant, float diametre_arriere);
  ~Trotinette();

  void changerRoueAvant(Roue r);
  void changerRoueArriere(Roue r);
  Roue getRoueAvant()const;
  Roue getRoueArriere()const;
};
#endif
