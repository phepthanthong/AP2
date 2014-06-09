///////////////////////////////////////////////////////////////////////////////
// main.cc
///////////////////////////////////////////////////////////////////////////////

#include <cstdlib>
#include <iostream>
#include "Liste.h"
#include "Etudiant.h"
#include "gestion.h"

using namespace std;

// Raccourci pour TAdresse
typedef Liste <Etudiant>::TIterator TAdresse;
 
int main()
{  
  Liste <Etudiant> l, l2;
  saisir(l);
  saisir(l2);
  //afficher(l);
  if (verifieTrie(l))
    cout << "LISTE EST TRIEE" << endl;
  else
    cout << "LISTE N'EST PAS TRIEE" << endl;
  //renvoieRang(l,"hieu");
  //cout << "MOYENNE DE TOUS LES ETUDIANTS = " << moyenne(l) << endl;
  //ajoutBonnePlace(l);
  //afficher(l);
  fusion(l,l2);
  afficher(l);
  return EXIT_SUCCESS;
}

