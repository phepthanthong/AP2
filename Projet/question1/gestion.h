// gestion.h //
#include "zoo.h"
#include "Liste.h"
#include "cage.h"
#include "alimentation.h"
typedef Liste <Cage>::TIterator TAdrCage;
typedef Liste <Animal>::TIterator TAdrAni;

// == Services pour la Liste de Cage ==
// Un Zoo contient une Liste de Cage
void saisirCage( Liste <Cage> &l );
void affiInfoCage( Liste <Cage> &l );

// == Services pour la Liste d'Animaux ==
// Un cage contient une Liste d'Animaux
void saisirAni( Liste <Animal> &a );
void affiInfoAni( Liste <Animal> &a );
void faireParler( Liste <Animal> &a );
void faireManger( Liste <Animal> &a, Alimentation aliment);
// question 1
void faireManger( Liste <Animal> &listAnimal, Cage &cage );
void faireParler( Liste <Animal> &listAnimal, Cage &cage );
