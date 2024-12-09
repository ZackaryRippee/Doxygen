#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * Employee class, holds ID years, hourly rate, hours worked. Provides
 * methos for printing details, calculating pay, and anniversary.
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  virtual void print();
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
