// CSC 134
// M3T2
// Luis Rivera Gonzalez
// 2/24/25
//

#include <iostream>
// for pseudo-random numbers
#include <cmath>    
// for making it truly random
#include <ctime>

using namespace std;

int main() {

    cout << "Let's roll some dice!" << endl;
    srand(time(0));

    const int MAX = 6; // numbers from 1-6
    int roll1, roll2, total;
    roll1  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll1 << endl;

    roll2  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

    // add our constants
    // Lose on 2, 3, 12
    const int SNAKE_EYES = 2;
    const int UNLUCKY_THREE = 3;
    const int BOX_CARS = 12;

    // Win on 7 or 11
    const int LUCKY_SEVEN = 7;
    const int LUCKY_ELEVEN = 11;


    if (LUCKY_SEVEN == total) {
        cout << "Lucky seven! You win!" << endl;
    }
    else if (LUCKY_ELEVEN == total) {
        cout << "Eleven is a winner!" << endl;
    }
    else if (SNAKE_EYES == total) {
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else if (UNLUCKY_THREE == total) {
        cout << "Sorry, three is unlucky, you lose." << endl;
    }
    else if (BOX_CARS == total) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else {
        // anything else
        cout << "Your point is " << total << " but we'll do that part later" << endl;
    }

    return 0;
}