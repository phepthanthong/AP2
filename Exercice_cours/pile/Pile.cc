///////////////////////////////////////////////////////////////////////////////
// Pile.cc
// Version : ID 2008/03/28 modification class<==> typename + include .cxx dans .h
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

//- Constante de classe donnant la taille maximale possible pour la pile.
template<typename TInfo>
const int Pile<TInfo>::TAILLE_PILE = 100;

//- Constructeur par defaut.
template<typename TInfo>
Pile<TInfo>::Pile()
{
#ifdef TRACE_PILE
  cout << "[Pile<TInfo>::Pile()] cree une pile vide." << endl;
#endif // #ifdef TRACE_PILE
  m_sp = new TInfo[ TAILLE_PILE ];
  m_sommet = -1;
}

//- Constructeur de copie.
//- @param other la pile a recopier.
template<typename TInfo>
Pile<TInfo>::Pile( const Pile<TInfo> & pile)
{
#ifdef TRACE_PILE
  cout << "[Pile<TInfo>::Pile( const Pile<TInfo> & pile)]"
       << " copie " << pile.m_sommet+1 << " element(s)."
       << endl;
#endif // #ifdef TRACE_PILE
  int i;
  m_sp = new TInfo[ TAILLE_PILE ];
  m_sommet = pile.m_sommet;
  for ( i = 0; i <= m_sommet; i++ )
    m_sp[ i ] = pile.m_sp[ i ];
}

//- Destructeur.
template<typename TInfo>
Pile<TInfo>::~Pile()
{
#ifdef TRACE_PILE
  cout << "[Pile<TInfo>::~Pile()] detruit la pile." << endl;
#endif // #ifdef TRACE_PILE
  delete[] m_sp;
}

//- @return 'true' si la pile etait vide, 'false' sinon.
template<typename TInfo>
bool Pile<TInfo>::pileVide() const
{
#ifdef TRACE_PILE
  cout << "[Pile<TInfo>::pileVide()]";
  if ( m_sommet == -1 ) cout << " la pile est vide.";
  else cout << " la pile n'est pas vide.";
  cout << endl;
#endif // #ifdef TRACE_PILE
  return m_sommet == -1;
}

// @return la valeur situee sur le sommet de la pile.
template<typename TInfo>
TInfo Pile<TInfo>::valeurSommet() const
{
#ifdef TRACE_PILE
  cout << "[Pile<TInfo>::valeurSommet()]" 
       << " la valeur du sommet est " << m_sp[ m_sommet ] << "."
       << endl;
#endif // #ifdef TRACE_PILE
  return m_sp[ m_sommet ];
}

//- Empile la valeur [val] donnee en parametre.
//- @param val une valeur.
template<typename TInfo>
void Pile<TInfo>::empiler( const TInfo & val )
{
#ifdef TRACE_PILE
  cout << "[Pile<TInfo>::empiler()]"
       << " empile la valeur " << val << "."
       << endl;
#endif // #ifdef TRACE_PILE
  m_sp[ ++m_sommet ] = val;
}

//- Depile.
template<typename TInfo>
void Pile<TInfo>::depiler()
{
#ifdef TRACE_PILE
  cout << "[Pile<TInfo>::depiler()] depile." << endl;
#endif // #ifdef TRACE_PILE
  m_sommet--;
}
void affichePile(Pile <int> p) //passer p par valeur pour ne pas changer la Pile
{
  while (! p.pileVide())
    {
      int val = p.valeurSommet();
      cout << "la valeur du sommet = " << i << endl;
      p.depiler();
    }
  
}
void compterElement(Pile <int> k)
{
  while (! k.pileVide())
    {
      cpt++;
      k.depiler();
    }
  cout << "le nombre d'element = " << cpt << endl;
  // hoac viet kieu tra ve int => doi ten ham thanh int
  // va return cpt
}
void clonerPile(Pile <int> p, Pile <int> &p_clone)
{
  Pile <int> tmp;
  while (! p.pileVide())
    {
      int val = p.valeurSommet();
      tmp.empiler(val);
      p.depiler();
      // cach viet khac: 
      // tmp.empiler(p.valeurSommet())
      // p.depiler();
    }
  while (!tmp.pileVide())
    {
      int val = tmp.valeurSommet();
      p_clone.empiler(val);
      tmp.depiler();
      // p_clone.empiler(tmp.valeurSommet())
      // tmp.depiler();
    }
}
void inverserPile(Pile <int> &p)
{
  Pile <int> p_clone;
  clonerPile(p,p_clone);
  while (!p.pileVide())
    {
      p.depiler();
    }
  while (!p_clone.pileVide())
    {
      p.empiler(p_clone.valeurSommet());
      p_clone.depiler();
    }
}
void supprimerNeg(Pile <int> &p) // passage par reference pour modifier
{
  Pile <int> tmp;
  while (!p.pileVide())
    {
      if (p.valeurSommet() >= 0)
	{
	  tmp.empiler(p.valeurSommet());
	  p.depiler();
	}
    }
  while (!tmp.pileVide())
    {
      p.empiler(tmp.valeurSommet());
      tmp.depiler();
    }
}
/* === Corrige SupprimerNegatif ===
void SupprimerNegatif(Pile <int> &p)
{
Pile <int> p_clone;
clonerPile(p,p_clone);
inverser(p_clone);
while (!p.pileVide())
p.depiler();
while (!p_clone.pileVide())
{
int i = p_clone.valeurSommet();
if (i>=0)
p.empiler(i);
p_clone.depiler();
}
}
      


