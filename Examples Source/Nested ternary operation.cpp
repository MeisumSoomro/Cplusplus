// ternary operation to find whether a
// number is positive, negative or zero

#include <iostream>
#include <string>
using namespace std;

int main () {
	int number= 0;
	string result;
	
	// nested ternary operator
	result = (number == 0) ? "zero" : ((number > 0) ? "Postiive" : "Negative");
	
	cout << "Number is " << result;
	
	return 0;
}
