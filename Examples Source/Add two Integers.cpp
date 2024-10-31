#include <iostream>
using namespace std;

int main () {
	int firstNumber, secondNumber, sumOfTwoNumbers;
	
	cout << "Enter two integers: ";
	cin >> firstNumber >> secondNumber;
	
	//sum of two numbers is stores in variable sumOfTwoNumbers
	sumOfTwoNumbers = firstNumber + secondNumber;
	
	// Prints sum of
	cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;
	
	return 0;
}
