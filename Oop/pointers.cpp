#include <bits/stdc++.h>
using namespace std;

// acces the variable of an memory using the andpercent sign &
// pointer is used to locate the memory or address of another variable with asterisk sign *
// void,null,wild and dangling are types of pointers

main () {
	int a = 5, *ptr;
	ptr= &a;
	cout << "a=" << a << endl;
	cout << "a=" << *ptr << endl;
	return 0;
}

