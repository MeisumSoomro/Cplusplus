#include <bits/stdc++.h>
using namespace std;
main () {
	int a[3]={2,3,5};
	int *ptr[3];
	for (int i=0;i<3;i++) {
		ptr[i]=&a[i];
	}
	for (int i=0;i<3;i++) {
		cout << *ptr [i] << endl;
	}
	return 0;
}
