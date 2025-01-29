// CSC 134
// M2T1
// Luis Rivera Gonzalez
// 1/29/25

#include <iostream>
using namespace std;

int main() {

// Declare variables
double mealPrice = 10.00;
double taxPercent = 7.50;
double taxAmount;
double total;

cout << "Meal Price: $" << mealPrice << endl;
cout << "Tax Percent: " << taxPercent << "%" <<endl;

//Calculate Tax amount and Total
taxAmount = mealPrice * (taxPercent / 100);
cout << "Tax Amount: $" << taxAmount << endl;
total = mealPrice + taxAmount;

// Print the results
cout << "Total Price: $" << total << endl;
}