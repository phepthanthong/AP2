#include <iostream>
#include "employer.h"
using namespace std;
int main(){
  Employer a;
  Employer a2("hieu",1000);
  a2.getSalaire();
  a2.changerSalaire(2500);
  a2.getSalaire();
  
}

