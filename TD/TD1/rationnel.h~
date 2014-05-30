#ifndef RATIONNEL_H
#define RATIONNEL_H
#include <iostream>
using namespace std;
class Pgcd;
class rationnel {
 private:
  int my_num;
  int my_deno;
 public:
  rationnel();
  rationnel(int a, int b);
  void affiche();
  void setNum(int a);
  void setDeno(int b);
  void inverse();
  void inverse(rationnel *inv);
  void test(rationnel b);
  void add(const rationnel & autre, rationnel & somme)const;
  void soustraction(const rationnel & autre, rationnel & difference)const;
  void multiplier(const rationnel & autre, rationnel & produit)const;
  void diviser(const rationnel & autre, rationnel & quotient)const;
  void reduit(rationnel r);
  void ToString();
  string intToString(int x);
};

#endif
