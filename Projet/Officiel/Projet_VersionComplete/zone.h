 #ifndef ZONE_H
#define ZONE_H
#include <iostream>
#include <string>
#include <sstream>
#include <list>
using namespace std;


class Zone {
 private:
  string nomZone;
  int numberAnimal;
  list<string> listCage;
 protected:
  static int numZone;
  
 public:
  Zone();
  ~Zone();
  string getNom();
  bool checkCage();
  int compterAnimaux();
  void increase();
  void decrease();
  void addCage(string maCage);
  void deleteCage(string maCge);
  void showZone();
  
};

#endif
