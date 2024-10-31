#include <iostream>
using namespace std;

int main()
{
    float kmph, mph;
	cout << "\n\n Convert kilometers per hour to miles per hour :\n";
	cout << "----------------------------------------------------\n";	
    cout << " Input the distance in kilometer : ";
    cin >> kmph;
	mph = (kmph * 0.6213712); 
    cout << " The "<< kmph <<" Km./hr. means "<< mph << " Miles/hr." << endl;
	cout << endl;
    return 0;
}	
