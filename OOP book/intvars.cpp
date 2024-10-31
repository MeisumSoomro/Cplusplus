// intvars.cpp
//demonstrates variables and comments 

#include <iostream>		//preprocessor directive
using namespace std;	// using directive

int main () {
	int var1;	//define var1
	int var2;	//define var2
	
	var1 = 20;			//assigning value
	var2 = var1 + 10;	//assigning value
	
	cout << "var1 + 10 is ";		//output text
	cout << var2 << endl;		//output value of var2
	return 0;
}
