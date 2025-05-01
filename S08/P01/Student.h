#include<iostream> 
using namespace std; 

class Student { 
    private: 
     static int totalCount;
     static int nextAvailableID; 
     int studentID; 
     string name; 
    public: 
     Student(string name = "No Name"); 
     ~Student(); 
     static void displayTotalCount(); 
     static int nextAvailableStudentID(); 
     void displayStudent(); 
};