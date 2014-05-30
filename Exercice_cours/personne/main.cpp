#include <iostream>
#include "personne.h"

using namespace std;
int main (){
  Personne pers;
  pers.initialise("Mai", "Trung hieu", 19);
  pers.quiSuisJe();
  pers.anniversaire();
  // pers.quisuisje();
  //pers.anniversaire();

  //CONSTRUCTEUR PAR DEFAUT
  Personne pers1;
  pers1.setNom("mai");
  pers1.setPrenom("trung hieu");
  pers1.setAge(19);
  cout << pers1.getPrenom();
  cout << pers1.getAge();

  //CONSTRUCTEUR PAR COPIE
  Personne pers2 (pers1);
  pers2.quiSuisJe();

  //CONSTRUCTEUR AVEC PARAMETRES
  Personne pers3 ("mai","trung hieu", 19);
  pers3.setAge(19);
  pers3.setNom("mai");
  pers3.setPrenom("trung hieu");
  pers3.getAge();
  pers3.getPrenom();
  
  Personne tabPers [3];
  tabPers[0]=pers1;
  tabPers[0].quiSuisJe();
  tabPers[1]=pers2;
  tabPers[1].quiSuisJe();
  tabPers[2]=pers3;
  tabPers[2].quiSuisJe();
  tabPers[0].setAge(41);
  tabPers[0].quiSuisJe();
  pers1.quiSuisJe();
  pers3.setAge(61);
  pers3.quiSuisJe();
  tabPers[2].quiSuisJe();

  Personne tabPersCopie [3]={pers1,pers2,pers3};
  tabPers[0].quiSuisJe();
  tabPers[1].quiSuisJe();
  tabPers[2].quiSuisJe();
  
}
