#include<iostream>
using namespace std;
int main()
{
	char character='A';
	do
	{
		cout<<character<<" ";
		character++;
	}
	while(character<='Z');
	cout<<endl;
	return 0;
}
