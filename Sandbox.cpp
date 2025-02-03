//Place to test out code
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// Set up the Variables
string store_name = "Cookout";
string food_name = "Burger";
double food_price = 5.99;
double tax_percent = 8.0;
int quantity;
double taxAmount, subtotal, total;

// Do the order
cout << "Welcome to " << store_name << endl;
cout << "We only sell burgers, each costing $" << food_price << endl;
cout << "How many burgers do you want?: ";
cin >> quantity;

// Figure out the subtotal and total
subtotal = quantity * food_price;
taxAmount = subtotal * (tax_percent / 100);
total = subtotal + taxAmount;
//Print the receipt
cout << "\nYOUR RECEIPT\n";
cout << "---------------------------\n";
cout << food_name << " x" << quantity << endl; 
cout << "---------------------------\n";
cout << "Subtotal: \t$" << subtotal << endl;
cout << "Tax: \t\t$" << fixed << setprecision(2) << taxAmount << endl;
cout << "---------------------------\n";
cout << "Total: \t\t$" << total << endl;
cout << "Have a nice day!\n\n";

}