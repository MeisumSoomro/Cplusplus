// number of elements from user to store data in an array
// and display the largest number in that element using loops

#include <iostream>
using namespace std;

int main () {
	int i, n;
	float arr[100];
	
	cout << "Enter total number of elements (1 to 100): ";
	cin >> n;
	cout << endl;
	
	// store number entered by the user
	for (i = 0; i < n; ++i) {
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}
	
	// loop to store largest number to arr[0]
	for (i = 1;i < n; ++i) {
		
		// change < to > if you want to find the smallest element
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	
	cout << endl << "Largest element = " << arr[0];
	
	return 0;
}
