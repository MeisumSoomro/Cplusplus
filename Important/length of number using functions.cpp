#include<iostream>
using namespace std;
int length(int,int&);
int main()
{
int n;
int p;

cout<<"Please enter a number to find its length"<<endl;
cin>>n;

length(n,p);
cout<<"the length of the number is = "<<p<<endl;
system("pause");

}

int length(int num, int &i)
{
i=0;
do
{
num=num/10;
i++;
}
while(num>0);

}
