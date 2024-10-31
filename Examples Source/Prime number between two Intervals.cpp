// print all prime numbers between two number
// soled by using nested for loop an ifstatement

#include <iostream>
using namespace std;

int main () {
	int low, high, i;
	bool isPrime = true;
	
	cout << "Enter two numbers (intervals); ";
	cin >> low >> high;
	
	cout << "/nPrime numbers between " << low << " and " << high << " are: " << endl;
	
	while (low < high) {
		isPrime = true;
		if (low == 0 || low ==1) {
			isPrime = false;
		}
		else {
			for (i = 2; i <= low / 2; ++i) {
				if (low % i == 0) {
					isPrime = false;
				}
			}
		}
		if (isPrime)
			cout << low << " ";
			
		++low;
	}
	return 0;
}

// in each iteration, wheter lowdatatype is a prime number or not
// and the value of lowdatatype is incremented by ! until lowdatatype is equal to highdatatype

// if large number is entered first, program wont be run,
// and the issue will be resolved by swapping the number
