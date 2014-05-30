#include "personne.h"
Personne::Personne(){
  my_nom = my_prenom = "";
  my_age = -1;
}
Personne::Personne(string nom, string prenom, int age){
  my_nom = my_prenom = "";
  my_age = -1;
}
Personne::Personne(const Personne &p){
  my_prenom = p.my_nom;
  my_nom = p.my_nom;
  my_age = p.my_age;
}

void Personne::initialise(string nom,
			  string prenom,
			  int age){
  my_nom = nom;
  my_prenom = prenom;
  my_age = age;
}

void Personne::quiSuisJe(){
  cout << "Je suis " << my_prenom << " " << my_nom << endl;
  cout << "j'ai " << my_age << " ans" << endl;
}

void Personne::anniversaire(){
  my_age += 1;
}

void Personne::setAge(int age){
  my_age = age;
}

void Personne::setPrenom(string prenom){
  my_prenom = prenom;
}

void Personne::setNom(string nom){
  my_nom = nom;
}
int Personne::getAge(){
  //cout << "j'ai " << my_age << "ans" <<endl;
  return my_age;
}
string Personne::getPrenom(){
  //cout << "je suis " << my_prenom <<endl;
  return my_prenom;
}

