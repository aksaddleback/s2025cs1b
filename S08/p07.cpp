#include<iostream> 
using namespace std; 

class Person {
    private:
        int age; 
        string name; 
    public:
        Person(int age, const string& name) : age(age), name(name) {}
        void display() { 
            cout << "Age: " << age << endl; 
            cout << "Name: " << name << endl; 
        }
};

class Employee : public Person { 
    private: 
        int salary; 
        int employeeId;
    public:
        Employee(int age, string& name, int salary, int employeeId) : 
            Person(age, name), salary(salary), employeeId(employeeId) { }
        
        void displayEmployee() { 
            Person::display(); 
            cout << "Salary: " << salary << endl; 
            cout << "Employee ID: " << employeeId << endl; 
        }
};
    
int main() {
    string s = "Alex";
    Employee e(25, s, 1000, 10000); 
    //e.display(); 

    e.displayEmployee(); 
}