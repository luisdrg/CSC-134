// CSC 134
// M3LAB1
// Luis Rivera Gonzalez
// 2/24/25
// This program asks the user to guess the right hand for a reward

#include <iostream>
using namespace std;


int main() {
  
    // declare the variable we need
    char choice; 
    char hand;
    srand(time(0));
    int isLeft = rand() % 2;
  
    // ask the question
    cout << "I have something in one of my hands. You guess correctly and you get to keep it!" << endl;
    cout << "Do you choose Left-hand or Right-hand?" << endl;
    cout << "Type L or R: "; 
    cin >> choice;
  
    // using if, make a decision based on the user's choice
  
    if ('L' == choice || choice == 'l') {
        cout << "You chose Left-hand" << endl;
        if(isLeft == 1){
            cout << "Good Job! You guessed the correct hand." << endl;
        } else {
            cout << "Sorry! It was in the right hand." << endl;
        }
    }
    else if ('R' == choice || choice == 'r') {
        cout << "You chose Right-hand" << endl;
        if(isLeft == 0){
            cout << "Good Job! You guessed the correct hand." << endl;
        } else {
            cout << "Sorry! It was in the left hand." << endl;
        }
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

  
    // finish up
    cout << "Thanks for playing!" << endl;
    return 0;
}