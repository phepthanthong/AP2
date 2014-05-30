#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class date {
 private:
  int *jour;
  int *mois;
  int *annee;
 public:
  date();
  date(int j, int m, int a);
  date(const date &d);
  ~date();
  void setDate(int j, int m, int a);
  void afficheDate();
  int getJour();
  int getMois();
  int getAnnee();
}
