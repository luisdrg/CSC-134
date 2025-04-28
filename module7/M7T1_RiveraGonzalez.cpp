// CSC 134
// M7T1 - Restaurant Rating
// Luis Rivera Gonzalez
// 4/28/25
// Use Restaurant class to store user ratings

#include <iostream>
using namespace std;

class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
    // constructor
    Restaurant(string n, double r) {
        name = n;
        rating = r;
    }

        // default constructor
        Restaurant() {
        }
    // getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    // print a formatted entry
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)\n" << endl;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    // create a restaurants
    //#1
    Restaurant lunch_place = Restaurant("La Conina", 4.5);
    // #2
    Restaurant breakfast_place = Restaurant("Waffle House", 2.5);

    // #3
    cout << endl;
    string name;
    cout << "Enter restaurant name for dinner: ";
    getline(cin, name);

    double dinner_rating;
    cout << "Enter rating: ";
    cin >> dinner_rating;
    Restaurant dinner_place;
    dinner_place.setName(name);
    dinner_place.setRating(dinner_rating);

    // Printing review to screen
    cout << "\n====================Review info====================" << endl;
    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();

    cout << "Lunch:" << endl;
    lunch_place.printInfo();


    cout << "Dinner:" << endl;
    dinner_place.printInfo();
    return 0;

}