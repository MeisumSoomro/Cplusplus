// reverses an integer using while loop
// if statement is used to check whether the reversed number is equal to roginal number

// takes an integer from user and that integer is reversed.
// If the reversed integer is equal to the integer entered by user then,
// that number is a palindrome if not that number is not a palindrome.

#include <iostream>
using namespace std;

int main () {
	int n, num, digit, rev = 0;
	
	cout << "Enter a positive number: ";
	cin >> num;
	
	n = num;
	
	do {
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	}
	while (num != 0);
	
	cout << " The reverse of the number is: " << rev << endl;
	
	if (n == rev)
		cout << " The number is a palindrome.";
	else
		cout << " The number is not a palindrome. ";
		
	return 0;
}


//In the above program, use is asked to enter a positive number which is stored in the variable num.

//The number is then saved into another variable n to check it when the original number has been reversed.

//Inside the do...while loop, last digit of the number is separated using the code 
//digit = num % 10;. This digit is then added to the rev variable.

//Before adding the digit to rev, we first need to multiply the current data in the rev variable 
//by 10 in order to add the digit to the nth place in the number.

// in the number 123, 3 is in the zeroth place, 2 in the oneth place and 1 in the hundredth place.

// to add another number 4 after 123, we need to shift the current numbers to the left,
// so now 1 is in the thousandth place, 2 in the oneth place, 3 is in the onethplace and 4 in the zeroth place.

//This is done easily by multiplying 123 by 10 which gives 1230 and adding the number 4, which gives 1234.
//The same is done in the code above.

//When the do while loop finally ends, we have a reversed number in rev. This number is then compared to the original number n.

//If the numbers are equal, the original number is a palindrome, otherwise it's not.
