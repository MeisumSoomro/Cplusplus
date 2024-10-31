#include <bits/stdc++.h>
using namespace std;

// increment and decrement to an pointer in array

main () {
	int arr [3]={2,3,5};
	int *ptr;
	ptr=&arr[0]; // change value to 3 for decrement
	for (int i=0;i<3;i++) {
		cout << *ptr << endl;
		tr++; // -- sign to decrement	
		}
	return 0;
}
