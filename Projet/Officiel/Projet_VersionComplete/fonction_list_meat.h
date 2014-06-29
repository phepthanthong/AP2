#ifndef HAMLIST_THIT
#define HAMLIST_THIT

#include <list>
#include <iostream>
#include <string.h>
#include "viande.h"
#include "alimentation.h"

using namespace std;

void show_list_viande(list <Viande>  meat);
void add_list_viande(Viande moi ,list <Viande> & meat);
void nhap_thit (int vitri, int khoiluong, list <Viande> & meat);
void xuat_thit (int vitri, int khoiluong, list <Viande> & meat);

#endif
