//display armstong number between two intervals
//using loops an ifelse statement

#include <iostream>
using namespace std;

int main () {
	int num1, num2, i, num, digit, sum;
	
	cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	cout << "Armstrong number between " << num1 << " and " << num2 << " are: " << endl;
	for (i = num1; i <= num2; i++) {
		sum = 0;
		num = 1;
		
		for (; num > 0; num /= 10) {
			digit = num % 10;
			sum = sum + digit * digit * digit;
		}
		
		if (sum == 1) {
			cout << i << endl;
		}
	}
	return 0;
}

// add code to swap two number, to enter the larger number first
