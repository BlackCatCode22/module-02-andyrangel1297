// "funWithFunctions" Assignment - Andy Rangel
// 02-04-2024

#include <iostream>

using namespace std;

// prototypes for three functions
int getAnIntFromTheUser();
void compareTwoInts(int, int);
void sumTwoInts(int, int);

int main() {

    // call on function to get integers from user and store them in variables
    int firstInt = getAnIntFromTheUser();

    // show user first integer
    cout << "The first integer is: " << firstInt << "\n";

    int secondInt = getAnIntFromTheUser();

    // show user second integer
    cout << "The second integer is: " << secondInt << "\n";

    // call on function to compare the two integers
    compareTwoInts(firstInt, secondInt);

    // call on function to sum the two integers
    sumTwoInts(firstInt, secondInt);

    return 0;
}

// function to get integers from user
int getAnIntFromTheUser() {
    int userInt;
    cout << "Please enter an integer: ";
    cin >> userInt;
    return userInt;
}

// function to compare two integers
void compareTwoInts(int firstInt, int secondInt) {
    if (firstInt == secondInt) {
        cout << "The two integers are equal." << endl;
    } else if (firstInt > secondInt) {
        cout << "The first integer is greater than the second integer." << endl;
    } else {
        cout << "The second integer is greater than the first integer." << endl;
    }

    return;
}

// function to sum two integers
void sumTwoInts(int firstInt, int secondInt) {
    int sum = firstInt + secondInt;
    cout << "The sum of the two integers is: " << sum << endl;
    return;
}