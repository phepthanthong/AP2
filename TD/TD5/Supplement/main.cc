#include <iostream>
#include <cstdlib>

#include "Screen.h"
#include "Point.h"

#include "Shape.h"
#include "Line.h"
#include "LineBrok.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

#include "util.h"
#include "DessinShapes.h"

void
menu()
{
  cout << "****************************************************" << endl
       << "*   1. Ligne          3. Rectangle   5. Triangle   *" << endl
       << "*   2. Ligne cassee   4. Carre       6. Cercle     *" << endl
       << "*                                                  *" << endl
       << "*   c. Colorer tout       x. Colorer une           *" << endl
       << "*   d. Deplacer tout      y. Deplacer une          *" << endl
       << "*   e. Effacer tout       z. Effacer une           *" << endl
       << "*                                                  *" << endl
       << "*   r. Modifier Rayon                q. Quitter    *" << endl
       << "****************************************************" << endl
       << endl;
}

char
saisieChoix()
{
  char choix;
  do {
    cin >> choix;
  } while(    !( choix>='1' && choix<='6') 
           && !( choix>='c' && choix<='e')
           && !( choix>='x' && choix<='z')
		   && choix !='r'
		   && choix !='q' );
  return choix;
}

int
main()
{
  Screen ecran;

  // Pour stocker et gerer toutes les formes
//  DessinShapes dessin;

// POUR FACILITER LES TESTS
//dessin.addShape( new Line(black, Point(4,5), Point(15,22)) );  
//dessin.addShape( new LineBrok( red, Point(20,25), Point(30,30), Point(27,15) ) );
//dessin.addShape( new Rectangle( green, Point(20,20), Point(10,10) ) );
//dessin.addShape( new Circle( blue, Point(40,30), 5 ) );
//dessin.refresh( ecran );


  char choix;
  do {
    menu();
    choix = saisieChoix();
    switch( choix ) {
      case '1':
        // A FAIRE
        break;
      case '2':
        // A FAIRE
        break;
      case '3':
        // A FAIRE
        break;
      case '4':
        // A FAIRE
        break;
      case '5':
        // A FAIRE
        break;
      case '6':
        // A FAIRE
        break;
      case 'c':
        // A FAIRE
        break;
      case 'd':
        // A FAIRE
        break;
      case 'e':
        // A FAIRE
        break;
      case 'x':
        // A FAIRE
        break;
      case 'y':
        // A FAIRE
        break;
      case 'z':
        // A FAIRE
        break;
      case 'r':
        // A FAIRE
        break;
      case 'q':
	    cout << "Bye" << endl;
        break;
	}
  } while( choix !='q' );
  
  return EXIT_SUCCESS;
}

