#ifndef DATE_H
#define DATE_H

class Date {
 private :
  int my_jour;
  int my_mois;
  int my_annee;
  
 public :
  Date();
  Date(int j, int m, int a);
  Date(const Date & d);

  int getJour() const;
  int getMois() const;
  int getAnnee() const;

  void setJour(int j);
  void setMois(int m);
  void setAnnee(int a);


  bool operator<=(const Date & autreDate) const;
  bool operator>=(const Date & autreDate) const;
  bool operator==(const Date & autreDate) const;

  void lendemain();
  int intervalle(const Date & autreDate);
};

#endif
