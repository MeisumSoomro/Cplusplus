// check if number entered is an Amrstrong numner
// positive integer is called an Armstrong number

// Armstrong number of 3 digits, the sum of cubes of each digit
// is equal to the number itself.

#include <iostream>
using namespace std;

int main () {
	int num, originalNum, remainder, result = 0;
	cout << " Enter a three digit number: ";
	cin >> num;
	originalNum = num;
	
	while (originalNum !=0) {
		// remainder contains the last digit;
		remainder = originalNum /= 10;
		
		result += remainder * remainder * remainder;
		
		// removing last digit from the original number
		originalNum /= 10;
	}
	
	if (result == num)
		cout << num << " is an Armstrong number.";
	else
		cout << num << " is not an Armstrong number.";
		
	return 0;
}

//we iterate through the while loop until originalNum is 0.
//In each iteration of the loop, the cube of the last digit of orignalNum is added to result.

//remainder = originalNum % 10;        
//result += remainder * remainder * remainder;

//And, the last digit is removed from the orignalNum.
//When the loop ends, the sum of the individual digit's cube is stored in result.
