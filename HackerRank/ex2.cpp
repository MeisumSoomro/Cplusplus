// get input.cpp
// illustrate use of cin for inout

#include <iostream>
using namespace std;

int main() {
    int input_var = 0;

    // enter the do while loop and there until either
    // a non numeric number is entered, or -1
    // cin accepts any interger

    do {
        cout << "Enter a number (-1 or quit): ";

        // the following line accepts input
        // into variable input_var.
        // cin returns false if input operation fails
        // if something else is int

        if (!(cin >> input_var)) {
            cout << "You entered a non-numeric, Exiting...." << endl;
            // break;
                // exit do while loops
            
            cin.clear();
            cin.ignore(10000, '\n');

        }
        if (input_var != -1) {
            cout << "You entered " << input_var << endl;
        }
    }
    while (input_var != -1);
    cout << "all done. " << endl;

    return 0;
}