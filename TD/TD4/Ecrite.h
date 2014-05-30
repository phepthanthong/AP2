#ifndef ECRITE_H
#define ECRITE_H

#include <iostream>
#include <string>
#include "Oeuvre.h"
#include "Date.h"
#include "util.h"
using namespace std;

class Ecrite : public Oeuvre { 
 public:
  Ecrite(string auteur, string titre, string sty,
	 int j, int m, int a, int val,
	 string theme, string langue, int j_p, int m_p, int a_p
	 //hoac khai bao cach khac: Date date_publication
	 );
  ~Ecrite();
  string toString() const;
  Ecrite(const Ecrite &e);
 private:
  string laLangue;
  string leTheme;
  Date date_publication;
};
#endif
