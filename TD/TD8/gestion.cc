// gestion.cc //
#include "gestion.h"
using namespace std;
void saisir(Liste <Etudiant> &l) // Hypothese: Liste entree est vide
{
  int nb;
  do 
    {
      cout << "Entrer le nombre d'etudiant: " << endl;
      cin >> nb;
    } while (nb<=0);
  Etudiant temp;
  l.insererEnTete(temp);
  TAdresse adr = l.adressePremier();
  
  while ( nb>0 )
    {
      temp.saisie();
      l.insererApres(temp,adr);
      nb--;
      adr = l.adresseSuivant(adr);
    }
  l.supprimerEnTete();
}

void afficher( Liste <Etudiant> &l)
{
  TAdresse adr;
  adr = l.adressePremier();
  cout << "AFFICHAGE DE LA LISTE" << endl;
  while (adr != l.null())
      {
	cout << l.valeurElement(adr) << endl;
	adr = l.adresseSuivant(adr);
      }
  cout << "FIN D'AFFICHAGE DE LA LISTE" << endl;
}

void renvoieRang( Liste <Etudiant> &l, string nom)
{
  TAdresse adr;
  adr = l.adressePremier();
  int comp=0;
  while ( adr != l.null() )
    {
      comp++;
      if ( l.valeurElement(adr).nom() == nom)
	{
	  cout << "DA TIM THAY: TEN NAM O VI TRI SO " << comp << endl;
	  break;
	}
      else 
	cout << "KHONG TON TAI TEN NAY " << endl;
      adr = l.adresseSuivant(adr);
    }
}
	
float moyenne(Liste <Etudiant> &l)
{
  TAdresse adr;
  adr = l.adressePremier();
  float somme = 0;
  int comp = 0;
  while ( adr != l.null() )
    {
      comp++;
      somme = somme + l.valeurElement(adr).note();
      adr = l.adresseSuivant(adr);
    }
  cout << "LA SOMME DES NOTES DES ETUDIANTS = " << somme << endl;
  float moyenne;
  return (moyenne = somme / comp);
}

void ajoutBonnePlace( Liste <Etudiant> &l )
{
  TAdresse adr_pre, adr_suiv;
  adr_pre = l.adressePremier();
  adr_suiv = l.adresseSuivant(adr_pre);
  cout << "ENTRER UN NOUVEAU ETUDIANT" << endl;
  Etudiant e;
  e.saisie();
  /*while ( adr_suiv != l.null() )
    {
      //adr_suiv = l.adresseSuivant(adr_pre);
      if ( l.valeurElement(adr_pre).note() < e.note() &&
	   l.valeurElement(adr_suiv).note() > e.note() )
	{
	  l.insererApres(e,adr_pre);
	  break;
	}
      else
	if ( l.valeurElement(adr_pre).note() > e.note() )
	  {
	    l.insererEnTete(e);
	    break;
	  }
      adr_pre = l.adresseSuivant(adr_pre);
      adr_suiv = l.adresseSuivant(adr_suiv);   
    }
    if ( l.valeurElement(adr_pre).note() < e.note() &&
	 adr_suiv == l.null() )
      {
	l.insererApres(e,adr_pre);
	break;
      }
  adr_pre = l.adresseSuivant(adr_pre);
  */
  if (adr_suiv == l.null())
    if (e.note() >= l.valeurElement(adr_pre).note())
      l.insererApres(e,adr_pre);
    else l.insererEnTete(e);
  else
    {
      while ( adr_suiv != l.null())
	{
	  if (e.note() < l.valeurElement(adr_pre).note())
	    {
	      l.insererEnTete(e);
	      break;
	    }
	  else if (e.note() >= l.valeurElement(adr_pre).note() &&
		   e.note() < l.valeurElement(adr_suiv).note())
	    {
	      l.insererApres(e,adr_pre);
	      break;
	    }
	  adr_pre = l.adresseSuivant(adr_pre);
	  adr_suiv = l.adresseSuivant(adr_suiv);
	}
      if (adr_suiv == l.null())
	l.insererApres(e,adr_pre);
    }
}


bool verifieTrie( Liste <Etudiant> &l )
{
  cout << "FONCTION VERIFIE SI UNE LISTE EST TRIEE" << endl;
  TAdresse adr_pre, adr_suiv;
  adr_pre = l.adressePremier();
  adr_suiv = l.adresseSuivant(adr_pre);
  bool temp = true;
  while ( adr_suiv != l.null() )
    {
      //adr_suiv = l.adresseSuivant(adr_pre);
      if ( l.valeurElement(adr_pre).note() > l.valeurElement(adr_suiv).note() )
	{
	  temp = false;
	  break;
	}
      adr_pre = l.adresseSuivant(adr_pre);
      adr_suiv = l.adresseSuivant(adr_pre);
    }
  /*if (temp == true)
    cout << "LISTE EST TRIEE" << endl;
  else
    cout << "LISTE N'EST PAS TRIEE" << endl;
  */
  return temp;
}

void fusion( Liste <Etudiant> &l1, Liste <Etudiant> & l2)
{
  TAdresse adr_pre, adr_suiv, adr2;
  adr_pre = l1.adressePremier();
  adr2 = l2.adressePremier();
  
  while ( adr_pre != l1.null()&& adr2 != l2.null() )
    {
      if ( adr_suiv == l1.null() && adr2 != l2.null() )
	{
	  l1.insererApres(l2.valeurElement(adr2),adr_pre);
	  adr2 = l2.adresseSuivant(adr2);
	  cout << "da them vao thanh cong" << endl;
	  continue;
	}
      adr_suiv = l1.adresseSuivant(adr_pre);
      if ( l1.valeurElement(adr_pre).note() < l2.valeurElement(adr2).note() &&
	   l1.valeurElement(adr_suiv).note() > l2.valeurElement(adr2).note() )
	{
	  l1.insererApres(l2.valeurElement(adr2),adr_pre);
	  adr2 = l2.adresseSuivant(adr2);
	  cout << "da them vao thanh cong" << endl;
	}
      adr_pre = l1.adresseSuivant(adr_pre);
     
    }
}
