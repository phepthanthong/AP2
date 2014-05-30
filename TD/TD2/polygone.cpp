#include <iostream>
#include "polygone.h"
using namespace std;
Polygone::Polygone(){
  my_taille = 0;
  my_tab = new Point; 
}
void Polygone::saisie(){
  int a;
  cout << "saisie le nombre de sommet: " << endl;
  cin >> a;
  my_taille = a;
  cout << "nhap toa do dinh" << endl;
  my_tab = new Point[my_taille];
  float b;
  for (int i=0; i<my_taille; i++)
    {         
      cout << "nhap toa do diem " << i+1 << endl;
      cin >> b;
      my_tab[i].setX(b);
      cin >> b;      
      my_tab[i].setY(b);
      cout << my_tab[i].toString() << endl;
    }
}
Polygone::~Polygone() {
  if (my_tab != NULL)
    delete [] my_tab;
}
string Polygone::toString(){
  ostringstream hieu;
  for (int i=0; i<my_taille; i++)
    {
      hieu <<"toa do diem "<< i+1<<":" << my_tab[i].toString() << endl;
    }
  return hieu.str();
}
void Polygone::deplace(float dx, float dy){
  cout << "Fonction qui deplace un polygone" << endl;
  float x_initial, y_initial; // toa do diem ban dau
  for (int i=0; i<my_taille; i++)
    {
      x_initial = my_tab[i].getX();
      y_initial = my_tab[i].getY();
      my_tab[i].setX(x_initial + dx);
      my_tab[i].setY(y_initial + dy);
    }
  cout << "deplacement reussi" <<  endl;
}
void Polygone::ajoutSommet(Point p){
}
float Polygone::perimetre(){
  cout << "fonction qui calcule le perimetre du polygone" << endl;
  for (int i=0; i<my_taille-1; i++){
    my_tab[i].getX()
      }
}

/* ghi file
include <iostream>
include <sstream>
include <fstream>
...
fstream f;
f.open(file.data(),ios:out) //ios:in
f.close
*/
