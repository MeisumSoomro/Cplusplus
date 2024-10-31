#include <iostream>
using namespace std;
int main ( ) {
	float num1,num2,a;
	int c;
	cout << "For Addition press 1\nFor Subtraction Press 2\nFor Multiplication Press 3\nFor Division Press 4\n";
	cin >>c;
	cout << "Enter any two integers";
	cin >>num1;
	cin >>num2;
	
	switch(c) {
		case 1:
		a=num1+num2;
		cout << "=" <<a;
		break;
		
		case 2:
		a=num1-num2;
		cout << "=" <<a;
		break;
		
		case 3:
		a=num1*num2;
		cout << "=" <<a;
		break;
		
		case 4:
		a=num1/num2;
		cout << "=" <<a;
		break;
		default:
		return 0;
	}
}
