#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
#include "Liste.h"
//#include "cage.h"
#include "gestion.h"

#include "zoo.h"
/*#include "employe.h"
#include "ouvrier.h"
#include "Date.h"
#include "animal.h"
#include "carnivore.h"
#include "herbivore.h"
#include "lion.h"
#include "tigre.h"
#include "elephant.h"
*/
#include "alimentation.h"
#include "viande.h"
#include "legume.h"

using namespace std;

typedef Liste <Animal>::TIterator TAdrAni;
typedef Liste <Cage>::TIterator TAdrCage;
//typedef Liste <Viande>::TIterator TAdrVian;

int main()
{
  Zoo a("Foret africane","415 rue Jean-Michel",83254);
  cout << a << endl;
  
  list <Viande> viande;
  afficherListeViande(viande);
  Viande heo("heo",2000,500);
  ajoutNouveauViande(heo,viande);
  afficherListeViande(viande);
  Viande ga("ga",1000,557);
  ajoutNouveauViande(ga,viande);
  afficherListeViande(viande);
  ajoutViandeExiste(1,300,viande);
  exportViandeExiste(2,200,viande);
  afficherListeViande(viande);

  list <Legume> legume;
  afficherListeLegume(legume);
  Legume carotte("carotte",100,500);
  ajoutNouveauLegume(carotte,legume);
  afficherListeLegume(legume);
  Legume salade("salade",200,557);
  ajoutNouveauLegume(carotte,legume);
  afficherListeLegume(legume);
  ajoutLegumeExiste(1,300,legume);
  exportLegumeExiste(2,200,legume);
  afficherListeLegume(legume);

  /*Liste <Animal> ani;
  saisirAni(ani);
  faireParler(ani);
  a.compterAnimaux(ani); */
    
  /*
  Zoo a;
  a.afficher();
  Zoo b("hieu","ndc",123456789);
  b.afficher();

  Employe *c = new Ouvrier();
  c->jeSuis();
  Employe *d = new Ouvrier("Lam");
  d->jeSuis();
  
  Cage f("moyenne");
  f.afficher();

  Animal *g = new Lion();
  g->afficherA();
  Animal *h = new Lion("Baby");
  h->afficherA();
  Animal *i = new Tigre();
  i->afficherA();
  Animal *k = new Tigre("Justine");
  k->afficherA();
  Animal *p = new Elephant();
  p->afficherA();
  Animal *q = new Elephant("Micheal");
  q->afficherA();

  Alimentation *l = new Viande();
  l->affiAliment();
  Alimentation *m = new Viande("Boeuf",150);
  m->affiAliment();
  Alimentation *n = new Legume();
  n->affiAliment();
  Alimentation *o = new Legume("Salade",20);
  o->affiAliment();
  */

  
 }
