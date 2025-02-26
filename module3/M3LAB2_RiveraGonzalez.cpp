// CSC 134
// M3LAB1
// Luis Rivera Gonzalez
// 2/26/25
// This program  converts numerical grades into letter grades

#include <iostream>
using namespace std;


int main() {
 double numericalGrade;

 cout << "Enter your numerical grade: ";
 cin >> numericalGrade;

 if(numericalGrade >= 90 && numericalGrade <= 100) {
    cout << "Your letter grade is: A" << endl;
 }  
 if (numericalGrade >= 80 && numericalGrade < 90){
    cout << "Your letter grade is: B" << endl;
 }  
 if (numericalGrade >= 70 && numericalGrade < 80){
    cout << "Your letter grade is: C" << endl;
 }  
 if (numericalGrade >= 60 && numericalGrade < 70){
    cout << "Your letter grade is: D" << endl;
 }  
 if (numericalGrade >= 0 && numericalGrade < 60){
    cout << "Your letter grade is: F" << endl;
 }  
 if (numericalGrade > 100){
    cout << "Cannot exceed 100! There is no Extra credit." << endl;
 } 
 if(numericalGrade < 0){
    cout << "Invalid! Grades canot be negative." << endl;
 }

 return 0;
}