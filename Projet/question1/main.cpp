#include <iostream>
#include <string>
#include "zoo.h"
#include "employe.h"
#include "ouvrier.h"
using namespace std;

int main()
{
  Zoo a;
  a.afficher();
  Zoo b("hieu","ndc",123456789);
  b.afficher();

  Employe *c = new Ouvrier();
  c->jeSuis();
  Employe *d = new Ouvrier("Lam");
  d->jeSuis();
  
}
