/*
    This program generates a random number between 1 and 100 and prompts the user to guess the number.
    It provides feedback on whether the guess is too high or too low until the correct number is guessed.
*/

#include <iostream>
#include <time.h>
using namespace std;

int main () {
  int random_number, guess;

  // Initialize random seed.
  srand(time(NULL));

  // Generate random number between 1 and 100
  random_number = rand() % 100 + 1;

  cout << "Guess our number (1 to 100) ";
  do {
    // Check if the input is a valid number
    if (!(cin >> guess)) {
      cout << "Please enter only numbers" << endl;
      cin.clear(); // Clear the error flag on cin
      cin.ignore(10000, '\n'); // Ignore the invalid input
    } else {
      // Provide feedback if the guess is too high
      if (random_number < guess) {
        cout << "The secret number is lower than " << guess << endl;
      // Provide feedback if the guess is too low
      } else if (random_number > guess) {
        cout << "The secret number is higher than " << guess << endl;
      }
    }
  } while (random_number != guess); // Continue until the correct number is guessed

  cout << "Congratulations!" << endl; // Congratulate the user for guessing correctly
  return 0; // Return 0 to indicate successful completion
}
