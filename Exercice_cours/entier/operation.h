#ifndef ENTIER_H
#define ENTIER_H
class entier {
 private:
  int ope_a;
  int ope_b;
 public:
  entier(); //constructeur par defaut (sans parametre)
  //entier(int a, int b); //constructeur avec parametre
  void initialise ();
  void additionner();
  void soustraire();
  void multiplier();
  void diviser();
  entier operator+(const entier &p);
};
#endif
