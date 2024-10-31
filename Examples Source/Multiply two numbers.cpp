// user is asked to enter two number that are floating point numbers
// then they are stored in a variable and displayed on screen

#include <iostream>
using namespace std;

int main () {
	double num1, num2, product;
	cout << "Enter two numbers: ";
	
	// stores two floating point numbers in num1 and num2 
	cin >> num1 >> num2;
	
	// performs multiplication and stores the result in product variable
	product = num1 * num2;
	
	cout << "Product = " << product;
	
	return 0;
}
