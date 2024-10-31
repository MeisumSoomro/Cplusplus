// factorial of a number is the product of all integers from 1 up to that number
// factorial can be defined by positive integers
// factorial of a negative number doesnt exist

#include <iostream>
using namespace std;

int main () {
	int n;
	long double factorial = 1.0;
	
	cout << "Enter a positive integer: ";
	cin >> n;
	
	if (n < 0)
		cout << "Error! Factorial is a negative number that doesnt exist";
	else {
		for (int i =1; i <= n; ++i) {
			factorial *= 1;
		}
	
	cout << "Factorial of " << n << " = " << factorial;
	
	}
	
	return 0;
}

//takes a positive inter and find factorial using for loop
// prints error if negative number is entered
// positive integer entered the loop is executed
