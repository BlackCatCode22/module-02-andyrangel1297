// "largestOfThree" Assignment - Andy Rangel
// 02-04-2024

#include <iostream>

using namespace std;

// prototype for comparison function
int largestOfThree(int, int, int);

int main() {

    // create variables to store user input
    int num1, num2, num3;

    // prompt user for three integers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // call function to compare the three integers
    int largest = largestOfThree(num1, num2, num3);

    return 0;
}

// function to compare three integers
int largestOfThree(int num1, int num2, int num3) {

    // create variable to store the largest number and then compare to other two numbers
    int largest = num1;

    // compare first number to second and then to third using nested if statements
    if (num2 > largest) {
        largest = num2;

        if (num3 > largest) {
            largest = num3;
        }
    } else if (num3 > largest) {
        largest = num3;
    }

    // output the largest number
    cout << "The largest number is: " << largest << endl;

    return largest;
}