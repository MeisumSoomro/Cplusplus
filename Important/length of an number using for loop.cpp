#include<iostream>
using namespace std;
int main()
{
int num;
int i;

cout<<"Please enter a number to find its length"<<endl;
cin>>num;

for(;num>0; i++)
{
num=num/10;
}
cout<<"the length of the number is = "<<i<<endl;
system("pause");
}
