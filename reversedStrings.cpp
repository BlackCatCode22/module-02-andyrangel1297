// "reversedStrings Assignment" - Andy Rangel
// 02-04-2024

#include <iostream>
#include <string>

using namespace std;

// function prototype for reverseString
string reverseString(string);

int main() {

    // Variable that takes string from user
    string userString;

    // Asks user for string
    cout << "Enter a string: ";
    cin >> userString;

    // Calls reverseString function and prints the reversed string
    cout << "Reversed string: " << reverseString(userString) << endl;

    return 0;

}

// Function that takes a string and reverses it
string reverseString(string str) {

    // Variable that will hold the reversed string
    string reversedString;

    // For loop that iterates through the string and adds each character to the reversedString
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedString += str[i];
    }

    // Returns the reversed string
    return reversedString;

}