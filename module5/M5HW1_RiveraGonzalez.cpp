// CSC 134
// M5HW1
// Luis Rivera Gonzalez
// 4/2/25
// 

#include <iostream>
#include <iomanip>
using namespace std;

void question_1();
void question_2();

int main() {

    //question_1();
    question_2();


    return 0;
}

// Q1
void question_1() {
    cout << "-------------------------Question 1-------------------------" << endl;
    string month_1, month_2, month_3;
    double rain_1, rain_2, rain_3;
    cout << "Enter a month: ";
    cin >> month_1;
    cout << "Enter rainfall for " << month_1 <<": ";
    cin >> rain_1;

    cout << "Enter a month: ";
    cin >> month_2;
    cout << "Enter rainfall for " << month_2 <<": ";
    cin >> rain_2;

    cout << "Enter a month: ";
    cin >> month_3;
    cout << "Enter rainfall for " << month_3 <<": ";
    cin >> rain_3;

    double average = (rain_1 + rain_2 + rain_3) / 3.0;
    cout << "The average rainfall for " << month_1 << ", " << month_2 << " and " << month_3 << " is " << fixed << setprecision(2) << average << " inches.\n" << endl;
}

// Q2
void question_2() {
    cout << "-------------------------Question 2-------------------------" << endl;
}