#include <bits/stdc++.h>
using namespace std;
// copies the variable's value to pass it in a fuction called paraeters
// midifies the parameter, ut doesnt changes the value of the actual variable
void func(int x) {
	x=200;
	cout << "in func functio x=" << x << endl;
}

main () {
	int x=10;
	func(x);
	cout << "x=" << x << endl;
	return 0;
}
