#include <iostream>
using namespace std;

int main () {
	int n, i;
	float num[100], sum=0.0, average;
	
	cout << "Enter the number of data. ";
	cin >> n;
	
	while (n > 100 || n <=0) {
		cout << "Error! number should be in range of (1 to 100). " << endl;
		cout << "Enter the number again: ";
		cin >> n;
	}
	
	for (i = 0; i < n; ++i) {
		cout << i + 1 << ". Enter Number: ";
		cin >> num[i];
		sum += num[i];
	}
	
	average = sum / n;
	cout << "Average = " << average;
	
	return 0;
}
