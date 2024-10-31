#include <iostream>
using namespace std;

int main () {
	int number = 30;
	int *p; // access the value address of an variable
	p = &number; // stores the address of number variable
	
	cout << "Address of Number Variable is:" << &number << endl;
	cout << "Address of p variable is:" << p << endl;
	cout << "Value of p variable is:" << p << endl;
	return 0;
}
