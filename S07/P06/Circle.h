#include<iostream> 
#include "Point.h"
using namespace std; 

class Circle { 
    private: 
    Point center;
    double radius;
    public: 
    Circle(Point c, double r);
    Circle(int x, int y, double r);
    double getArea() const;
    void displayCircle() const;
};
