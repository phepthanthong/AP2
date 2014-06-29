#include "cage.h"

int Cage::numCage = 0;
Cage::Cage()
{
  numCage++;
  maCage = "C-";
  maCage.append(static_cast<ostringstream*>( &(ostringstream() << numCage) )->str());
  type="NULL";
  chungloai="NULL";
  number_Animal=0;
  take_care="NULL";

}

Cage::~Cage(){}

void Cage::setZone(string nameZone) 
{
  zone=nameZone;
}
string Cage::getZone() 
{
  return zone;
}
void Cage::set_numCage(string code) 
{ 
  maCage =code;
}
void Cage::setZero() 
{  
  number_Animal=0; 
}
void Cage::increase() 
{ 
  number_Animal++; 
}
void Cage::decrease() 
{ 
  number_Animal--; 
}
int Cage::compterAnimaux() 
{ 
  return number_Animal; 
}
void Cage::set_number_Animal(int number) 
{
  number_Animal = number;
}
void Cage::set_take_care(string nameNV)  
{ 
  take_care = nameNV; 
}
string Cage::get_take_care() 
{ 
  return take_care; 
}
void Cage::faireManger(list <Viande> & meat, list <Legume> & vege)
{
  int sothutu;
  int khoiluong;
  char chose;
  if (getChungloai()=="OMNIVORE")
    {
      cout << "Chon '1' de cho an thit, '2' de cho an rau: "; cin >> chose;
    }
  if (getChungloai()=="CARNIVORE" || (getChungloai()=="OMNIVORE" && chose == '1') )
    {
      if(meat.size() == 0)
	cout << "Chua co thit gi trong kho, xin vui long nhap thit vao\n";
      else
	{
	  show_list_viande(meat);
	  cout << "Nhap so thu tu: "; 
	  enter_value(sothutu);
	  cout << "Nhap vao khoi luong: "; 
	  enter_value(khoiluong);
	  xuat_thit (sothutu, khoiluong, meat);
	}
    }
  else if (getChungloai()=="HERBIVORE" || (getChungloai()=="OMNIVORE" && chose == '2'))
    {
      if(vege.size() == 0)
	cout << "Chua co rau trong kho, xin vui long nhap rau vao\n";
      else
	{
	  show_list_Legume(vege);
	  cout << "Nhap so thu tu rau: "; 
	  enter_value(sothutu);
	  cout << "Nhap vao khoi luong: "; 
	  enter_value(khoiluong); 
	  xuat_rau (sothutu, khoiluong, vege);
	}
    }
}

string Cage::getChungloai()
{
  return chungloai;
}
void Cage:: setChungloai(string cl)
{
  chungloai=cl;
}
string Cage::get_numCage()
{
  return maCage;
}
void Cage::setType(string loai)
{
  type=loai;
}
string Cage::getType()
{
  return type;
}
void Cage::showCage()
{
  
  cout << "Numero de Cage: " << maCage << " thuoc ve zone: " << zone << endl;
  if(type =="NULL")
    cout << "khong co con thu nao ca"<< endl;
  else
    {
      cout << "Cage dang chua: " << type << " co so luong: " << number_Animal << " con" << endl;
      
    }
  if (take_care !="NULL") cout << "Co nhan vien " << take_care <<  " cham soc" << endl;
  else cout << "Khong co nhan vien cham soc... ALERT" << endl;
  cout << endl;
}


