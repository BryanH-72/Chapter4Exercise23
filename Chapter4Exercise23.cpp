/* Program File Name:  Chapter4-Exercise23.cpp
Programmer: Bryan Hurley
Date:March 2025
Requirements: 
Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle 2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle 4. Quit
Enter your choice (1-4):
If the user enters 1, the program should ask for the radius of the circle then display its area.  
If the user enters 2, the program should ask for the length and width of the rectangle, then display the rectangle's area.
If the user enters 3, the program should ask for the length of the triangle's base and its height, then display its area. 
If the user enters 4, the program should end.*/


#include <iostream>
using namespace std;

int main()
{
    bool running = true;
    int selection;
    double radius, length, width, height, pi;
    pi = 3.14159;
    while (running) {
        cout << "Geometry Calculator \n    1. Calculate the Area of a Circle \n    2. Calculate the Area of a Rectangle \n    3. Calculate the Area of a Triangle \n    4. Quit \n   Enter your choice (1-4): ";
        cin >> selection;
        while (0 > selection || selection > 4) {
            cout << "Value must be between 1 and 4 \n";
            cout << "Geometry Calculator \n    1. Calculate the Area of a Circle \n    2. Calculate the Area of a Rectangle \n    3. Calculate the Area of a Triangle \n    4. Quit \n   Enter your choice (1-4): ";
            cin >> selection;
        }
        switch (selection) {
        case 1:
            cout << "What is the radius? ";
            cin >> radius;
            while (radius < 0) {
                cout << "Value must be positive. \n";
                cout << "What is the radius? ";
                cin >> radius;
            }
            cout << "The area of this circle is " << (pi * radius * radius) << endl;
            break;
        case 2: 
            cout << "What is the length? ";
            cin >> length;
            while (length < 0) {
                cout << "Value must be positive. \n";
                cout << "What is the length? ";
                cin >> length;
            }
            cout << "What is the width? ";
            cin >> width;
            while (width < 0) {
                cout << "Value must be positive. \n";
                cout << "What is the width? ";
                cin >> width;
            }
            cout << "The area of this rectangle is " << (length * width) << endl;
            break;
        case 3:
            cout << "What is the length of the base? ";
            cin >> length;
            while (length < 0) {
                cout << "Value must be positive. \n";
                cout << "What is the length of the base? ";
                cin >> length;
            }
            cout << "What is the height? ";
            cin >> height;
            while (height < 0) {
                cout << "Value must be positive. \n";
                cout << "What is the height? ";
                cin >> height;
            }
            cout << "The area of this triangle is " << (length * height / 2) << endl;
            break;
        case 4:
            cout << "Goodbye!";
            running = false;
            break;
        }
    }
}
