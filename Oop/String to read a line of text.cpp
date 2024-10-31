// string to read a line of text with spaces
#include <iostream>
using namespace std;

int main () {
	char str[100];
	cout << "Enter a string:";
	
	// the below function is used to print the output of an string
	// it takes two arguements, name and maximum size of the array
	cin.get(str, 100);
	
	cout << "You entered: " << str << endl;
	return 0;
}
