#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"
/*
 *Supervisor class for employee class, has number of employess supervised, with usual methods like
 *printing details amd calculating pay
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();
  double calculatePay();
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
