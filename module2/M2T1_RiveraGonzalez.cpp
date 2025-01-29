// CSC 134
// M2T1
// Luis Rivera Gonzalez
// 1/29/25

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare variables
double mealPrice = 10.00;
double taxPercent = 7.33;
double taxAmount;
double total;

cout << "Meal Price: $" << mealPrice << endl;
cout << "Tax Percent: " << taxPercent << "%" <<endl;

//Calculate Tax amount and Total
taxAmount = mealPrice * (taxPercent / 100);

// fixed << setprecision(2) is used to make it have only 2 decimal places. #include <iomanip> must also be added to use the function
cout << "Tax Amount: $" << fixed << setprecision(2) << taxAmount << endl;
total = mealPrice + taxAmount;

// Print the results
cout << "Total Price: $" << total << endl;
}