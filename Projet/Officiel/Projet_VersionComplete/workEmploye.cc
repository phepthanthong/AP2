#include "workEmploye.h"


void workEmploye( list <Cage> & chuong, list <Ouvrier> & ouv)
{
  char chose;
  system("clear");
  do
  {
    menu_ouvrier();
    cin >> chose;
    fflush(stdin);
    switch (chose)
    {
      case '1':
      {
	show_list_Ouvrier(ouv);
	break;
      }
      case '2':
      {
	string maNV;
	cout << endl <<"Nhap ma NV muon xem thong tin chi tiet: " ;
	cin >> maNV;
	show_Ouvrier(maNV, ouv);
	break;
      }
      case '3':
      {
	Ouvrier nv;
	add_list_Ouvrier(nv ,ouv);
	break;
      }
      case '4':
      {
	string maNV;
	cout << endl << "Ma NV ban muon loai khoi danh sach: ";
	cin >> maNV;
	deleteOuvrier(maNV, ouv);
	break;
      }
      case '5':
      {
	string maNV, maCage;
	cout << endl << "Ma nhan vien: ";
	cin >> maNV;
	cout << "Chuong se lam viec: ";
	cin >> maCage;
	changer_cage_Ouvrier (maCage, maNV, ouv, chuong);
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