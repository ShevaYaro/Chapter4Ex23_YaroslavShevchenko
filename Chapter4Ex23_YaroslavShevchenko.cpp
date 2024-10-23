/*
Tite Chapter 4 Exercise 23 - Shipping Charges
File name:Chapter4Ex23_Yaroslav_Shevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 10/22/2024
Requirements:

Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1–4):




Input Validation: Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu.
Do not accept negative values for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (true) {
        cout << "Please input correct non negative numbers to the program" << endl;
        cout << "1. Calculate area of Circle" << endl;
        cout << "2. Calculate area of Rectangle" << endl;
        cout << "3. Calculate area of Triangle" << endl;
        cout << "4. Quit" << endl;

        int choice = 0;

        cout << "Please enter the number of the choice ";
        cin >> choice;
        switch (choice) {
            case 1:
                double radius;
                double area;
                cout << "What is the radius?: ";
                cin >> radius;
                while (radius < 0) {
                    cout << "What is the radius?:(non negative number) ";
                    cin >> radius;
                }
                area = pow(radius, 2) * 3.14159;
                cout << "The area of given circle is: " << area << endl;
                break;
            case 2:
                double length;
                double width;
                double area2;
                cout << "What is the length?: ";
                cin >> length;
                while (length < 0) {
                    cout << "What is the length?:(non negative number) ";
                    cin >> length;
                }
                cout << "What is the width?: ";
                cin >> width;
                while (width < 0) {
                    cout << "What is the width?:(non negative number) ";
                    cin >> width;
                }
                area2 = width * length;
                cout << "The area of given rectangle is: " << area2 << endl;
                break;
            case 3:
                double base;
                double height;
                double area3;
                cout << "What is the base of the triangle?: ";
                cin >> base;
                while (base < 0) {
                    cout << "What is the base?:(non negative number) ";
                    cin >> base;
                }
                cout << "What is the height of the triangle?: ";
                cin >> height;
                while (height < 0) {
                    cout << "What is the height?:(non negative number) ";
                    cin >> height;
                }
                area3 = base * height * .5;
                cout << "The area of given triangle is: " << area3 << endl;
                break;
            case 4:
                exit(0);
        }
            
    }
    


}

