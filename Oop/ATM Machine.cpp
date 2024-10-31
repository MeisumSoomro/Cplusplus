#include<iostream> 
using namespace std;
int main (){
int totalThousand =1;
int totalFiveFundred =1;
int totalOneHundred =1;
long withdrawAmount;
long totalMoney;
int thousand=0,fiveHundred=0,oneHundred=0;
cout<<"Enter the amount in multiple of 100: "<<endl;
cin>>withdrawAmount;
if(withdrawAmount %100 != 0){
cout<<"Invalid amount;"<<endl;
return 0;
}
totalMoney = totalThousand * 1000 + totalFiveFundred* 500 + totalOneHundred*100;
if(withdrawAmount > totalMoney){
cout<<"Sorry,Insufficient money"<<endl;
return 0;
}
thousand = withdrawAmount / 1000;
if(thousand > totalThousand)
thousand = totalThousand;
withdrawAmount = withdrawAmount - thousand * 1000;
if (withdrawAmount > 0){
fiveHundred = withdrawAmount / 500;
if(fiveHundred > totalFiveFundred)
fiveHundred = totalFiveFundred;
withdrawAmount = withdrawAmount - fiveHundred * 500;
}
if (withdrawAmount > 0)
oneHundred = withdrawAmount / 100;
cout<<"Total 1000 note: "<<thousand<<endl;
cout<<"Total 500 note: "<<fiveHundred<<endl;
cout<<"Total 100 note: "<<oneHundred<<endl;
return 0;}
