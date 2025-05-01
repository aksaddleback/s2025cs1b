#include<iostream> 
#include "Student.h"
using namespace std;

int main() { 
    Student s1("Alex");
    Student s2("John"); 
    s1.displayStudent();
    s2.displayStudent(); 
    s1.displayTotalCount(); 
    Student::displayTotalCount(); 
    //Student::displayStudent(); // compilation error
    cout << Student::nextAvailableStudentID() << endl;  
    {
        Student s3("Elsa");
        s3.displayStudent(); 
        Student::displayTotalCount(); 
    }
    s1.displayTotalCount(); 
    cout << s1.nextAvailableStudentID() << endl; 
}