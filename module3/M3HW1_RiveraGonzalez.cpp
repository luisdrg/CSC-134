// CSC 134
// M3HW1
// Luis Rivera Gonzalez
// 2/26/25


#include <iostream>
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
    cout << input << endl;

    // if(input == "yes") {
    //     cout << "you said yes" << endl;
    //     return;
    // } 

    // if(input == "no") {
    //     cout << "you said no" << endl;
    //     return;
    // } 

    // cout << "You said something else;" << endl;
}

int main() {
    question1();
    return 0;
}

