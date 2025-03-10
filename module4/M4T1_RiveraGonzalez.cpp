// CSC 134
// M4T1
// Luis Rivera Gonzalez
// 3/10/25
// Using loops to create Table of squares

#include <iostream>
using namespace std;


int main() {
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;
    cout << "Table of Squares" << endl;
    cout << "----------------" << endl;
    int num = MIN_NUM;
    int sq; // num squared
    while (num <= MAX_NUM)
    {
        sq = num * num;
        cout << num << "\t" << sq << endl;
        num = num + 1;
    }
    
    return 0;
}