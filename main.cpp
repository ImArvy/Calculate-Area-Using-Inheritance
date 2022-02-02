// CSCI4100RyanValesAssignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
//#include "console.h"

using namespace std;

void display_area(const Shape& shape) {
    cout << "Area: " << shape.get_area() << "\n\n";
}

int main() {
    cout << "The Area Calculator\n\n";

    char choice = 'y';
    while (choice == 'y') {
        char shape;
        cout << "Circle, square, or rectangle? (c/s/r): ";
        cin >> shape;

        if (shape == 'c') {
            //double radius = console::get_double("Enter radius: ", 0);
            double circleRadius;
            cout << "Enter the radius: ";
            cin >> circleRadius;
            cout << endl;
            
            Circle circle;
            
            circle.set_radius(circleRadius);
            display_area(circle);
        }
        else if (shape == 's') {
            //double width = console::get_double("Enter width: ", 0);
            double squareWidth;
            cout << "Enter the width: ";
            cin >> squareWidth;
            cout << endl;
            
            Square square;
            
            square.set_width(squareWidth);
            display_area(square);
        }
        else if (shape == 'r') {
            //double width = console::get_double("Enter width:  ", 0);
            //double height = console::get_double("Enter height: ", 0);
            double rectangleWidth;
            cout << "Enter the width: ";
            cin >> rectangleWidth;
            cout << endl;

            double rectangleHeight;
            cout << "Enter the height: ";
            cin >> rectangleHeight;
            cout << endl;
            
            Rectangle rectangle(rectangleHeight);

            rectangle.set_width(rectangleWidth);
            rectangle.set_height(rectangleHeight);
            display_area(rectangle);
        }
        else {
            cout << "Invalid shape type.\n\n";
        }

        cout << "Continue? (y/n): ";
        cin >> choice;
        cout << endl;
    }
    cout << "Bye!\n\n";

    return 0;
}
