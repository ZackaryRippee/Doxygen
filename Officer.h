#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"
/*
 *Officer Header which is connected to Employee class; has counter for evil, and ways to print it
 * and calculate pay and determine evilness
 */
class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
