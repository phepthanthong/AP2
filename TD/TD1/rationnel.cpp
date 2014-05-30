#include "rationnel.h"
#include "util.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
rationnel::rationnel(){
  my_num = 0 ;
  my_deno = 0;
}
rationnel::rationnel(int a, int b){
  my_num = a;
  my_deno = b;
}
void rationnel::affiche(){
  cout << "le resultat est " << my_num << "/" << my_deno << endl;
}
void rationnel::setNum(int a){
  my_num = a;
}
void rationnel::setDeno(int b){
  my_deno = b;
}
void rationnel::inverse(){
  cout << "le resultat inverse est " << my_deno << "/" << my_num << endl;
}
void rationnel::inverse(rationnel *inv){
  inv->my_num = my_deno;
  inv->my_deno = my_num;
}
void rationnel::test(rationnel b){
  if(my_num*b.my_deno == my_deno*b.my_num)
    cout << "2 rationnels sont egaux" <<endl;
  else
    cout << "2 rationnel ne sont pas egaux"<<endl;
}
void rationnel::add(const rationnel & autre, rationnel & somme)const
{
  if (my_deno == autre.my_deno)
    somme.my_num = my_num + autre.my_num;
  else {
    somme.my_num = my_num*autre.my_deno + my_deno*autre.my_num;
    somme.my_deno = my_deno * autre.my_deno;
  }
}
void rationnel::soustraction(const rationnel & autre, rationnel & difference)const
{
  if (my_deno == autre.my_deno)
    difference.my_num = my_num - autre.my_num;
  else {
    difference.my_num = my_num*autre.my_deno - my_deno*autre.my_num;
    difference.my_deno = my_deno * autre.my_deno;
  }
}
void rationnel::multiplier(const rationnel & autre, rationnel & produit)const
{
  produit.my_num = my_num * autre.my_num;
  produit.my_deno = my_deno * autre.my_deno;
}
void rationnel::diviser(const rationnel & autre, rationnel & quotient)const
{
  quotient.my_num = my_num * autre.my_deno;
  quotient.my_deno = my_deno * autre.my_num;
}
void rationnel::reduit(rationnel *r){
  Pgcd k(my_num,my_deno);
  
}
/*
string rationnel::intToString(int x){
  ostringstream oss;
  oss << x;
  string s = oss.str();
  return s;
}
void rationnel::ToString(){
  my_num = intToString(my_num);
  my_deno = intToString(my_deno);
  cout << my_num << "/" << my_deno << endl;
}
*/
