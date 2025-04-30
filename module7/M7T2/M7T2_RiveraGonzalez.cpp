// CSC 134
// M7T2 - Rectangle Class
// Luis Rivera Gonzalez
// 4/30/25
// Use Restaurant class to store user ratings

#include <iostream>
#include "Rectangle.h" //GOLD ATTEMPT
using namespace std;
 

int main(){
    double length, width, area;
    cout << "Rectangle Calculations" << endl;
    cout << "Rectangle 1" << endl;

    // Input validation for width (SILVER ATTEMPT)
    do {
        cout << "Enter width (must be > 0): ";
        cin >> width;
        if (width <= 0) {
            cout << "Invalid input. Width must be greater than 0." << endl;
        }
    } while (width <= 0);

    // Input validation for length (SILVER ATTEMPT)
    do {
        cout << "Enter length (must be > 0): ";
        cin >> length;
        if (length <= 0) {
            cout << "Invalid input. Length must be greater than 0." << endl;
        }
    } while (length <= 0);

    Rectangle r1 = Rectangle();
    r1.setWidth(width);
    r1.setLength(length);

    cout << "The area is: " << r1.getArea() << endl;


    return 0;
}