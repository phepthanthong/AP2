 #include "animal_elephant.h"

Elephant::Elephant()
{
  numAnimal++;
  codeAnimal="A-H-";
  codeAnimal.append(static_cast<ostringstream*>( &(ostringstream() << numAnimal) )->str());
  type = "ELEPHANT";
  quelType = loai_thu();
  malade="NULL";
}

Elephant::~Elephant(){}

void Elephant::initialise()
{
  cout << endl;
  cout << "Ma so cua con Voi " << codeAnimal << endl;
  cout << "Nhap ten cua con voi: ";
  cin.ignore();
  getline(cin, nomAnimal);
  cout << "Chung loai: " << quelType << endl;
  cout << "la con: " << type << endl;
  cout << "Sa date de naissance: " ;
  getline(cin, dateNais);
}
