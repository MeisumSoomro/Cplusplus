#include <bits/stdc++.h>
using namespace std;

// Variables ddress is taken and passed in a function as parameter
// it can also chnage the value of the the actual variable as well

void func(int *x) {
	*x=200;
	cout << "The value of func functon now is" << x << endl;
}
main () {
	int x=100;
	func(&x);
	cout << "x=" << x << endl;
	return 0;
}
