#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal (int octalNumber);

int main () {
	int octalNumber;
	cout << "Enter an Octal number: ";
	cin >> octalNumber;
	cout << octalNumber << " in Octal = " << octalToDecimal(octalNumber) << " in decimal.";
	
	return 0;
}

// function to convert octal to decimal

int octalToDecimal (int octalNumber) {
	int decimalNumber = 0, i = 0, rem;
	while (octalNumber != 0) {
		rem = octalNumber % 10;
		octalNumber /= 10;
		decimalNumber += rem * pow(8, i);
		++i;
	}
	return decimalNumber;
}
