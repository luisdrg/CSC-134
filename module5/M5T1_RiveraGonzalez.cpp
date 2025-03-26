// CSC 134
// M5T1
// Luis Rivera Gonzalez
// 3/26/25
// Declaring and defining functions

#include <iostream>
using namespace std;

// Declare functions
void show_message();
void greet_user(string user);
int double_a_number(int number);

int main() {
    cout << "Hello from main()" << endl;
    show_message();
    string user = "Bob";
    greet_user(user);

    int num;
    cout << "Enter an interger: ";
    cin >> num;
    int answer = double_a_number(num);
    cout << num <<  " doubled is " << answer << endl;

    return 0;
}

// Define functions

void show_message(){
    cout << "This is a message." << endl;
}
void greet_user(string name) {
    cout << "Hello, " << name << endl;
}
int double_a_number(int number){
    return number * 2;
}