// CSC 134
// M5T2
// Luis Rivera Gonzalez
// 3/26/25
// Using some simple functions, both void and value-returning to list the numbers from 1 to 10 along with the squares of those numbers.

#include <iostream>
using namespace std;

// Declare functions
int square(int num);
void printAnswerLine(int num, int sq);

int main() {
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;
    cout << "Table of Squares" << endl;
    cout << "----------------" << endl;
    
    int num = MIN_NUM;
    while (num <= MAX_NUM) {
        printAnswerLine(num, square(num));
        num++;
    }
}

int square (int num){
    return num * num;
}
void printAnswerLine(int num, int sq){
    cout << num << "\t" << sq << endl;
}