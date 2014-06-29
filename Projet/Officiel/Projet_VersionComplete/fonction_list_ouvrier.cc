#include "fonction_list_ouvrier.h"


/*======================= list worker =======*/
void show_list_Ouvrier(list <Ouvrier>  worker)
{
  list<Ouvrier>::iterator it_Ouvrier;
  if(worker.size()==0)
    cout << "khong co cong nhan"<< endl;
  else
  {
    for(it_Ouvrier = worker.begin(); it_Ouvrier != worker.end(); it_Ouvrier++)
    {
      cout << "nhan vien: " << (*it_Ouvrier).getNum() << "\t";
      if ((*it_Ouvrier).getChuong() != "NULL")
	cout << " Cage cham soc: " << (*it_Ouvrier).getChuong() <<endl;
      else
	cout << " Tinh trang ranh roi" << endl;
    }
  }
}
void show_Ouvrier(string maNV ,list <Ouvrier>  worker)
{
  list<Ouvrier>::iterator it_Ouvrier;
  if(worker.size()==0)
    cout << "khong co Nhan vien"<< endl;
  else
  {
    for(it_Ouvrier = worker.begin(); it_Ouvrier != worker.end(); it_Ouvrier++)
    {
      if (maNV == (*it_Ouvrier).getNum())
      {
	(*it_Ouvrier).jeSuis();
	break;
      }
    }
    if (it_Ouvrier == worker.end())
      cout << "Khong co nhan vien nay " << endl;
  }
}

void add_list_Ouvrier (Ouvrier &moi ,list <Ouvrier> & worker)
{
  cout << "Dua nhan vien moi vao list thanh cong" <<endl;
 
  worker.push_back (moi);
}

void changer_cage_Ouvrier (string maCage, string maNV, list <Ouvrier> & worker, list <Cage> &chuong) // doi nguoi theo ma so cua nhan vien
{
  bool test=false;
  list<Cage>::iterator it_Cage;
  list<Ouvrier>::iterator it_Ouvrier;
  if(chuong.size() == 0)
  {
    cout << "So Thu chua co Cage" <<endl;
  }
  else
  {
    for(it_Ouvrier = worker.begin(); it_Ouvrier != worker.end(); it_Ouvrier++)
    {
      if (maCage==(*it_Ouvrier).getChuong())
      {
	test= true;
	cout << "Chuong nay da co nhan vien khac cham soc" <<endl;
	break;
      }
    }
    if(test ==false )
    {
      cout <<"Nhung Cage nhan vien nay co the cham soc:\n";
      for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
	if ( (*it_Cage).get_take_care() == "NULL")
	  cout << "\t" << (*it_Cage).get_numCage();
      cout << endl;
      for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
      {
	if ((*it_Cage).get_numCage() == maCage)
	{
	  for(it_Ouvrier = worker.begin(); it_Ouvrier != worker.end(); it_Ouvrier++)
	  {
	    if (maNV==(*it_Ouvrier).getNum())
	    {
	      (*it_Ouvrier).initialise_cage (maCage);
	      (*it_Cage).set_take_care(maNV);
	      cout << "Nhan vien da nhan cong viec tai chuong moi" << endl;
	      break;
	    } 
	  }
	  break;
      }
    }
    }
    if (it_Ouvrier == worker.end())
      cout << "Khong co nhan vien nay trong Danh sach " << endl;
    if (it_Cage == chuong.end())
	cout << "Khong co Cage trong Danh sach " << endl;
    else
    {
      for (it_Cage = chuong.begin(); it_Cage != chuong.end(); it_Cage++)
      {
	if( (*it_Cage).get_numCage() != maCage && (*it_Cage).get_take_care() == maNV)
	  (*it_Cage).set_take_care("NULL");
      }
    }  
  }
}
void deactivate (list <Ouvrier> & worker, string maCage)
{
  list<Ouvrier>::iterator it_Ouvrier;
  for(it_Ouvrier = worker.begin(); it_Ouvrier != worker.end(); it_Ouvrier++)
  {
    if((*it_Ouvrier).getChuong() == maCage)
      (*it_Ouvrier).initialise_cage ("NULL");
  }
}
void deleteOuvrier(string maNV, list <Ouvrier> & worker)
{
  list<Ouvrier>::iterator it_Ouvrier;
  if(worker.size()==0)
    cout << "khong co Nhan vien"<< endl;
  else
  {
    for(it_Ouvrier = worker.begin(); it_Ouvrier != worker.end(); it_Ouvrier++)
    {
      if (maNV == (*it_Ouvrier).getNum())
      {
	worker.erase(it_Ouvrier);
	cout << "Nhan vien da duoc cho nghi viec " << endl;
	break;
      }
    }
    if (it_Ouvrier == worker.end())
      cout << "Khong co nhan vien nay " << endl;
  }
}
