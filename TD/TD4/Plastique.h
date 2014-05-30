#ifndef PLASTIQUE_H
#define PLASTIQUE_H

#include <iostream>
#include <string>
#include "Oeuvre.h"
#include "Date.h"
#include "util.h"
using namespace std;

class Plastique : public Oeuvre {
 public:
  Plastique(string auteur, string titre, string sty,
	    int j, int m, int a, int val,
	    string possesseur, int jp, int mp, int ap);
  ~Plastique();
  Plastique(const Plastique &p);
  string toString() const;
 private:
  string lePossesseur;
  Date date_changer;
};
#endif
