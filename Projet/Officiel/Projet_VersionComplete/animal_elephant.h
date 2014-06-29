 #ifndef ELEPHANT_H
#define ELEPHANT_H

#include <iostream>
#include <string>
#include "herbivore.h"
using namespace std;

class Elephant : public Herbivore {


 public:
  Elephant();
  ~Elephant();
  void initialise();


};

#endif
