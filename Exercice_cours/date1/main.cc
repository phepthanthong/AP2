#include <iostream>
#include "date.h"
using namespace std;

int main()
{
  Date b;
  Date a(27,05,2014);
  a.afficher();
  a.setDate(28,05,2014);
  a.afficher();  
}
