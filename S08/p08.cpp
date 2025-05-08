#include<iostream> 
using namespace std; 

class Shape {
    private:
        string color;
    public:
        Shape(const string& color) : color(color) {}
        void display() { 
            cout << "Colr: " << color << endl; 
        }
};

class Circle : public Shape { 
    private: 
        double radius; 
    public:
        Circle(double radius, const string& color) : 
            Shape(color), radius(radius) { }
        
        double getArea() { 
            return 3.1415 * radius * radius; 
        }
};

class Rectangle : public Shape { 
    private: 
        double width;
        double height;  
    public:
        Rectangle(double width, double height, const string& color) : 
            Shape(color), width(width), height(height) { }
        
        double getArea() { 
            return width * height; 
        }
};
    
int main() {
    Rectangle r(5, 6, "Red"); 
    cout << r.getArea() << endl; 
    Circle c(5, "Yellow"); 
    cout << c.getArea() << endl; 
}