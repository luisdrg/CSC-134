// CSC 134
// M2T1
// Luis Rivera Gonzalez
// 1/29/25

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

string user_name;
string farm_name = "Homestead";
int num_apples = 100;
double pricePerApple = 0.23;
double total_cost;
double apples_to_buy;

cout << "Hello! What's your name? ";
cin >> user_name;
cout << "Thanks for coming by, " << user_name << "!" << endl;
cout << "Welcome to " << farm_name << "'s apple farm." << endl;
cout << "There are " << num_apples << " apples in stock." << endl;
cout << "They cost $" << pricePerApple << " each." << endl;

// Calculate total price
total_cost = num_apples * pricePerApple;
cout << "The price for all of them is: $" << total_cost << endl;

// Ask how many the user wants
cout << "How many apples ould you like?: ";
cin >> apples_to_buy;

total_cost = apples_to_buy * pricePerApple;

cout << "Thank you! " << apples_to_buy << " apples comes to $" << total_cost << endl;
cout << "Have a nice day!" << endl;
cout << endl;

return 0; //no errors
}