#include<iostream> 
#include "Point.h"
#include "Circle.h"
using namespace std; 

int main() {
    Point p; 
    Circle circle1(p, 10);
    circle1.displayCircle();
    Circle circle2(2, 2, 5);
    circle2.displayCircle(); 
    Circle circle3(2, 2, -5);
    circle3.displayCircle(); 
}