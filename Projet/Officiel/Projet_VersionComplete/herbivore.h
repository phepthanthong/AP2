#ifndef HERBIVORE_H
#define HERBIVORE_H

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class Herbivore: public Animal {
private:
  string name;
 public:
  Herbivore();
  ~Herbivore();
  string loai_thu();
};
#endif
