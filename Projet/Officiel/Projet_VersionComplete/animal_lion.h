#ifndef LION_H
#define LION_H

#include <iostream>
#include <string>
#include "carnivore.h"
//#include "Date.h"
using namespace std;

class Lion : public Carnivore {


 public:
  Lion();
  ~Lion();
  void initialise();


};

#endif
