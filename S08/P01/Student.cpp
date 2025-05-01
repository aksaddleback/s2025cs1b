#include<iostream> 
#include "Student.h"
using namespace std; 

int Student::totalCount = 0; 
int Student::nextAvailableID = 1; 

Student::Student(string name) { 
    studentID = nextAvailableID++;
    totalCount++; 
    this->name = name; 
}

Student::~Student() { 
    totalCount--; 
}

void Student::displayTotalCount() { 
    cout << "Total count: " << totalCount << endl; 
}

int Student::nextAvailableStudentID() { 
    return nextAvailableID; 
}

void Student::displayStudent() { 
    cout << "ID: " << studentID << endl; 
    cout << "Name: " << name << endl << endl; 
}
