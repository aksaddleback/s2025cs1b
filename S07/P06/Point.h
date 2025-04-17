#ifndef CIRCLE_H 
#define CIRCLE_H

class Point { 
    private: 
    int x; 
    int y; 

    public: 
    Point();
    Point(int x, int y);
    void displayPoint() const;
    int getX() const; 
    int getY() const; 
};

#endif