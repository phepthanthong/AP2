// Fichier Cercle.h

#ifndef __CERCLE__
#define __CERCLE__

#include <sstream>
#include <string>
// Inclusion de l'entete "Point.h" car utilise ci-dessous.
#include "Point.h"

using namespace std;

class Cercle { 
  private :
    Point my_centre;
    float my_rayon;
  public :
    Cercle();                                   // constructeur par defaut
    ~Cercle();                                  // destructeur
    Cercle( float r );                          // constructeur rayon
    Cercle( float r, float x, float y );        // constructeur rayon + x + y
    Cercle( float r, const Point & p );         // constructeur rayon + point
    string toString() const;
    // ... a completer par vos soins.
};

ostream& operator<<(ostream& out, const Cercle& c);
#endif

