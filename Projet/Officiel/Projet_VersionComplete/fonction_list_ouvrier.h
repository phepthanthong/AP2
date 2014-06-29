#ifndef HAMLIST_OUVRIER
#define HAMLIST_OUVRIER

#include <list>
#include <iostream>
#include <string.h>
#include "ouvrier.h"
#include "cage.h"
//#include "alimentation.h"

using namespace std;



void show_list_Ouvrier(list <Ouvrier>  worker);
void show_Ouvrier(string maNV ,list <Ouvrier>  worker);
void add_list_Ouvrier(Ouvrier &moi ,list <Ouvrier> & worker);
void changer_cage_Ouvrier (string maCage, string maNV, list <Ouvrier> & worker, list<Cage> &chuong);
void change_status_Ouvrier (string maCage, list <Ouvrier> & worker);
void deleteOuvrier(string maNV, list <Ouvrier> & worker);
void deactivate (list <Ouvrier> & worker, string maCage);





#endif
