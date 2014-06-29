#include "library.h"

using namespace std;

/*void menu_animal()
{
  cout << endl;
  cout << "\t1. Xem danh sach Animal " << endl;
  cout << "\t2. Xem thong tin Animal " << endl;
  cout << "\t3. Add Animal" << endl;
  cout << "\t4. Delete Animal" << endl;
  cout << "\t5. Doi chuong cho Animal" << endl;
  cout << "\t6. Quay tro ve Menu chinh " << endl  << endl;
  cout << "\t\tLua chon cua ban: ";
}*/

void workAnimal(list<Animal> & ani, list <Cage> & chuong, 
		list <Zone> &zon, VeterinaireGeneral &vet, Chiropracteur & chiro);