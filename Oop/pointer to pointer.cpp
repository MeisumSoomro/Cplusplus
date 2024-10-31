#include <bits/stdc++.h>
using namespace std;

main () {
	int var,*ptr1,**ptr2;
	var= 5;
	ptr1= &var;
	ptr2= &ptr1;
	cout << "var=" << var << endl << "*ptr1=" << *ptr1 << endl << "**ptr2" << **ptr2;
	return 0;
}
