// CSC 134
// M4LAB1
// Luis Rivera Gonzalez
// 3/10/25
// Draw a block of asterisks

#include <iostream>
using namespace std;


int main() {
    int width = 5;
    int height = 5;
    for (int i=0; i < height; i++) {
        for (int j=0; j < width; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}