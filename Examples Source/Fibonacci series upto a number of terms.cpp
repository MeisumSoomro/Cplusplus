// fibonacci sequence is a series where the next term is the sum of the previous two terms.
// first two terms of its sequence is 0 followed by 1
// 0, 1, 1, 2, 3, 5, 8, 13, 21

#include <iostream>
using namespace std;

int main () {
	int n, t1 = 0, t2 = 1, nextTerm = 0;
	
	cout << "Enter the number os series: ";
	cin >> n;
	
	cout << "Fibonacci Series: ";
	
	for (int i = 1; i <= n; ++i) {
		//prints the first two terms.
		if (i == 1) {
			cout << t1 << " , ";
			continue;
		}
		
		if (i == 2) {
			cout << t2 << " , ";
			continue;
		}
		
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		
		cout << nextTerm << " , ";
	}
	
	return 0;
}
