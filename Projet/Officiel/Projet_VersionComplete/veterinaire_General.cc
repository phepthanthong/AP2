#include "veterinaire_General.h"

using namespace std;

VeterinaireGeneral::VeterinaireGeneral()  
{
  numVet ="Veterinaire General";
}
VeterinaireGeneral::~VeterinaireGeneral() {}

void VeterinaireGeneral::set_malade(string maAni, string malade)
{
  ani_malade.insert (pair<string, string>(maAni, malade));
  cout <<"Veterinaire General phat hien Animal " << maAni <<" bi benh " <<malade <<endl;
}

string VeterinaireGeneral::getNum(){}
string VeterinaireGeneral::getChuong(){}

void VeterinaireGeneral::jeSuis()
{
  map<string, string>::iterator it;
  if (ani_malade.size() == 0) cout << "Animal da chuyen den bac si chuyen khoa hay khong con Animal benh\n";
  else
    {
    cout << numVet << " cham soc cac Animal nay: \n";
    for (it=ani_malade.begin(); it!=ani_malade.end(); ++it)
      cout <<"\t\tAnimal: " << it->first << "  benh:  " << it->second <<endl;
    }
}
map<string, string> VeterinaireGeneral::send_malade()
{
  return ani_malade;
}

void VeterinaireGeneral::delete_list()
{
  ani_malade.erase(ani_malade.begin(), ani_malade.end());
}
