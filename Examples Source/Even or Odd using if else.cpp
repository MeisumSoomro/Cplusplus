// integers divisble by 2 are even and those that are not are odd numbers
//check by calculating the remainder when it is divided by 2 useing the modulus operator
// if the remainder is zero, then the integer is even and if not its odd

#include <iostream>
using namespace std;

int main () {
	int n;
	
	cout << "Enter an intger: ";
	cin >> n;
	
	if ( n % 2 == 0)
		cout << n << " is even. ";
	else
		cout << n << " is odd. ";
		
	return 0;	
		
	}
