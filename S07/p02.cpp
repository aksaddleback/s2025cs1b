#include<iostream> 
using namespace std; 

class Car { 
    public: 
    Car(const string& brand, int year) : brand(brand), year(year) { 
    
    }

    // Car(const string& brand, int year) { 
    //     this->brand = brand; 
    //     this->year = year; 
    // }

    void display() { 
        cout << "Brand: " << this->brand << endl
             << "Year: " << this->year << endl; 
    }
    private: 
    string brand; 
    int year; 
};

int main() { 
    Car c("Toyota", 2022); 
    c.display(); 
}