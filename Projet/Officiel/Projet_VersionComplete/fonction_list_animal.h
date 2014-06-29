#ifndef HAMLIST_ANIMAL
#define HAMLIST_ANIMAL

#include <list>
#include <time.h> 
#include <iostream>
#include <string.h>
#include "animal.h"
#include "cage.h"
#include "zone.h"
#include "fonction_list_cage.h"
#include "veterinaire_General.h"
#include "chiropracteur.h"


using namespace std;



void show_list_Animal(list <Animal>  ani, list <Cage> chuong);
void show_cage_Animal(list <Animal>  ani, list <Cage> chuong);
void show_info_Animal (list <Animal>  ani);
void delete_cage_Animal (string maCage, list <Animal> &ani, list <Cage> & chuong,list <Zone> & zon);
void add_list_Animal (Animal moi ,list <Animal> & ani, list <Cage> & chuong, list <Zone> & zon);
void delete_list_Animal (string maAnimal,list <Animal> &ani, list <Cage> & chuong, list <Zone> & zon);
void chang_place (list <Animal> &ani, list <Cage> & chuong, list <Zone> & zon);
void check_malade(list <Animal> &ani, VeterinaireGeneral &vet, Chiropracteur & chiro);





#endif
