#include "workAnimal.h"

void workAnimal(list<Animal> & ani, list <Cage> & chuong, 
		list <Zone> &zon, VeterinaireGeneral &vet, Chiropracteur &chiro)
{
  char chose;
  list <Cage>::iterator it_Cage;
  list <Animal>::iterator it_Animal;
  system("clear");
  do
  {
    menu_animal();
    cin >> chose;
    fflush (stdin);
    switch (chose)
    {
      case '1':
      {
	show_list_Animal (ani, chuong);
	break;
      }
      case '2':
      {
	show_info_Animal (ani);
	break;
      }
      case '3':
      {
	show_cage_Animal (ani, chuong);
	break;
      }
      case '4':
      {
	if(chuong.size()==0)
	  cout << "Chua co chuong de chua thu, xin hay tao Cage truoc" <<endl;
	else
	{
	  char decide;
	  menu_list_animal();
	  cin >> decide;
	  switch (decide)
	  {
	    case '1':
	    {
	      Lion nouveau;
	      nouveau.initialise();
	      add_list_Animal (nouveau , ani, chuong, zon);
	      break;
	    }
	    case '2':
	    {
	      Tiger nouveau;
	      nouveau.initialise();
	      add_list_Animal (nouveau , ani, chuong, zon);
	      break;
	    }
	    case '3':
	    {
	      Elephant nouveau;
	      nouveau.initialise();
	      add_list_Animal (nouveau , ani, chuong, zon);
	      break;
	    }
	    case '4':
	    {
	      Ours nouveau;
	      nouveau.initialise();
	      add_list_Animal (nouveau , ani, chuong, zon);
	      break;
	    }
	    default:
	    {
	      cout << "Nhap sai... Xin vui long nhap lai" << endl;
	      break;
	    }
	  }
	}
	break;
      }
      case '5':
      {
	char choice;
	cout << "1) Xoa theo Animal \n2) Xoa theo Cage \n\tYour choice: ";
	cin >> choice;
	if (choice == '1')
	{
	  string maAni;
	  cout <<"Nhap ma so con thu can xoa: ";
	  cin.ignore();
	  getline(cin,maAni);
	  delete_list_Animal ( maAni,ani, chuong, zon);
	}
	else if (choice == '2')
	{
	  string maCage, maAni;
	  cout <<"Nhap ma so Cage can xoa het Animal: ";
	  cin.ignore();
	  getline(cin,maCage);
	  delete_cage_Animal  (maCage, ani, chuong, zon);
	}
	else cout <<"Lua chon sai\n";
	break;
      }
      case '6':
      {
	check_malade(ani, vet, chiro);
	break;
      }
      case '7':
      {
	chang_place (ani, chuong, zon);
	break;
      }
      case '8':
      {
	system("clear");
	break;
      }
      case '9':
      {
	break;
      }
      default:
      {
	cout << "Nhap sai... Xin vui long nhap lai" << endl;
	break;
      }
    }
  }while (chose != '9');
}
