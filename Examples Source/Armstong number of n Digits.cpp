#include <iostream>
#include <cmath>
using namesapce std;

int main () {
	int num, oroginalNumber, remainder, n = 0, result = 0, power;
	cout << "Enter an integer: ";
	cin >> num;
	
	originalNum = num;
	
	while (originalNum !=0) {
		originalNum /= 10;
		++n;
	}
	originalNum = num;
	
	while (orignal Num !=0) {
		remainder = originalNum % 10;
		
		// pow() return a double value
		// round() returns the quivalent int
		power = round(pow(remainder, n));
		result += power;
		OriginalNum /= 10;
	}
	
	if (result == num)
		cout << num << " is an Armstrong number.";
	else
		cout << num << " is not an Armstrong number";
		
	return 0;
}
