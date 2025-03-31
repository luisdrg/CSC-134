// CSC 134
// M5LAB1
// Luis Rivera Gonzalez
// 3/31/25
// 

#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[name]
[date]
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// TODO: add more choices here
void choice_go_inside();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  switch (choice) {
    case 1:
      choice_front_door();
      break;
    case 2:
      choice_back_door();
      break;
    case 3:
      choice_go_home();
      break;
    case 4:
      cout << "Ok, quitting game" << endl;
      return; // go back to main()
    default:
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      main_menu();  // try again
      break;
  }
  
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "----------------------------------------------------------------------------------\n";
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}
void choice_back_door() {
    cout << "----------------------------------------------------------------------------------\n";
    cout << "You walk around to the back of the house. \nThe yard is messy, with weeds growing through cracked stone paths. \nYou spot a slightly open door. "
         << "\nDo you go inside or decide to head back?" << endl;
    cout << "1. Go inside" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_go_inside();
    } else if (2 == choice) {
        choice_go_home();
    }
}



void choice_go_home() {
    cout << "----------------------------------------------------------------------------------\n";
    cout << "You decide this house isn't worth the trouble and start walking back home. It’s just another ordinary day." << endl;
}

void choice_go_inside() {
    cout << "----------------------------------------------------------------------------------\n";
    cout << "You step inside the house. The room is quiet and covered in dust, with old furniture scattered around. "
         << "After a quick look around, you realize there's nothing much to see here. You decide to head back outside, glad you satisfied your curiosity." << endl;
}




// any new choices go here