#include <bits/stdc++.h>
using namespace std;
main () {
	int arr[7]= {2,3,5,7,11,13,17};
	int *ptr;
	ptr =&arr[0];
	int n = 2;
	for (int i=0;i<7;i++) {
		cout << *ptr << endl;
		ptr = ptr+n;
	}
	return 0;
}
