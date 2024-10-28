#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace

// Constants which are used throughout the program
#define kPricePerUnit 225   // Average price of a pair of shoes
#define kWeeklyWage 600     // Current weekly wage - Method 1
#define kSalary 7.0         // Hourly salary - Method 2
#define kHoursPerWeek 40    // Number of hours worked per week - Method 2
#define kCommission2  0.10  // Commission rate - Method 2
#define kCommission3 0.2    // Commission rate - Method 3
#define kBonusPerUnit 20    // Bonus per unit sold - Method 3

// A function to get the weekly sales of units
int GetInput() {
  int units;  // Variable to store the number of units sold
  cout << "Enter number of units sold per week: ";  // Prompt the user for input
  if (!(cin >> units)) {  // Check if the input is a valid integer
    cout << "Numbers only" << endl;  // Print an error message if input is invalid
    return 0;  // Return 0 to indicate invalid input
  } else {
    return units;  // Return the number of units sold
  }
}

// This one is easy - always the same: $600 per week
void CalcMethod1() {
  cout << "Method 1: " << kWeeklyWage << endl;  // Print the weekly wage for Method 1
}

// Method 2: A salary of $7.00 per hour plus a 10% commission on sales
void CalcMethod2(int Sales) {
  double PerHour, TotalPay, Commission;  // Variables to store hourly pay, total pay, and commission

  PerHour = kSalary * kHoursPerWeek;  // Calculate the weekly salary
  Commission = (Sales * kPricePerUnit) * kCommission2;  // Calculate the commission based on sales
  TotalPay = PerHour + Commission;  // Calculate the total pay
  cout << "Method 2: " << TotalPay << endl;  // Print the total pay for Method 2
}

// Method 3: No salary, but 20% commissions and $20 for each pair of shoes sold
void CalcMethod3(int Sales) {
  int Extra;  // Variable to store the bonus
  double TotalPay, Commission;  // Variables to store total pay and commission

  Extra = kBonusPerUnit * Sales;  // Calculate the total bonus
  Commission = (Sales * kPricePerUnit) * kCommission3;  // Calculate the commission based on sales
  TotalPay = Extra + Commission;  // Calculate the total pay
  cout << "Method 3: " <<  TotalPay << endl;  // Print the total pay for Method 3
}

int main() {  // Main function
  int WeeklySales;  // Variable to store the weekly sales

  WeeklySales = GetInput();  // Get the weekly sales from the user
  if (WeeklySales == 0)  // Check if the input was invalid
    return 0;  // Exit the program if input was invalid
  CalcMethod1();  // Calculate and print the pay for Method 1
  CalcMethod2(WeeklySales);  // Calculate and print the pay for Method 2
  CalcMethod3(WeeklySales);  // Calculate and print the pay for Method 3

  return 0;  // Return 0 to indicate successful execution
}
