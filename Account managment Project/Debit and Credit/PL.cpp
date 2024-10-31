#include <iostream>
#include <string>
using namespace std;

int main () {
	
	cout << "Press 1 for Entry of credit";
	cout << "Press 2 for Entry of credit";
	cout << "Press 3 for Balance sheet";
	cout << "Press 4 for Total Profit/Loss ";
	cin >> 
	
	
	int debit, credit;
	if (debit < credit) {
		cout << "debit exceeded";
	}
	
	else () {
		balance = debit - credit;
	}
	
	if (credit < debit) {
		cout << "credit exceeded" << end1;
	}
	
	else () {
		balance = credit - debit;
	}
	
	
	int cp,sp,profit,loss;
	cout <<"enter cost price:" <<endl;
	cin>>cp;
	cout <<"enter selling price:" <<endl;
	cin>>sp;
	
	if (sp > cp) {
		profit=sp-cp;
		cout << "Profit of"<< profit <<endl;
	}
	
	else if (cp>sp) {
		loss=cp-sp;
		cout << "Loss of" << loss <<endl;
	}
	
	else {
		cout << "no profit or loss";
	}
}
