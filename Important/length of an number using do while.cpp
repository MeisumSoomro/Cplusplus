#include<iostream>
using namespace std;
int main()
{
int num;
int i;

cout<<"Please enter a number to find its length"<<endl;
cin>>num;

do
{
num=num/10;
i++;
}
while(num>0);
cout<<"the length of the number is = "<<i<<endl;
system("pause");
}
