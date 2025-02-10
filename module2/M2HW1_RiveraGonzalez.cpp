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

    cout << "\n__________Account Information__________" << endl;
    cout << "Name: " << name << endl;
    cout << "Account #: " << account_number << endl;
    cout << "Balance: $" << fixed << setprecision(2) << balance << endl;

//---------------------------------------------------------------- Question 2 ----------------------------------------------------------------

    return 0;
}
