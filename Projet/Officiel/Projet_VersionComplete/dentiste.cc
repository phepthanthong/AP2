#include "dentiste.h"

using namespace std;

Dentiste::Dentiste() 
{
  numDent = "Dentiste";
}

Dentiste::~Dentiste(){}
string Dentiste::getNum(){}
string Dentiste::getChuong(){}
void Dentiste::jeSuis()
{
  map<string, string>::iterator it;
  if (ani_malade.size() == 0) cout << "Animal da duoc chua het\n";
  else
    {
      cout << numDent << " cham soc cac Animal nay: \n";
      for (it=ani_malade.begin(); it!=ani_malade.end(); ++it)
	cout <<"\t\tAnimal: " << it->first << "  benh:  " << it->second <<endl;
    }
}
void Dentiste::receive_malade(string maAni, string mal)
{
  ani_malade.insert( pair<string, string>(maAni,mal) );
}

void Dentiste::soigner_malade(list<Animal> &ani)
{
  string maAni;
  list<Animal>::iterator it_A;
  if (ani_malade.size() == 0) cout << "Ko co Animal benh\n";
  else
    {
      map<string, string>::iterator it;
      for (it=ani_malade.begin(); it!=ani_malade.end(); ++it)
	{
	  maAni= it->first;
	  for (it_A = ani.begin(); it_A != ani.end(); it_A++)
	    {
	      if( maAni== (*it_A).getNumero())
		(*it_A).set_malade("NULL");
	    }
	}
      ani_malade.erase(ani_malade.begin(), ani_malade.end());
    }
}
