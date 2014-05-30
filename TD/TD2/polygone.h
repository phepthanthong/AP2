#ifndef POLYGONE_H
#define POLYGONE_H
#include <sstream>
#include <string>
#include "Point.h"
using namespace std;
class Polygone {
 private:
  Point * my_tab;
  int my_taille;
 public:
  Polygone();
  ~Polygone();
  void saisie();//yeu cau user nhap so luong dinh, toa
                //toa do cho tung dinh
  string toString();//xuat thong tin ve polygone:so luong dinh, toa do dinh
  void deplace(float dx, float dy);
  void ajoutSommet(Point p);
  float perimetre();
  
};
#endif
