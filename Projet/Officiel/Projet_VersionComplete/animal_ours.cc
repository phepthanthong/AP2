 #include "animal_ours.h"

Ours::Ours()
{
  numAnimal++;
  codeAnimal="A-O-";
  codeAnimal.append(static_cast<ostringstream*>( &(ostringstream() << numAnimal) )->str());
  type = "OURS";
  quelType = loai_thu();
  malade="NULL";
}

Ours::~Ours(){}

void Ours::initialise()
{
  cout << endl;
  cout << "Ma so cua con gau: " << codeAnimal << endl;
  cout << "Nhap ten cua con gau: ";
  cin.ignore();
  getline(cin, nomAnimal);
  cout << "Chung loai: " << quelType << endl;
  cout << "la con: " << type << endl;
  cout << "Sa date de naissance: " ;
  getline(cin, dateNais);
}
