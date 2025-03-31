// CSC 134
// M5LAB1
// Luis Rivera Gonzalez
// 3/31/25
// 

#include <iostream>
using namespace std;
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
void choice_investigate_symbols();
void choice_explore_basement();
void choice_leave_immediately();
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
    cout << "------------------------------------------------------------------------------------------------\n";
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
    cout << "------------------------------------------------------------------------------------------------\n";
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
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "You decide this house isn't worth the trouble and start walking back home. It’s just another ordinary day." << endl;
}

void choice_go_inside() {
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "You step inside the house. The air feels cold, and a faint smell of mildew lingers. "
         << "\nThe dimly lit room reveals strange symbols etched on the walls, and an eerie creak echoes as you take another step. "
         << "\nDo you:" << endl;
    cout << "1. Investigate the symbols on the wall" << endl;
    cout << "2. Explore a door leading to the basement" << endl;
    cout << "3. Leave immediately" << endl;
    
    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        choice_investigate_symbols();
    } else if (2 == choice) {
        choice_explore_basement();
    } else if (3 == choice) {
        choice_leave_immediately();
    }
}

void choice_investigate_symbols() {
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "As you examine the symbols, they seem to form a pattern, but the meaning is unclear. "
         << "\nYou feel a strange chill, as if you’re being watched." << endl;
}

void choice_explore_basement() {
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "You open the basement door, and a musty smell hits you. As you descend the creaking stairs, "
         << "\nyour flashlight flickers, and you hear a faint rustling in the shadows." << endl;
}

void choice_leave_immediately() {
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "Uneasy, you decide it's better not to tempt fate.\nYou leave the house, vowing never to return." << endl;
}

// any new choices go here