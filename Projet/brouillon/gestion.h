// gestion.h //
#include <list>
#include "zoo.h"
#include "Liste.h"
#include "cage.h"
#include "alimentation.h"
#include "viande.h"
#include "legume.h"
typedef Liste <Cage>::TIterator TAdrCage;
typedef Liste <Animal>::TIterator TAdrAni;
//typedef Liste <Viande>::TIterator TAdrVian;
// == Services pour la Liste de Cage ==
// Un Zoo contient une Liste de Cage
void saisirCage( Liste <Cage> &l );
void affiInfoCage( Liste <Cage> &l );

// == Services pour la Liste d'Animaux ==
// Un cage contient une Liste d'Animaux
void saisirAni( Liste <Animal> &a );
void affiInfoAni( Liste <Animal> &a );

void faireParler( Liste <Animal> &a );
void faireManger( Liste <Animal> &a );
// question 1
void faireManger( Liste <Animal> &listAnimal, Cage &cage );
void faireParler( Liste <Animal> &listAnimal, Cage &cage );

//========================================================
// ====== Liste de Viande ======
void afficherListeViande( list <Viande> &viande );
void ajoutNouveauViande( Viande nouveau, list <Viande> &viande );
void ajoutViandeExiste( int position, float mass, list <Viande> &viande );
void exportViandeExiste( int position, float mass, list <Viande> &viande );

// ====== Liste de Legume ======
void afficherListeLegume( list <Legume> &legume );
void ajoutNouveauLegume( Legume nouveau, list <Legume> &legume );
void ajoutLegumeExiste( int position, float mass, list <Legume> &legume );
void exportLegumeExiste( int position, float mass, list <Legume> &legume );

// ====== Liste Animal ======
void afficherListeAnimal( Liste <Animal> &ani );
//void ajoutNouveauAnimal( Liste <Animal> &ani 
