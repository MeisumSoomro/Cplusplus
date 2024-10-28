#include <iostream> // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard library names

int main() {
    // Print the header row of numbers from 1 to 9, separated by tabs
    cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << " " << endl;

    // Outer loop to iterate through numbers 1 to 9 (for the rows)
    for (int c = 1; c < 10; c++) {
        // Print the current row number followed by a vertical bar and a space
        cout << c << "| ";

        // Inner loop to iterate through numbers 1 to 9 (for the columns)
        for (int i = 1; i < 10; i++) {
            // Print the current column number followed by a tab
            cout << i << '\t';
        }
        // Move to the next line after printing all columns for the current row
        cout << endl;
    }
    return 0; // Return 0 to indicate successful execution
}
