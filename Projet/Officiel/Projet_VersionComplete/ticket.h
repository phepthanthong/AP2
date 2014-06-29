#ifndef TICKET_H
#define TICKET_H
#include <iostream>
#include <string>
#include <list>
#include <sstream>
using namespace std;


class Ticket {
 private:
  string nameTicket;
  list<string> zone;
  int money;

protected:
  static int numTicket;
  static int doanhthu;
  
 public:
  Ticket();
  ~Ticket();
void setZone(string z);
void setMoney(int xu);
void destroyTicket();
void printTicket();
void showTicket();
void information();

};

#endif