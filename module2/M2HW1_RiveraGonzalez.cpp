/*
CSC 134
M2HW1 - Gold
Luis Rivera Gonzalez
2/10/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//---------------------------------------------------------------- Question 1 ----------------------------------------------------------------
    cout << "-------------------------------- Question 1 --------------------------------" << endl;
    string name;
    double balance, deposit, withdrawal;
    // Use current time as seed for random generator
    srand(time(0));
    int account_number = rand();

    // Get user information
    cout << "\t\t\t---WELCOME TO LIBERTY BANKING---\n" << endl;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Enter account balance: $";
    cin >> balance;
    cout << "Deposit ammount: $";
    cin >> deposit;
    balance += deposit;
    cout << "Withdrawal ammount: $";
    cin >> withdrawal;
    balance -= withdrawal;

    cout << "\n---Account Information---" << endl;
    cout << "Name: " << name << endl;
    cout << "Account #: " << account_number << endl;
    cout << "Balance: $" << fixed << setprecision(2) << balance << endl;

//---------------------------------------------------------------- Question 2 ----------------------------------------------------------------

// Question 2. Use the M2LAB1 program as a base for this question.
// General Crates has found that the updated cost per cubic foot for storage is now 0.3, due to economic fluctuations.
// Management has determined that they cannot currently raise their charge per cubic foot above 0.52 without losing customers.
// Modify the program to match these new conditions.
// (Suggested improvements: print all money amounts with two decimal places. The technique to do this is found in the “Gaddis Chapter 3 Slides” under Resources.)

    cout << "\n\n-------------------------------- Question 2 --------------------------------" << endl;

    return 0;
}
