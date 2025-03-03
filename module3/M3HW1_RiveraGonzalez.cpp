// CSC 134
// M3HW1
// Luis Rivera Gonzalez
// 2/26/25


#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// helper function 
string makeLowerCase(string input) {
    string str = input;
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return tolower(c); });
    return str;
    }

void question1 (){
    cout << "---------------Q1---------------" << endl;

    string input;
    cout << "Hello, I’m a C++ program!\nDo you like me? Please type yes or no: ";
    cin >> input;
    input = makeLowerCase(input);

    if(input == "yes") {
        cout << "That’s great! I’m sure we’ll get along." << endl;
        return;
    } 

    if(input == "no") {
        cout << "Well, maybe you’ll learn to like me later." << endl;
        return;
    } 

    cout << "If you’re not sure… that’s OK." << endl;
}

void question2 (){
    cout << "\n\n---------------Q2---------------" << endl;
    // Set up the Variables
    string store_name = "Cookout";
    string food_name = "Burger";
    double food_price = 5.99;
    double tax_percent = 8.0;
    double tip_percent = 0;
    int quantity;
    double taxAmount, subtotal, total, tipAmount;
    int dineSelection;
    // Do the order
    cout << "Welcome to " << store_name << endl;
    cout << "We only sell burgers, each costing $" << food_price << endl;
    cout << "How many burgers do you want?: ";
    cin >> quantity;
    cout << "Please enter 1 if the order is dine-in, 2 if it is to go: ";
    cin >> dineSelection;
    if (dineSelection == 1) {
        tip_percent = 15.0;
    }

    // Figure out the subtotal and total
    subtotal = quantity * food_price;
    taxAmount = subtotal * (tax_percent / 100);
    tipAmount = subtotal * (tip_percent / 100);
    total = subtotal + taxAmount + tipAmount;

    //Print the receipt
    cout << "\nYOUR RECEIPT\n";
    cout << "---------------------------\n";
    cout << food_name << " x" << quantity << endl; 
    cout << "---------------------------\n";
    cout << "Subtotal: \t$" << subtotal << endl;
    cout << "Tip: \t\t$" << fixed << setprecision(2) << tipAmount << endl;
    cout << "Tax: \t\t$" << fixed << setprecision(2) << taxAmount << endl;
    cout << "---------------------------\n";
    cout << "Total: \t\t$" << total << endl;
    cout << "Have a nice day!\n\n";
}
int main() {
    //question1();
    question2();
    return 0;
}

