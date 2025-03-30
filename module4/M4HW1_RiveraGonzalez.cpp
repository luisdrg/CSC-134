// CSC 134
// M4HW1
// Luis Rivera Gonzalez
// 3/29/25
// Using loops to create Table of squares

#include <iostream>
using namespace std;

void part1();
void part2();
void part3();

int main() {

    part1();
    //part2();
    //part3();

    return 0;
}

// Part 1 - Bronze
void part1() {
    int number = 5;
    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
}

// Part 2 - Silver
void part2() {
    int number;
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
}

// Part 3 - Gold
void part3() {
    int number;

    // Input validation
    do {
        cout << "Enter a number from 1 to 12: ";
        cin >> number;
        if (number < 1 || number > 12) {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (number < 1 || number > 12);

    // Times table loop
    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
}

