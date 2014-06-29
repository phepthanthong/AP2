#ifndef CAGE_H
#define CAGE_H
#include "animal.h"
#include "fonction_list_meat.h"
#include "fonction_list_vege.h"
#include "enter_value.h"
#include <iostream>
#include <string>

using namespace std;

class Cage {
 private:
  string maCage;
  string type;
  string chungloai;
  int number_Animal;
  string take_care;
  string zone;
protected:
  static int numCage;
  
 public:
  Cage();
  ~Cage();
  void setZone(string name);
  string getZone();
  void faireManger(list <Viande> & meat, list <Legume> & vege);
  string get_numCage();
  void set_numCage(string code);
  void setType(string type);
  string getType();
  string getChungloai();
  void setChungloai(string cl);
  void setZero();
  int compterAnimaux();
  void set_number_Animal(int number);
  void increase();
  void decrease();
  void set_take_care(string name);
  string get_take_care();
  
  
  void showCage();

  
};

#endif
