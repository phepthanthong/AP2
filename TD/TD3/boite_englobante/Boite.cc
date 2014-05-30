// Fichier Boite.cc
#include "Boite.h"
#include <iostream>
#include "Point.h"
using namespace std;
Boite::Boite(){
  cout << "constructeur par defaut " << endl;
}
Boite::Boite(const Point &p):my_bas_gauche(p),my_haut_droite(p) {
  my_nb_alloues = 5;
  my_points = new Point [my_nb_alloues];
  my_points[0]=p;
  my_nb_points = 1;
}
Boite::~Boite(){
  cout << "Boite: destructeur" << endl;
  delete [] my_points;
}
void Boite::affiche()const {
  //in ra man hinh: my_bas_gauche,my_haut_droite,
  //tap hop cac diem cua Boite, nb_alloues, nb_points
  cout << "fonction affiche" <<endl;
  cout << "coordonnees my_bas_gauche " << my_bas_gauche << endl;
  cout << "coordonnees my_haut_droite " << my_haut_droite << endl;
  cout << "nb_alloues " << my_nb_alloues << endl;
  cout << "nb_points " << my_nb_points << endl;
}
void Boite::ajouterPoint(const Point &p){
  cout << "fonction ajouterPoint" << endl;
  /*----Fonction ajouter Point ----*/
  if (my_nb_points <= my_nb_alloues) //neu so diem hien co nho hon so diem alloues dans la memoire, on peut ajouter un nouveau Point
    {
      my_points[my_nb_points]=p;
      my_nb_points++;
      cout << "ajoute reussi" << endl;
    }
  else //Neu so diem hien co lon hon so diem alloues ds la memoire
    {  //phai mo rong cai tableau chua cac Point nay
      Point *my_points_new;
      my_nb_alloues = my_nb_alloues*2;
      my_points_new = new Point[my_nb_alloues];
      for (int i = 0; i<my_nb_points; i++)
	{
	  my_points_new[i]=my_points[i];
	}
      my_points_new[my_nb_points]=p;
      my_points=my_points_new;
    }
  /*---Verifier l'appartenance d'un point a la Boite----*/
  if ( this->interieur(p) == false ) //neu 1 diem k thuoc vao Boite
    {                                //phai agrandir cai Boite de chua het cac diem
      for (int i=0; i<my_nb_points; i++)
     {
       if ( my_points[i].getX() < my_bas_gauche.getX() )
	 my_bas_gauche.setX( my_points[i].getX() );
       if ( my_points[i].getY() < my_bas_gauche.getY() )
	 my_bas_gauche.setY(  my_points[i].getY() );
       if ( my_points[i].getX() > my_haut_droite.getX() )
	 my_haut_droite.setX( my_points[i].getX() );
       if ( my_points[i].getY() > my_haut_droite.getY() )
	 my_haut_droite.setY( my_points[i].getY() );
     }  
    }
      
}
  /*     
cout << "fonction agrandir le tableau des Points" << endl;
  if (p.getX() > my_haut_droite.getX() && 
      p.getY() > my_haut_droite.getY())
    {
      my_haut_droite.getX() = p.getX();
      my_haut_droite.getY() = p.getY();
    }
  if (p.getX() < my_bas_gauche.getX() && 
      p.getY() < my_bas_gauche.getY())
    {
      my_bas_gauche.getX() = p.getX();
      my_bas_gauche.getY() = p.getY();
    }
}
  */
/*
 --agrandir la boite---
 -tinh lai gauche, droite
 -ss p1 voi g,d
 -neu p1.x>d.x -> d.x=p1.x
 -neu p1.y>d.y -> d.y=p1.y
*/
bool Boite::interieur(const Point &p)const{
  cout << "fonction verifiant l'appartenance d'un point a la Boite" << endl;
  if (p.getX() >= my_bas_gauche.getX() &&
      p.getX() <= my_haut_droite.getX() &&
      p.getY() >= my_bas_gauche.getY() &&
      p.getY() <= my_haut_droite.getY()){
    cout << "ce Point appartient a la Boite" << endl;
    return true;
  }
  else 
    {
      cout << "ce Point n'appartient pas a la Boite" << endl;
      return false;
    }
}
void Boite::agrandir(){
  /*cout << "fonction agrandir le tableau des Points" << endl;
  if (p.getX() > my_haut_droite.getX() && 
      p.getY() > my_haut_droite.getY())
    {
      my_haut_droite.getX() = p.getX();
      my_haut_droite.getY() = p.getY();
    }
  if (p.getX() < my_bas_gauche.getX() && 
      p.getY() < my_bas_gauche.getY())
    {
      my_bas_gauche.getX() = p.getX();
      my_bas_gauche.getY() = p.getY();
    }
  */
  Point *my_points_new;
  my_nb_alloues = my_nb_alloues*2;
  my_points_new = new Point[my_nb_alloues];
  for (int i = 0; i<my_nb_points; i++)
	{
	  my_points_new[i]=my_points[i];
	}
  //my_points_new[my_nb_points]=p;
  my_points=my_points_new;
}

