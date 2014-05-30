// fichier Peinture.h

#ifndef PEINTURE_H
#define PEINTURE_H

#include <string>
#include "Date.h"
#include "Plastique.h" // declarons la classe de base

using namespace std;

class Peinture : public Plastique {   // heritage ...
public:
   Peinture( string auteur, string titre, string sty,
             int j, int m, int a, int val,
             string possesseur, int jp, int mp, int ap,
	     string support, string matiere);
   ~Peinture();
   string toString() const;// renseignons nous sur la peinture...
   
   void setNouveauPoss(string poss);
   string getNouveauPoss();
   //void getNouveauPoss( string &poss ); --facon 2--
   void setNouvelleDate(int j,int m, int a);
   //Date getNouvelleDate();
   //Date getNouvelleDate(); //--facon 2--

private:                   // ajoutons de nouveaux elements
   string my_possesseur;
   string leSupport;
   string laMatiere;
   Date my_date_acquis;  // date d'acquisition
};

#endif // #ifndef PEINTURE_H

