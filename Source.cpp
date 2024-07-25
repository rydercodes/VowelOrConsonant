#include <iostream>
#include <string>   // for std::string
#include <cctype>   // for std::tolower, std::isalpha

using namespace std;

int main() {
    while (true)
    {
        cout << "Enter a character: ";
        string input;
        cin >> input;

        // Check if input is valid
        if (input.empty() || input.length() != 1 || !isalpha(input[0])) {
            cout << "Input is not a valid character. Exiting..." << endl;
            break;
        }
        // Convert to lowercase
        char ch = tolower(input[0]);

        // Check if the character is a vowel
        if (string("aeiou").find(ch) != string::npos) {
            cout << "It is a vowel." << endl;
        }
        else {
            cout << "It is a consonant." << endl;
        }
    }
	return 0;
}