#include "animal_lion.h"

Lion::Lion()
{
  numAnimal++;
  codeAnimal="A-C-";
  codeAnimal.append(static_cast<ostringstream*>( &(ostringstream() << numAnimal) )->str());
  type = "LION";
  quelType = loai_thu();
  malade="NULL";
}

Lion::~Lion(){}

void Lion::initialise()
{
  cout << endl;
  cout << "Ma so cua con su tu: " << codeAnimal << endl;
  cout << "Nhap ten cua con su tu: ";
  cin.ignore();
  getline(cin, nomAnimal);
  cout << "Chung loai: " << quelType << endl;
  cout << "la con: " << type << endl;
  cout << "Sa date de naissance: " ;
  getline(cin, dateNais);
}
