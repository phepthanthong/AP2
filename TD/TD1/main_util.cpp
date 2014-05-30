#include "util.h"
#include <iostream>
using namespace std;
int main(){
  Pgcd a;
  a.setNum(5);
  a.setDeno(15);
  cout << "pgcd est: " << a.resultat() << endl;

  Pgcd b(5,15);
  cout << "pgcd est: " << a.resultat() << endl;
}
