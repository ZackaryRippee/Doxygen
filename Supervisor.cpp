#include "Supervisor.h"
#include <iostream>

using namespace std;
/**
 * Default constructor for the Supervisor class.
 * Initializes the number of supervised employees to a default value.
 * 
 * @param n/a
 * @pre None
 * @post numSupervised is set to -1.
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}
/**
 * Parameterized constructor for the Supervisor class.
 * Initializes member variables with provided values and sets numSupervised.
 * 
 * @param ID Unique identifier for the supervisor.
 * @param years Number of years the supervisor has been with the company.
 * @param hourlyRate Hourly pay rate for the supervisor.
 * @param hoursWorked Number of hours the supervisor worked.
 * @param numSupervised Number of employees supervised by the supervisor.
 * @pre Parameters are provided with valid values.
 * @post Member variables are set to the values passed as arguments.
 */

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}
/**
 * Prints the supervisor's information to the console.
 * Includes information from the Employee class and the number of employees supervised.
 * 
 * @param n/a
 * @pre None
 * @post Employee and supervisor details are displayed on the console.
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}
/**
 * Calculates the total pay for the supervisor.
 * The calculation includes a bonus based on the number of supervised employees.
 * 
 * @param n/a
 * @pre hoursWorked, hourlyRate, and numSupervised are set to valid values.
 * @return Total pay for the supervisor, including the supervision bonus.
 * @post None
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
