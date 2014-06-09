// gestion.h //
#include "Etudiant.h"
#include "Liste.h"

typedef Liste <Etudiant>::TIterator TAdresse;
// --- EX 36
void saisir( Liste<Etudiant> &l );
void afficher( Liste <Etudiant> &l );
void renvoieRang ( Liste <Etudiant> &l, string nom );
float moyenne( Liste <Etudiant> &l );

// --- EX 37
void ajoutBonnePlace( Liste <Etudiant> &l );
bool verifieTrie( Liste <Etudiant> &l);
void fusion( Liste <Etudiant> &l1, Liste <Etudiant> & l2);
