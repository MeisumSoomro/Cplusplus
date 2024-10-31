#include<iostream>
using namespace std;

class Account{
	public:
	void credit(){
	  float amount;
	  int balance;
      void display();
      cout<<"Enter amount:";
      cin>>amount;
      balance=balance+amount;
      display();
	}
	void debit(){
	  float amount;
	  int balance;
      void display();
      cout<<"Enter amount:";
      cin>>amount;
      
	  if(balance<amount)
         cout<<"Insufficient balance\n";
      
	  else  {
	  	
	  }
         balance=balance-amount;
      display();
      
	}
	
};

int main()
{
	Account A;
	int option;
	cout<<"Enter an option: ";
	cin>>option;
	
	if(option==1)
	goto credit;
	
	else
	goto debit;
	credit:
		cout<<"Crediting";
		A.credit();
	debit:
		cout<<"Debiting";
		A.debit();
}
