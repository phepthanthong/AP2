#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date {
 private:
  int my_jour;
  int my_mois;
  int my_annee;
 public:
  Date();
  Date(int j, int m, int a);
  int getJour()const;
  int getMois()const;
  int getAnnee()const;
  void setDate(int jour, int mois, int annee);

  bool operator <= (const Date & autreDate)const;
  bool operator >= (const Date & autreDate)const;
  bool operator == (const Date & autreDate)const;

  void afficher();

};
#endif
