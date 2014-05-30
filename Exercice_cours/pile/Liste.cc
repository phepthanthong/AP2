/* -- Inverser une Liste ---
   inserer en tete et supprimer le apres
*/
void afficheContenu (Liste <int> l)
{
  Tadresse adr;
  adr = l.adressePremier()
    while (!adr.null())
      {
	cout << l.valeurElement(adr) << endl;
	Adr = l.adresseSuivant(adr);
      }
}
// 5 18 22 4 7
void mystere(Liste <int> &l)
{
  Tadresse adr,suiv;
  adr = l.adressePremier();
  if (!adr.null())
    {
      suiv = l.adresseSuivant(adr);
      while (!suiv.null())
	{
	  l.insererEnTete(l.valeurElement(suiv));
	  l.supprimerApres(adr);
	  suiv = l.adresseSuivant(adr);
	}
    }
}
// ======================================= 
// Rechercher un element dans une Liste

TAdresse recherche (Liste <int> l ,TInfo elem)
{ // retourne l'adresse de elem dans la liste l
  // NULL si elem n'est pas present
  TAdresse adr = l.adressePremier();
  bool trouve = false;

  while (!trouve && ! adr.null()) // adr != NULL
    {
      if (l.valeurElement(adr) == elem)
	trouve = true;
      else adr = l.adresseSuivant(adr);
    }
  return adr;
}

// =======================================
// Insertion d'un element en fin de la Liste
void insereElementFin (Liste <int> &l, Tinfo elem)
{
  TAdresse adr, adrPrec;
  adr = l.adressePremier();
  while (!adr.null())
    {
      adrPrec = adr ;
      adr = l.adresseSuivant(adr);
    }
  if (adrPrec.null()) // l ne contient pas d'element
    l.insererEntete(elem);
  else 
    l.insererApres(elem,adrPrec);
}

//========================================
// Concatenation

void concatener(Liste <int> l1, Liste <int> l2, Liste <int> &l3)
{
  Tinfo fictif;
  Tadresse adr, suiv;

  // preparation de la liste l3
  l3.insererEntete(fictif); //eviter les tests pour "insererEntete"
  suiv = l3.adressePremier();



    // recopie de la liste l2
    adr = l2.adressePremier();
  while (!adr.null())
    {
      l3.insererApres(l2.valeurElement(adr)suiv);

    }
}
//  void copieListe (Liste <int> listeAncien, Liste <int> &ListeNouvelle)
/* pour la specification, et pour ecrire les fonctions generiques applique dans bcp situations */

// =======================================
// TAD Implementation
/* implementer une Pile avec un Tableau de taille variable */
