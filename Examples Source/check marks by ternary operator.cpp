#include <iostream>
#include <string>
using namespace std;

int main () {
	double marks;
	
	//takes input from user
	cout << "Enter your marks: ";
	cin >> marks;
	
	// ternary operators checks if
	// marks is greater than 40
	string result = (marks >= 40) ? "passed" : "failed";
	
	cout << "You " << result << " the exams.";
	
	return 0;
}
