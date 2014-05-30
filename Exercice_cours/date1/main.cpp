#include "Date.h"
#include <iostream>
using namespace std;
int main(){

  
  Date d(10,11,1979);
  Date t(d);
  cout << d.getJour() << "/" << d.getMois() << "/" << d.getAnnee()  << endl; 
  d.lendemain();
  cout << d.getJour() << "/" << d.getMois() << "/" << d.getAnnee() << endl;
  return 0;


}
