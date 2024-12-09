#include "Officer.h"
#include <iostream>

using namespace std;
/**
 * Default constructor for the Officer class.
 * Initializes the evilness attribute to a default value.
 * 
 * @param n/a
 * @pre None
 * @post evilness is set to 500.
 */
Officer::Officer() {
  evilness = 500;
}
/**
 * Parameterized constructor for the Officer class.
 * Initializes member variables with provided values and sets evilness.
 * 
 * @param ID Unique identifier for the officer.
 * @param years Number of years the officer has been with the company.
 * @param hourlyRate Hourly pay rate for the officer.
 * @param hoursWorked Number of hours the officer worked.
 * @param evilness Evilness score for the officer, representing a unique trait.
 * @pre Parameters are provided with valid values.
 * @post Member variables are set to the values passed as arguments.
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}
/**
 * Prints the officer's information to the console.
 * Includes information from the Employee class and the evilness attribute.
 * 
 * @param n/a
 * @pre None
 * @post Employee and officer details are displayed on the console.
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}
/**
 * Calculates the total pay for the officer.
 * The calculation considers the officer's evilness as a factor in addition to hourly rate.
 * 
 * @param n/a
 * @pre hoursWorked, hourlyRate, and evilness are set to valid values.
 * @return Total pay for the officer.
 * @post None
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
