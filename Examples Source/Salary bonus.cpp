#include <iostream>
using namespace std;
int main ( ) {
	int salary,service;
	float salary_bonus;
	cout << "Please Enter your Year of Service";
	cin >>service;
	
	if (service) {
		cout << "Please Enter your Salary";
		cin >>salary;
		salary_bonus=salary*0.5;
		cout << "Your salary with bonus" <<salary;
	}
	
	else {
		cout << "Your not Eligible for Bonus";
	}
}
