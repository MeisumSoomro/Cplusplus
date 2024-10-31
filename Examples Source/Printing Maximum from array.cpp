#include <iostream>
using namespace std;

void printMax (int arr[5]);
int main () {
	int arr1 [5] = {12, 24, 32, 48, 60};
	int arr2 [5] = {23, 34, 12, 68, 45};
	
	printMax (arr1); // passing array to function
	printMax (arr2);
}

void printMax (int arr[5]) {
	int max = arr[0];
	
		for (int i=0; i < 5; i++) {
			if (max < arr[i]) {
				max = arr[i];
			}
		}
	cout << "Maximum element is: " << max << "\n";
}
