#include "fonction_list_animal.h"

/*======================= list thu =======*/
void show_list_Animal(list <Animal>  ani, list <Cage> chuong)
{
  list<Animal>::iterator it_Animal;
  list<Cage>::iterator it_Cage;
  if (ani.size() == 0) cout << "Chua co Animal nao trong so thu" <<endl;
  else if(chuong.size() == 0)
    cout <<" So Thu chua co chuong " << endl;
  else
  {
    for(it_Animal = ani.begin(); it_Animal != ani.end(); it_Animal++)
    {
      cout << "Animal:  " << (*it_Animal).getNumero();
      cout << "\tType: " << (*it_Animal).getType();
      cout << "\tCage: " << (*it_Animal).getCage();
      if ((*it_Animal).get_malade() =="NULL") cout << "\tHealth: Tot" << endl;
      else cout << "\tHealth: Benh" << endl;
      }
   }
}

void show_cage_Animal(list <Animal>  ani, list <Cage> chuong)
{
  string maCage;
  list<Animal>::iterator it_Animal;
  list<Cage>::iterator it_Cage;
  cout << endl << "Nhap vao ma Cage: "; cin >> maCage;
  if(chuong.size() == 0)
    cout <<" So Thu chua co chuong " << endl;
  else
  {
    for(it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
    {
      if( maCage == (*it_Cage).get_numCage())
      {
	if (ani.size() == 0)
	  cout << "\tChuong khong co thu" << endl;
	else
	{
	  for(it_Animal = ani.begin(); it_Animal != ani.end(); it_Animal++)
	  {
	    if( (*it_Cage).get_numCage() == (*it_Animal).getCage())
	      (*it_Animal).parler();
	  }
	  cout <<endl <<endl;
	}
	break;
      }
    }
    if (it_Cage == chuong.end())
      cout << "Ma Cage khong hop le" << endl;
  }
}
void show_info_Animal (list <Animal>  ani)
{
  string maAnimal;
  list<Animal>::iterator it_Animal;
  cout << "Nhap vao ma Animal de biet thong tin: ";
  cin.ignore();
  getline(cin, maAnimal);

    for(it_Animal = ani.begin(); it_Animal != ani.end(); it_Animal++)
      {
	if(maAnimal == (*it_Animal).getNumero())
	{
	  (*it_Animal).parler();
	  break;
	}
      }
    if(it_Animal == ani.end())
      cout << "Ma Animal sai" <<endl;
  
  
}
void add_list_Animal (Animal moi ,list <Animal> & ani, list <Cage> & chuong, list <Zone> &zon)
{
  string maCage, maZone;
  bool check = false, verify=false;
  list <Cage>::iterator it_Cage;
  list <Zone>::iterator it_Zone;
  while(verify==false)
  {
    cout << endl << "Nhung chuong co kha nang chua Animal nay: " << endl;
    for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
    {
      if ((*it_Cage).getType() == moi.getType() || (*it_Cage).getType() == "NULL")
      { cout << (*it_Cage).get_numCage() << "\t" ; verify=true;}
    }
    if (verify==false)
    {
      cout << "Khong co Cage phu hop, automatic tao Cage moi de chua Animal nay\n";
      create_cage (chuong, zon);
      cin.ignore();
    }
  }
  cout << endl << "Chon Cage de dua thu vao: "; 
  do{
    cin >> maCage;
    for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
    {
      if (maCage == (*it_Cage).get_numCage() &&((*it_Cage).getType() == moi.getType() || 
						  (*it_Cage).getType() == "NULL"))
      {
	maZone = (*it_Cage).getZone();
	for (it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
	{
	  if(maZone == (*it_Zone).getNom()) {(*it_Zone).increase(); break;}
	}
	moi.change_Cage (maCage);
	check=true;
	break;
      }
    }
    if (check == false) cout << "Nhap sai Ma Cage, yeu cau nhap lai: " ;
  } while (check == false);
  ani.push_back(moi);
  (*it_Cage).setType(moi.getType());
  (*it_Cage).setChungloai(moi.getChungloai());
  (*it_Cage).increase();
    cout << "Da add animal thanh cong " << endl;
}

void delete_cage_Animal (string maCage, list <Animal> &ani, list <Cage> & chuong, list <Zone> & zon)
{
  string maZone;
  list<Animal>::iterator it_Animal;
  list<Cage>::iterator it_Cage;
  list <Zone>::iterator it_Zone;
  for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
    {
      if((*it_Cage).get_numCage() == maCage)
      {
	maZone = (*it_Cage).getZone();
	(*it_Cage).setZero();
	(*it_Cage).setType("NULL");
	(*it_Cage).setChungloai("NULL");
	it_Animal = ani.begin();
	while (it_Animal != ani.end())
	{
	  if ((*it_Animal).getCage() == maCage) 
	  {
	    ani.erase(it_Animal);
	    it_Animal = ani.begin();
	    for (it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
	      if(maZone == (*it_Zone).getNom()) {(*it_Zone).decrease(); break;}
	  }
	  else it_Animal ++;
	}
	break;
      }
    }
  if(it_Cage == chuong.end()) cout << "Ma Cage nhap vao khong co" << endl;
  else cout << "Tat ca thu trong Cage " << maCage << " da duoc xoa" << endl;
}
void delete_list_Animal (string maAnimal,list <Animal> &ani, list <Cage> & chuong, list <Zone> & zon)
{
  bool test=false;
  string maCage, maZone;
  list<Animal>::iterator it_Animal;
  list<Cage>::iterator it_Cage;
  list <Zone>::iterator it_Zone;
  for(it_Animal = ani.begin(); it_Animal != ani.end(); it_Animal++)
    {
	if(maAnimal == (*it_Animal).getNumero())
	{
	  maCage=(*it_Animal).getCage();
	  for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	  {
	    if (maCage == (*it_Cage).get_numCage() )
	    {
	      (*it_Cage).decrease();
	      if ( (*it_Cage).compterAnimaux() == 0)
	      {
		(*it_Cage).setType("NULL");
		(*it_Cage).setChungloai("NULL");
	      }
	      maZone = (*it_Cage).getZone();
	      for (it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
	      {
		if(maZone == (*it_Zone).getNom())
		(*it_Zone).decrease();
		break;
	      }
	    }
	  }
	  ani.erase(it_Animal);
	  cout << "Xoa animal thanh cong" <<endl;
	  break;
	}
    }
  if(it_Animal == ani.end()) cout << "Khong co Animal can xoa" <<endl;
}

void chang_place (list <Animal> &ani, list <Cage> & chuong, list <Zone> & zon)
{
  string maCage1, maCage2, zone1, zone2;
  int check=0, animal1, animal2;
  list<Animal>::iterator it_Animal;
  list<Cage>::iterator it_Cage;
  list<Cage>::iterator it_Cage1;
  list <Zone>::iterator it_Zone;
  cout << "Danh sach cac Cage: ";
  for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
  {
    cout << (*it_Cage).get_numCage() << "    ";
  }
  cout <<"\nNhap ma so 2 Cage muon doi Animal\n";
  cout <<"Cage 1: "; cin >> maCage1; 
  cout <<"Cage 2: "; cin >> maCage2;
  for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
  {
    if((*it_Cage).get_numCage() == maCage1 || (*it_Cage).get_numCage() == maCage2)
      check++;
  }
  if (check ==2 )
  {
    for(it_Animal = ani.begin(); it_Animal != ani.end(); it_Animal++)
    {
      if(maCage1 == (*it_Animal).getCage())
	(*it_Animal).change_Cage(maCage2);
      else if (maCage2 == (*it_Animal).getCage())
	(*it_Animal).change_Cage(maCage1);
    }
    for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
    {
      if((*it_Cage).get_numCage() == maCage1 || (*it_Cage).get_numCage() == maCage2)
      {
	zone1 = (*it_Cage).getZone();
	animal1 = (*it_Cage).compterAnimaux();
	it_Cage1 = it_Cage;
	it_Cage1++;
	for (; it_Cage1 != chuong.end(); it_Cage1++)
	{
	  if((*it_Cage1).get_numCage() == maCage1 || (*it_Cage1).get_numCage() == maCage2)
	  {
	    zone2 = (*it_Cage1).getZone();
	    animal2 = (*it_Cage1).compterAnimaux();
	    int temp_num = (*it_Cage).compterAnimaux();
	    string temp_type = (*it_Cage).getType();
	    string temp_cl = (*it_Cage).getChungloai();
	    (*it_Cage).set_number_Animal ((*it_Cage1).compterAnimaux());
	    (*it_Cage).setType ((*it_Cage1).getType());
	    (*it_Cage).setChungloai ((*it_Cage1).getChungloai());
	    (*it_Cage1).set_number_Animal (temp_num);
	    (*it_Cage1).setType (temp_type);
	    (*it_Cage1).setChungloai (temp_cl);
	    cout << "Thu cua 2 chuong da doi thanh cong" << endl; 
	    break;
	  }
	}
	break;
      }
    }
    if (animal1>=animal2)
    {
      int dif = animal1 - animal2;
      while (dif != 0)
      {
	for (it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
	{
	  if( (*it_Zone).getNom() == zone1) (*it_Zone).decrease();
	  if( (*it_Zone).getNom() == zone2) (*it_Zone).increase();
	}
	dif--;
      }
    }
    else
      {
      int dif = animal2 - animal1;
      while (dif != 0)
      {
	for (it_Zone = zon.begin(); it_Zone != zon.end(); it_Zone++)
	{
	  if( (*it_Zone).getNom() == zone1) (*it_Zone).increase();
	  if( (*it_Zone).getNom() == zone2) (*it_Zone).decrease();
	}
	dif--;
      }
    }
  }
  else cout << "Mot trong 2 ma Cage nhap vao la sai" <<endl;
}

void check_malade(list <Animal> &ani, VeterinaireGeneral &vet, Chiropracteur & chiro)
{
  list<Animal>::iterator it_Animal;
  if (ani.size() == 0) cout << "Chua co Animal nao trong so thu" <<endl;
  else
  {   
    srand (time(NULL));
    for(it_Animal = ani.begin(); it_Animal != ani.end(); it_Animal++)
      (*it_Animal).visiterMedicale(vet);
  }
}




