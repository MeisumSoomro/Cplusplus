// two different techniques to swap numbers

#include <iostream>
using namespace std;

int main () {
	int a = 5, b = 10, temp;
	
	cout << "before swapping. " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "/nAfter swapping, " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	return 0;
}
