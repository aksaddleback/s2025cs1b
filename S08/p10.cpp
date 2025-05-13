#include<iostream> 
#include<vector>
using namespace std; 

class Vehicle { // abstract class
    public:
        virtual void startEngine() const = 0;
};

class Car : public Vehicle { 
    public:
        void startEngine() const override { 
            cout << "The Car's Engine started!\n";
        }
};

class Truck : public Vehicle { 
    public:
        void startEngine() const override { 
            cout << "The Truck's Engine started!\n";
        }
};
    
int main() {
    vector<Vehicle*> v;
    v.push_back(new Car());
    v.push_back(new Truck());
    v.at(0)->startEngine();
    v.at(1)->startEngine(); 
}