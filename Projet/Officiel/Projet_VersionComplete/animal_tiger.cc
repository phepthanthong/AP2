#include "animal_tiger.h"

Tiger::Tiger()
{
  numAnimal++;
  codeAnimal="A-C-";
  codeAnimal.append(static_cast<ostringstream*>( &(ostringstream() << numAnimal) )->str());
  type = "TIGER";
  quelType = loai_thu();
  malade="NULL";
}

Tiger::~Tiger(){}

void Tiger::initialise()
{
  cout << endl;
  cout << "Ma so cua con Tiger: " << codeAnimal << endl;
  cout << "Nhap ten cua con Tiger: " ;
  cin.ignore();
  getline(cin, nomAnimal);
  cout << "Chung loai: " << quelType << endl;
  cout << "la con: " << type << endl;
  cout << "Sa date de naissance: " ;
  cin.ignore();
  getline(cin, dateNais);
}
