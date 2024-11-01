#include <iostream>
#include <iomanip>
using namespace std;

/* string getMonthName(int monthNumber) 
{ 
    string months[] = {"January", "February", "March", 
                    "April", "May", "June", 
                    "July", "August", "September", 
                    "October", "November", "December"
                    }; 

    return (months[monthNumber]); 
}  */

// code to implement have a function or array which returns the month name as a string,
// so that you can loop through the 12 month

    int GetFirstDay(int year);
	int main () {
        int year, numdays;
        int month = 1;
        // getting the user to give the year
        cout << "Enter year: ";
        cin >> year;
        cout << "\n\n";

        // getting first day of given year
        int First_Day = GetFirstDay(year);
        while (month <= 12) {
            switch (month) {
            //Body
            case 1:
                numdays = 31;
                cout << "January" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 2:
                if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) { numdays = 29; }
                else { numdays = 28; }
                cout << "Febrary" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 3:
                numdays = 31;
                cout << "March" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 4:
                numdays = 30;
                cout << "April"<< endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 5:
                numdays = 31;
                cout << "May" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 6:
                numdays = 30;
                cout << "June" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 7:
                numdays = 31;
                cout << "July" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 8:
                numdays = 31;
                cout << "August" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 9:
                numdays = 30;
                cout << "September" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 10:
                numdays = 31;
                cout << "October" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 11:
                numdays = 31;
                cout << "November" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;

            case 12:
                numdays = 31;
                cout << "December" << endl;
                cout << "S  M  T  W  T  F  S" << endl;
                cout << "-------------------" << endl << endl;
                break;
            }
            month++;
        }



    }

    int GetFirstDay(int year) {
        int century = (year - 1) / 100;
        int y = (year - 1) % 100;
        int weekday = (((29 - (2 * century) + y + (y / 4) + (century / 4)) % 7) + 7) % 7;
        // 0 would be sunday and 6 would be Saturday
        return weekday;

     }
