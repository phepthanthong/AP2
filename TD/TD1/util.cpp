#include "util.h"
#include <iostream>
using namespace std;
Pgcd::Pgcd(){
  my_num = my_deno = 0;
}
Pgcd::Pgcd(int numerateur, int denominateur){
  my_num = numerateur;
  my_deno = denominateur;
}
Pgcd::~Pgcd(){
  cout << "da huy" << endl;  
}
void Pgcd::setNum(int num){
  my_num = num;
}
void Pgcd::setDeno(int deno){
  my_deno = deno;
}
int Pgcd::resultat(){
  while (my_num != my_deno)
    {
      if (my_num > my_deno)
	my_num -= my_deno;
      else 
	my_deno -= my_num;
    }
  return my_num;
}
