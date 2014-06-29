 #ifndef VET_H
#define VET_H
#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include "employe.h"
using namespace std;


class VeterinaireGeneral : public Employe {
 private:
  string numVet;
  map<string, string> ani_malade;
  
 public:
  VeterinaireGeneral();
  ~VeterinaireGeneral();
  string getNum();
  string getChuong();
  void jeSuis();
  void set_malade(string maAni, string malade);
  map<string,string> send_malade();
  void delete_list();


};

#endif
