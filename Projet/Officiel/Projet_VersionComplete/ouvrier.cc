#include "ouvrier.h"

Ouvrier::Ouvrier()
{
  numEmploye++;
  numOuvrier = "W-";
  numOuvrier.append(static_cast<ostringstream*>( &(ostringstream() << numEmploye) )->str());;
  cout << endl <<" Nhan vien se mang ma so: " << numOuvrier << endl;
  cout <<" Nhap ten cua nhan vien: ";
  cin.ignore();
  getline(cin,nomOuvrier);
  cout << "Ngay sinh: ";
  cin >> birthday;
  cout << "So dien thoai: ";
  cin >> tel;
  numcage="NULL";

}

Ouvrier::~Ouvrier(){}

string Ouvrier::getNom()
{
  return nomOuvrier;
}
string Ouvrier::getNum()
{
  return numOuvrier;
}
string Ouvrier::getChuong()
{
  return numcage;
}
void Ouvrier::initialise_cage (string cage)
{
  numcage=cage;
}

void Ouvrier::jeSuis()
{
  cout << endl << "\t\tSon numero: " << numOuvrier << endl;
  cout << "\t\tNom de l'Ouvrier: " << nomOuvrier << endl;
  cout << "\t\tNgay sinh: " << birthday << endl;
  cout << "\t\tSo dien thoai: " << tel << endl;
  if(numcage != "NULL")
    cout << "\t\tTinh trang: dang lam viec o chuong " << numcage <<endl;
  else
    cout << "\t\tTinh trang: Chua phan cong chuong thu" << endl;

}
