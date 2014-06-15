// gestion.cc //
#include "gestion.h"
using namespace std;

/* ====== Services pour la Liste de Cage ====== */

void saisirCage(Liste <Cage> &l) // Hypothese: Liste entree est vide
{
  int nb;
  do 
    {
      cout << "Entrer le nombre de cage: " << endl;
      cin >> nb;
    } while (nb<=0);
  Cage temp;
  l.insererEnTete(temp);
  TAdrCage adr = l.adressePremier();
  
  while ( nb>0 )
    {
      temp.saisieCage();
      l.insererApres(temp,adr);
      nb--;
      adr = l.adresseSuivant(adr);
    }
  l.supprimerEnTete();
}
void affiInfoCage( Liste <Cage> &l)
{
  TAdrCage adr;
  adr = l.adressePremier();
  cout << endl << "AFFICHAGE DE LA LISTE" << endl;
  while (adr != l.null())
      {
	cout << l.valeurElement(adr) << endl;
	adr = l.adresseSuivant(adr);
      }
  cout << endl << "FIN D'AFFICHAGE DE LA LISTE" << endl;
}

/* ====== Services pour la Liste d'Animaux ====== */

void saisirAni(Liste <Animal> &a) // Hypothese: Liste entree est vide
{
  int nb;
  do 
    {
      cout << "Entrer le nombre d'animaux: " << endl;
      cin >> nb;
    } while (nb<=0);
  Animal temp;
  a.insererEnTete(temp);
  TAdrAni adr = a.adressePremier();
  
  while ( nb>0 )
    {
      temp.saisieAnimal();
      a.insererApres(temp,adr);
      nb--;
      adr = a.adresseSuivant(adr);
    }
  a.supprimerEnTete();
}
void affiInfoAni( Liste <Animal> &a)
{
  TAdrAni adr;
  adr = a.adressePremier();
  cout << endl << "AFFICHAGE DE LA LISTE" << endl;
  while (adr != a.null())
      {
	cout << a.valeurElement(adr) << endl;
	adr = a.adresseSuivant(adr);
      }
  cout << endl << "FIN D'AFFICHAGE DE LA LISTE" << endl;
}
