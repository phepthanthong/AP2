#include "Pile.h"

using namespace std;

void affichePile(Pile<int> p){
  while (!p.pileVide()){
    int i = p.valeurSommet();
    p.depiler();
    cout << i << endl;
  }
}

int nbElement(Pile<int> p){//pas par référence car il faut dépiler pour regarder dans la pile et donc on fait une copie
  int cpt = 0;
  while (!p.pileVide()){
    cpt++;
    p.depiler();
  }
  return cpt;
}

void clonerPile(Pile<int> p, Pile<int> &p_clone){
  Pile<int> tmp;
  while (!p.pileVide()){
    int i = p.valeurSommet();
    p.depiler();
    tmp.empiler(i);
  }

  while (!tmp.pileVide()){
    int i = tmp.valeurSommet();
    tmp.depiler();
    p_clone.empiler(i);
  }
}

void inverserPile(Pile<int> &p){
  Pile<int> p_clone;
  clonerPile(p, p_clone);

  while (!p.pileVide())
    p.depiler();

  while (!p_clone.pileVide()){
    int i = p_clone.valeurSommet();
    p.empiler(i);
    p_clone.depiler();
  }
}

void supprimeNegatif(Pile<int> &p){
  Pile<int> p_clone;
  clonerPile(p, p_clone);
  inverserPile(p_clone);
  
  while (!p.pileVide())
    p.depiler();
  
  while (!p_clone.pileVide()){
    int i = p_clone.valeurSommet();
    if( i >= 0)
      p.empiler(i);
    p_clone.depiler();
  }
}

int main(){
  cout << "========================" << endl;
  cout << "Exercice 1" << endl;
  cout << "========================" << endl;
  Pile<int> p;//Pile<int> *p=new Pile<int>; p->empiler; delete p;
  p.empiler(1);
  p.empiler(2);
  p.empiler(3);
  p.empiler(4);
  p.empiler(5);
  p.empiler(6);
  affichePile(p);
  cout << "nb elements = " << nbElement(p) << endl;

  cout << "========================" << endl;
  cout << "Exercice 2" << endl;
  cout << "========================" << endl;
  Pile<int> p2;
  clonerPile(p, p2);
  affichePile(p2);

  cout << "========================" << endl;
  cout << "Exercice 3" << endl;
  cout << "========================" << endl;
  inverserPile(p);
  affichePile(p);

  cout << "========================" << endl;
  cout << "Exercice 4" << endl;
  cout << "========================" << endl;
  Pile<int> p3;
  p3.empiler(1);
  p3.empiler(-2);
  p3.empiler(3);
  p3.empiler(-4);
  p3.empiler(5);
  p3.empiler(-6);
  supprimeNegatif(p3);
  affichePile(p3);


  

  return 0;
}
