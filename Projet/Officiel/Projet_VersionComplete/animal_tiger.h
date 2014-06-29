#ifndef TIGER_H
#define TIGER_H

#include <iostream>
#include <string>
#include "carnivore.h"
//#include "Date.h"
using namespace std;

class Tiger : public Carnivore {


 public:
  Tiger();
  ~Tiger();
  void initialise();


};

#endif
