#include<iostream> 
using namespace std; 

class Address { 
    public: 
    Address() { 
        number = 12345;
        street = "Saddleback Street"; 
        city = "Mission Viejo";
        state = "CA";
        zip = 92692;
    }
    void display() { 
        cout << number << " " << street << endl; 
        cout << city << ", " << state << " " << zip << endl << endl; 
    }
    private: 
    int number;
    string street; 
    string city; 
    string state; 
    int zip; 
};

class Person { 
    public: 
    Person(int a = 12, string n = "", char g = 'n') { 
        age = a; 
        name = n; 
        gender = g; 
    }
    void display() { 
        cout << age << endl; 
        cout << name << endl; 
        cout << gender << endl; 
        address.display(); 
    }
    bool compareYourself(Person other) { 
        cout << this->age << endl; 
        cout << this->name << endl; 
        cout << this->gender << endl; 
        return true; 
    }

    private: 
    int age;        // int built-in type
    string name;    // string type
    char gender;    // char built-in type
    Address address;    // is not a built-in type of c++. It is a user defined type
}; 

int main() { 
    Person j(19, "Jacob", 'm');
    Person h(22, "Hunter", 'm');
    j.display(); 
    h.display();
    //p1.compareYourself(p2);
}
