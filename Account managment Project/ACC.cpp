#include <iostream>
using namespace std;

int main()
{
	
}


void credit()
	{
		in << setw(10) << "|";
		cout << "\n\n\t ENTER CREDIT ENTRY:  ";
		cin >> to;

		in << setw(40) <<"to "<< to;
		cout << "\n\n\t ENTER CREDIT AMOUNT:   ";
		cin >> amount;

		in << setw(50) << amount << endl;
	}
	void debit()
	{
		cout << "\n\n\t ENTER DATE OF ENTRY:   ";
		cin.clear();
		//cin.ignore();
		cin.clear();
		//cin.fill();

		getline(cin, date);
		if (count > 1)
		{
			getline(cin, date);
		}

		in << date;
		cout << "\n\n\tENTER DEBIT ENTRY:   ";
		cin.clear();
	//	cin.ignore();
		cin.clear();

		getline(cin, from);
		in << setw(20) << from;
		cout << "\n\n\tENTER DEBIT AMOUNT:  ";
		cin >> amount;
		in << setw(70) << amount << endl;
	}
