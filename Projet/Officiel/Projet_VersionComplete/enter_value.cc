#include "enter_value.h"

using namespace std;

void enter_value( int &number)
{  
  number =0;
  do{

    scanf("%d", &number);
    if (number == 0) cout << "Nhap sai, vui long nhap lai: ";
    cin.ignore();
  }while (number == 0);
}
