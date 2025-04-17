#include "Circle.h"

Circle::Circle(Point c, double r) : center(c), radius(r < 0 ? 0 : r) {}

Circle::Circle(int x, int y, double r) : center(Point(x,y)), radius(r < 0 ? 0 : r) {}

double Circle::getArea() const { 
    return 3.1415 * radius * radius;
}

void Circle::displayCircle() const { 
    cout << "======================\n";
    cout << "Center: \n";
    center.displayPoint(); 
    cout << "Area: " << getArea() << endl; 
    cout << "Radius: " << radius << endl; 
}
