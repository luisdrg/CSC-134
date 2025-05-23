// CSC 134
// M6LAB1
// Luis Rivera Gonzalez
// 4/21/25
// using vectors

#include <vector>
#include <iostream>
using namespace std;
int main(){

    // Idea is to replicate the simples parts of Buckshot Rouletette
    // Variables
    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0;

    // example one: Using a basic array
    int maganize[] = {RED, BLACK, BLACK, RED};
    for(int shell : maganize){
        string shellname;
        if(shell == BLACK){
            shellname = "Black";
        }
        if(shell == RED){
            shellname = "Red";
        }
        cout << "Next shell: " << shellname << endl;
    }

    // example 2: using a vector
    //.size(()) tells you how many items are in the vector
    //.push_back() adds an item to the back (end) of vector
    //.pop_back() removes an item from the back (end) vector

    cout << "================== Vector way ==================\n";
    vector<int> mag;
    //load mag
    mag.push_back(BLACK);
    mag.push_back(RED);
    mag.push_back(BLACK);
    mag.push_back(BLACK);
    int num_shells = mag.size();
    // look at shell before you eject it
    int current_shell = mag.at(num_shells - 1);
    cout << "Next shell: " << current_shell << endl;
    // eject a shell    
    mag.pop_back(); //this removes a shell
    num_shells--;
    //repeat
    current_shell = mag.at(num_shells - 1);
    cout <<"Next shell: " << current_shell << endl;
    mag.pop_back(); // removes last shell
    cout << "Mag contains " << mag.size() << " shells." << endl;
    cout << "It could hold up to " << mag.capacity() << " before resizing." << endl;
    return 0;
}