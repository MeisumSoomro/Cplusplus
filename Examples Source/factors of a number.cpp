// factors of an integer using loop and if statement
// takes a positive integer to find factors of that number

#include <iostream>
using namespace std;

int main () {
	int n, i;
	
	cout << "Enter a positive integer: ";
	cin >> n;
	
	cout << "Factors of " << n << " are: ";
	for (i = 1; i <= n; ++i) {
		if (n % i == 0)
			cout << i << " ";
	}
	return 0;
}

// integer enetered is stored in a variable
// checks if number divisible by the initial condition which will be the factor of n
// balue is increased by each iteration in ++i

