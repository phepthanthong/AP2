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
void faireParler( Liste <Animal> &a )
{
  TAdrAni adr;
  int compteur = 0;
  adr = a.adressePremier();
  cout << endl << "FAIRE PARLER A TOUS LES ANIMAUX" << endl;
  while (adr != a.null())
    {
      compteur++;
      cout << "Animal numero " << compteur << " a parle" << endl;
      adr = a.adresseSuivant(adr);
    }
  cout << endl << "LA FONCTION A FAIT PARLER " << compteur << " ANIMAUX" << endl;
  cout << "FAIREPARLER: TERMINE" << endl;
}

//==========================================================
// ====== Liste Viande =======
void afficherListeViande( list <Viande> &viande )
{
  list<Viande>::iterator adr;
  if(viande.size()==0)
    cout << "LISTE VIDE CREEE: PAS DE VIANDE" << endl;
  else
  {
    cout << endl << "AFFICHER LA LISTE VIANDE" << endl;
    for(adr = viande.begin(); adr != viande.end(); adr++)
    {
      (*adr).affiAliment();
    }
  }
}

void ajoutNouveauViande( Viande nouveau, list <Viande> &viande )
{
  cout << endl << "AJOUT D'UN NOUVEL ALIMENT - TYPE: VIANDE " << endl;
  viande.push_back(nouveau);
  cout << "AJOUT TERMINE" << endl;
}
void ajoutViandeExiste( int position, float mass, list <Viande> &viande )
{
  cout << endl << "ACHAT D'UN NOUVEL ALIMENT - TYPE: VIANDE" << endl;
  list<Viande>::iterator adr;
   for(adr = viande.begin(); adr != viande.end(); adr++)
    {
      position--;
      if (position == 0)
	{
	  (*adr).stockerViande(mass);
	}
    }
}
void exportViandeExiste( int position, float mass, list <Viande> &viande )
{
  cout << endl << "DESTOCKAGE: VIANDE" << endl;
  list<Viande>::iterator adr;
  for(adr = viande.begin(); adr != viande.end(); adr++)
  
    {
      position--;
      if (position == 0)
	{
	  (*adr).destockerViande(mass);
	}
    }
}

//========================================================
// ====== Liste Legume ======
void afficherListeLegume( list <Legume> &legume)
{
  list<Legume>::iterator adr;
  if (legume.size() == 0)
    cout << "LISTE VIDE CREEE: PAS DE LEGUME" << endl;
  else
    {
      cout << "AFFICHER LA LISTE LEGUME" << endl;
      for (adr = legume.begin(); adr != legume.end(); adr++)
	(*adr).affiAliment();
    }
}
void ajoutNouveauLegume( Legume nouveau, list <Legume> &legume )
{
  cout << endl << "AJOUT D'UN NOUVEL ALIMENT - TYPE: LEGUME" << endl;
  legume.push_back(nouveau);
  cout << "AJOUT TERMINE" << endl;
}
void ajoutLegumeExiste( int position, float mass, list <Legume> &legume)
{
  cout << endl << "ACHAT D'UN NOUVEL ALIMENT - TYPE: LEGUME" << endl;
  list<Legume>::iterator adr;
  for (adr = legume.begin(); adr != legume.end(); adr++)
    {
      position--;
      if (position == 0)
	(*adr).stockerLegume(mass);
    }
}
void exportLegumeExiste( int position, float mass, list <Legume> &legume )
{
  cout << endl << "DESTOCKAGE: LEGUME" << endl;
  list <Legume>::iterator adr;
  for (adr = legume.begin(); adr != legume.end(); adr++)
    {
      position--;
      if (position == 0)
	(*adr).destockerLegume(mass);
    }
}
