#include <bits/stdc++.h>
using namespace std;
main () 
{
	int a = 5;
	void *ptr;
	ptr = &a;
	//void ptr cant be printed without an typecast
	cout << *(int *)ptr;
	return 0; 
}
