/*
Write a C++ program to implement function overloading with the following specification:
 a. Area(int) :- to calculate area of square
 b. Area(int,int) :- to calculate area of rectangle
 c. Area(float) :- to calculate area of circle
*/

#include <iostream>
#include <cmath>

using namespace std;

// Square
double Area(int side) {
    return side * side;
}

// Rectangle
double Area(int height, int width) {
    return height * width;
}

// Circle
double Area(float side) {
    double pi = M_PI;
    return pi * side * side;
}

int main() {
    int type, side, height, width;
    float cside;
    cout << "1 for Square\n2 for Rectangle\n3 for Circle\n4 to Exit\nChoose any. Type: ";
    cin >> type;
    switch(type) {
        case 1:
            cout << "Enter the side of square: ";
            cin >> side;
            cout << "The area of the square is: " << Area(side);
            break;
        case 2:
            cout << "Enter the height of the rectangle: ";
            cin >> height;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "The area of the rectangle is: " << Area(height, width);
            break;
        case 3:
            cout << "Enter the side of circle: ";
            cin >> cside;
            cout << "The area of the circle is: " << Area(cside);
            break;
        default:
            break;
    }
}
