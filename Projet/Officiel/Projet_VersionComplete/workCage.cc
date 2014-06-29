#include "workCage.h"


void workCage(list <Cage> &chuong, list <Animal> ani, list <Viande> &meat,
	      list <Legume> &vege, list <Ouvrier> &ouv, list<Zone> & zon)
{
  char chose;
  list <Cage>::iterator it_Cage;
  system("clear");
  do
  {
    menu_cage();
    cin >> chose;
    fflush(stdin);
    switch (chose)
    {
      case '1':
      {
	show_list_cage( chuong);
	break;
      }
      case '2':
      {
	show_detail_cage(chuong);
	break;
      }
      case '3':
      {
	create_cage (chuong, zon);
	break;
      }
      case '4':
      {
	delete_cage(chuong, ouv, zon);
	break;
      }
      case '5':
      {
	string maCage;
	cout << endl << "Ma Cage ban muon cho thuc an: ";
	cin.ignore();
	getline(cin, maCage);
	if(chuong.size()==0)
	  cout << "List Cage empty"<< endl;
	else
	{
	  for(it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	    {
	      if (maCage == (*it_Cage).get_numCage())
		{
		  (*it_Cage).faireManger(meat, vege);
		  break;
		}
	    }
	  if (it_Cage == chuong.end())
	    cout << "Khong co Cage ban can tim " << endl;
	}
	break;
      }
      case '6':
      {
	system("clear");
	break;
      }
      case '7':
      {
	break;
      }
      default:
      {
	cout << "Nhap sai... Xin vui long nhap lai" << endl;
	break;
      }
    }
  }while (chose != '7');
}

