#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
#include "Oeuvre.h"
#include "Date.h"
#include "Ecrite.h"
#include "util.h"
using namespace std;

class Livre : public Ecrite {
 public:
  Livre(string auteur, string titre, string sty,
	int j, int m, int a, int val,
	string theme, string langue, int j_p, int m_p, int a_p,
	string editeur, int j_l, int m_l, int a_l);
  ~Livre();
  Livre(const Livre &l);
  string toString() const;
 private:
  string editeur_l;
  Date date_edition;
};
#endif
