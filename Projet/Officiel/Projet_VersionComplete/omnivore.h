#ifndef OMNIVORE_H
#define OMNIVORE_H

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class Omnivore: public Animal {
private:
  string name;
 public:
  Omnivore();
  ~Omnivore();
  string loai_thu();
};

#endif

