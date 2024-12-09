/**
 *@file Employee.h
 *@author 
 *@date 2024
 *@brief Emlpoyee Header
 *
 */


#include "Employee.h"
#include <iostream>

using namespace std;
/**
 *Constructor for Employee Class.
 *
 *@param n/a
 *@pre n/a
 *@post ID, years, hoursWorked, and hourlyRate set to -1.
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}
/**
 * Parameterized constructor for the Employee class.
 * Initializes member variables with provided values.
 * 
 * @param ID Unique identifier for the employee.
 * @param years Number of years the employee has been with the company.
 * @param hourlyRate Hourly pay rate for the employee.
 * @param hoursWorked Number of hours the employee worked.
 * @pre Parameters are provided with valid values.
 * @post Member variables are set to the values passed as arguments.
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}
/**
 * Prints the employee's information to the console.
 * 
 * @param n/a
 * @pre None
 * @post Employee details (ID, years, hourly rate, hours worked) are displayed on the console.
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}
/**
 * Updates the employee's years of service and adjusts their hourly rate for an anniversary.
 * 
 * @param n/a
 * @pre None
 * @post Increments years by 1 and increases hourlyRate by 0.2%.
 *       Prints a congratulatory message to the console.
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

/**
 * Calculates the total pay for the employee based on hours worked and hourly rate.
 * 
 * @param n/a
 * @pre hoursWorked and hourlyRate are set to valid values.
 * @return Total pay for the employee.
 * @post None
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

