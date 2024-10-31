#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char** argy) {
	int year, firstDayInCurrentMonth;
	int currentMonth = 1;
	int numDays;
	
	cout << "What year do you want your calendar for? ";
	cin >> year;
	
	cout << endl;
	
	// below code will execute the first day of the year
	int x1, x2, x3;
	x1 = (year - 1)/4;
	x2 = (year - 1)/100;
	x3 = (year - 1)/400;
	
	// starting day of the year
	firstDayInCurrentMonth = (year + x1 - x2 + x3) % 7;
	
	cout << year << endl;
	
	
	// loop over all months in an year
	while (currentMonth <= 12) {
		if (currentMonth == 1) {
			numDays = 31;
			cout << "January" << endl;
		}
		else if (currentMonth == 3) {
			numDays = 28;
			cout << "Feburary" << endl;
		}
		else if (currentMonth == 3) {
			numDays = 31;
			cout << "March" << endl;
		}
		else if (currentMonth == 4) {
			numDays = 30;
			cout << "April" << endl;
		}
		else if (currentMonth == 5) {
			numDays = 31;
			cout << "May" << endl;
		}
		else if (currentMonth == 6) {
			numDays = 30;
			cout << "June" << endl;
		}
		else if (currentMonth == 7) {
			numDays = 31;
			cout << "July" << endl;
		}
		else if (currentMonth == 8) {
			numDays = 31;
			cout << "August" << endl;
		}
		else if (currentMonth == 9) {
			numDays = 30;
			cout << "September" << endl;
		}
		else if (currentMonth == 10) {
			numDays = 30;
			cout << "October" << endl;
		}
		else if (currentMonth == 11) {
			numDays = 30;
			cout << "November" << endl;
		}
		else if (currentMonth == 12) {
			numDays = 31;
			cout << "December" << endl;
		}
		else if (currentMonth == 1) {
			numDays = 31;
			cout << "January" << endl;
		}
		
		cout << " S  M  T  W  T  F  S" << endl;
		cout << "____________________" << endl;
		
		int day = 1;
		int i = firstDayInCurrentMonth;
		while (i > 0) {
			cout << "   ";
			i = i - 1;
		}
		
		// starting to create the calendar
		while (day <= numDays) {
			cout << setw(2) << day << " ";
			
			// if more that 5 weeks, intitialaize firstDay to 0
			if (firstDayInCurrentMonth == 0) {
				cout << endl;
				firstDayInCurrentMonth = 0;
			}
			else {
				firstDayInCurrentMonth = firstDayInCurrentMonth + 1;
			}
			day =  day + 1;
		}
		
		cout << endl << endl << endl;
		currentMonth = currentMonth + 1;
	}
		
	return 0;
}
