#include<iostream> 
using namespace std; 

class Student { 
    public: 
    // no constructor, so there will be a default one. 
    void setDetails(const string& name, int age) { 
        this->name = name; 
        this->age = age; 
    }

    void displayDetails() const { 
        // this->age = 10;  // will have compile error since the method is const
        cout << "Name: " << this->name << endl
             << "Age: " << this->age << endl << endl; 
    }

    private: 
    string name; 
    int age;
};

int main() { 
    Student student;
    student.displayDetails(); 
    student.setDetails("Jack", 12345); 
    student.displayDetails(); 
}