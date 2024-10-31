/* program that takes units as input from the user, 
and unit rates are assigned by the programmer and the program
calculates the electricity bill. */

#include<iostream>
using namespace std;
int main()
{
	int rate1, rate2, units, bill;
	rate1=5; // charges
	rate2=10;
	cout<<"enter units consumed by cient:"<<endl;
	cin>>units;
	if(units<250) // charges change of greater than number
	{
		bill=units*rate1;
		cout<<"totoal bill is"<<bill<<endl;
	}
	else
	{
		bill=units*rate2;
		cout<<"totoal bill is"<<bill<<endl;
	}
}
