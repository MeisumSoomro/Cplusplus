// all years divisble by 4 are leap years except centru years end with 00

#include <iostream>
using namespace std;

int main () {
	int year ;
	
	cout << "Enter a year: ";
	cin >> year;
	
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 ==0)
				cout << year << " is a leap year. ";
			else
				cout << year << " is not a leap year. ";
		}
		
		else
			cout << year << " is not a leap year.";
	}
	
	else
		cout << year << "is not a leap year." ;
		
	return 0;
}

// divisible by 4, inner if statement to check year is divisible by 100
// if not divisible by 100, it is divisible by 4 and a leap year
// century years are not leap years unless they are divisible 400
// so if year is divisible by 100, another inner if statemement checks if it is divisible by 400
// that innermost if statement determines whether it is a leap year or not
