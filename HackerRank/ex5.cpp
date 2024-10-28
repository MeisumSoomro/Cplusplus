#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Main function demonstrating various string operations.
 * 
 * This function performs the following operations on strings:
 * 1. Initializes three strings.
 * 2. Extracts a substring from the first string.
 * 3. Inserts a substring into the first string.
 * 4. Replaces a part of the first string with another substring.
 * 5. Erases a part of the first string.
 * 6. Outputs the modified first string.
 * 7. Outputs the extracted substring character by character.
 * 
 * @return int Exit status of the program.
 */
int main() {
  // Initialize the first string with a famous quote
  string str1 = "To be or not to be, that is the question";
  
  // Initialize the second string with a word to be inserted later
  string str2 = "only ";
  
  // Extract a substring from the first string starting at index 6 with length 12
  string str3 = str1.substr(6, 12);

  // Insert the second string into the first string at index 32
  str1.insert(32, str2);
  
  // Replace the first occurrence of "to be" with "to jump" in the first string
  str1.replace(str1.find("to be", 0), 5, "to jump");
  
  // Erase 4 characters from the first string starting at index 9
  str1.erase(9, 4);
  
  // Output the modified first string
  cout << str1 << endl;
  
  // Output the extracted substring character by character
  for (int i = 0; i < str3.length(); i++)
    cout << str3[i]; 
  cout << endl;

  return 0; // Exit status of the program
}
