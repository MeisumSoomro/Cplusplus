// code replaced by ternary operator

//#include <iostream>
//using namespace std;
//int main() {
  //int number = -4;
  //if (number > 0)
  //  cout << "Positive Number";
  //else
  //  cout << "Negative Number!";
  //return 0; }
  
  
// ternary opeartion to find number is positive or negative
#include <iostream>
#include <string>
using namespace std;

int main () {
	int number = -4;
	string result;
	
	// using ternary operator
	result = (number > 0) ? " Positive Number: " : " Negative Number: ";
	
	cout << result << endl;
	
	return 0;
}
