/*
Christopher Hardy
Program Status - Complete
Calculates the area of a square or triangle.
*/
#include <iostream>
using namespace std;

float areaTriangle(float, float);
float Squarea(float);
int main()
{
    char shape;

    cout << "Enter the first letter of shape to calculate area (s or t): ";
    cin >> shape;
    if(shape == 's')
    {
        float base;
        cout << "Enter the measurement of the side of the square: ";
        cin >> base;
        cout << "Area of the square is " << Squarea(base) << "." << endl;
    }
    else if (shape == 't')
    {
        float base;
        float height;
        cout << "Enter the measurement of the base of the triangle: ";
        cin >> base;
        cout << "Enter the measurement of the height of the triangle: ";
        cin >> height;
        cout << "Area of the triangle is " << areaTriangle(base, height)<< "." << endl;
    }
    else
    {
        cout << "Invalid input. Try entering s or t next time?";
    }
    return 0;
}

float Squarea(float side)
{
   return(side*side);
}
float areaTriangle(float base, float height)
{
    return(0.5*base*height);
}
