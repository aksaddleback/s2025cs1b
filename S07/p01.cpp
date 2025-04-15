#include<iostream> 
using namespace std; 

class Book { 
    public: 
    Book() : title("No Title!"), author("No Author"), year(0) { 
        // no code; 
    }

    void display() const { 
        cout << "Title: " << this->title << "\n"
             << "Author: " << this->author << "\n"
             << "Year: " << this->year << "\n";
    }

    private: 
    string title; 
    string author;
    int year; 
};

int main() { 
    Book b1, b2; 
    b1.display();
    b2.display(); 
}