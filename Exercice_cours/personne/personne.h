#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>
using namespace std;
class Personne {
 private:
  string my_nom;
  string my_prenom;
  int my_age;

 public:
  //constructeur
  Personne();
  Personne(string nom, string prenom, int age);
  Personne(const Personne &p);
  //~Personne();
  //methode ou fonctions membres
  void initialise(string nom,
		  string prenom,
		  int age);
  //accesseur en ecriture
  void setAge(int age);
  void setPrenom(string prenom);
  void setNom(string nom);
  //accesseur en lecture
  int getAge();
  string getPrenom();
  void quiSuisJe();
  void anniversaire();

};
#endif
