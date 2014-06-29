 #ifndef HAMLIST_CAGE
#define HAMLIST_CAGE

#include <list>
#include <iostream>
#include <string.h>
#include "animal.h"
#include "cage.h"
#include "ouvrier.h"
#include "zone.h"
#include "fonction_list_ouvrier.h"

using namespace std;

void show_list_cage(list <Cage> chuong);

void show_detail_cage(list <Cage> chuong);

void create_cage (list <Cage> &chuong,  list<Zone> & zon);

void delete_cage(list <Cage> &chuong, list <Ouvrier> &ouv, list<Zone> & zon);

#endif

