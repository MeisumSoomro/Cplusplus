#include <iostream>
using namespace std;

int main () {
	int low, high, temp, i;
	bool isPrime;
	
	cout << "Enter two numbers (intervals): ";
	cin >> low >> high;
	
	//swapping number if low is greater than high
	if (low > high) {
		temp = low;
		low  = high;
		high = temp;
	}
	cout << "/nPrime numbers between " << low << " and " << high << " are:" << endl;
	
	while (low < high) {
		isPrime = true;
		if (low == 0 || low == 1) {
			isPrime = false;
		}
		
		else {
			for (i = 2; i <= low / 2; ++i) {
				if (low % i == 0) {
					isPrime = false;
					break;
				}
			}	
		}
		
		if (isPrime)
		cout << low << " ";
		
	++low;	
	}
	
	return 0;
}
