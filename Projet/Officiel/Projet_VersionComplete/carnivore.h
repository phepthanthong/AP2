#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class Carnivore: public Animal {
private:
  string name;
 public:
  Carnivore();
  ~Carnivore();
  string loai_thu();
};

#endif
