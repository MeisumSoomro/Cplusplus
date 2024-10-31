// checking if the alaphabets are vowels or consonants

#include <iostream>
using namespace std;

int main () {
	char c;
	bool isLowerCaseVowel, isUpperCaseVowel;
	
	cout << "Enter an alphabet";
	cin >> c;
	
	// evaluate to 1 (true) if c is a lowercase vowel
	isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	
	// evaluates to 1 (true) if c is a Uppercase vowel
	isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	// shows error message if c is not an alphabet
	if (!isalpha(c))
		printf("Error! Non-alphabetic character.");
	else if (isLowerCaseVowel || isUpperCaseVowel)
		cout << c << " is a vowel. ";
	else
		cout << c << " is a consonant. ";
	
	return 0;
}

// Lowercase value evaluates true if c is lowercsase
// hence for upper case, unless both are true
// then character is consonant

// isalpha function checks whether the character entered
// is an alphabet character or prints and error message
