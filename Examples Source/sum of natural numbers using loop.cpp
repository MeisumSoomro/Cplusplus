// takes positive integers from user and prints all natural numbers

#include <iostream>
using namespace std;

int main () {
	int n, sum = 0;
	
	cout << "Enter a positive integer: ";
	cin >> n;
	
	for (int i= 1; i <= n; ++i) {
		sum += 1;
	}
	
	cout << "Sum = " << sum;
	return 0;
}
