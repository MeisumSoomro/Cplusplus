// computes and prints n! for a given n.
// uses several basic elements of C++

#include <iostream>
int main () {
	using namespace std;
	/* Declaration of variables */
	int factArg = 0;
	int fact (1);
	do {
		cout << "Factorioal of Variables: ";
		cin >> factArg;
			if ( factArg < 0 ) {
				cout << "No negative values, Please!" >> endl;
		}	
} while ( factArg < 0 );
int i = 2;
while ( i <= factArg ) {
	fact = fact * i;
	i = i + 1;
	}	
cout << "The Factioral of " << factArg << "is: " << fact << endl;
return 0;
}

