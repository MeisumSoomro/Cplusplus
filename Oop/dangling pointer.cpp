#include <bits/stdc++.h>
using namespace std;

// points to an deleted variable if we deallocate this memory, hence called danglisg
// deallocate memory using free() func 

main ()
{
	int *ptr=(int *)malloc(sizeof(int));
	int a =5;
	ptr= &a;
	free (ptr);
	cout << *ptr;
	return 0;
}
