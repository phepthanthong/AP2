#ifndef FONTCTION_RAU
#define FONTCTION_RAU

#include <list>
#include <iostream>
#include <string.h>
#include "legume.h"
#include "alimentation.h"

using namespace std;



void show_list_Legume(list <Legume>  vegetable);
void add_list_Legume(Legume moi ,list <Legume> & vegetable);
void nhap_rau (int vitri, int khoiluong, list <Legume> & vegetable);
void xuat_rau (int vitri, int khoiluong, list <Legume> & vegetable);




#endif
