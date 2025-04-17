#include "Point.h"
#include<iostream> 
using namespace std; 

Point::Point() : x(0), y(0) { }
Point::Point(int x, int y) : x(x), y(y) { }

void Point::displayPoint() const { 
    cout << "x: " << x << endl
         << "y: " << y << endl; 
}

int Point::getX() const { 
    return x; 
}

int Point::getY() const { 
    return y; 
}
