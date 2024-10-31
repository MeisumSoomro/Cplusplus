#include<iostream>
//adding the header file
using namespace std;
//adding the namespace
int main()
//main function
{
//start of main
int num;
// integer type variable num declaration
int a=0;
// integer type variable a declaration and initialziation with 0
cout<<"Please Enter any number : ";
//display message same to same
cin>>num;
//take value of variable num from the user.
while(num>0)
//loop 
{
num=num/10;
//divide the number with 10, and the result will be 5698/10 = 570
//divide the 570 with 10, and the result will be 570/10 = 57
//divide the 57 with 10, and the result will be 57/10 = 6
//divide the 6 with 10. and the result will be 6/10 = 0
a++;
//increment the loop
}
//ending of loop
cout<<"Number of digits in given number is: "<<a;
//display message and print the variable of variable a
}//ending of main function
