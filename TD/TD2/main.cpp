#include "polygone.h"
#include "Point.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
int main(){
  Polygone a;
  a.saisie();
  a.toString();
  cout << a.toString() << endl;
  a.deplace(2,5);
  cout << a.toString() << endl;

}
