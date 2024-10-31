// Arithmetic caculator which takes two operands to perform operations

#include <iostream>
using namespace std;

int main () {
	char op;
	float num1, num2;
	
	cout << "Enter operator: +, -, *, /: ";
	cin >> op;
	
	cout << "Enter two operands: ";
	cin >> num1 >> num2;
	
	switch (op) {
		
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
			
		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
			
		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
			
		case '/':
			cout << num1 << " / " << num2 << " = " << num1 / num2;
			break;
			
		default:
			// Prints error message if any other operand
			cout << "Error! Invalid operator";
			break;
	}
	return 0;
}
