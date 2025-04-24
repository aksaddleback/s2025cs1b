#ifndef PASSENGER_H
#define PASSENGER_H

#include<iostream> 
using namespace std; 

class Passenger { 
    private: 
    int passengerID;
    string name;
    string contactEmail;
    public: 
    static int lastID;
    Passenger(const string& name, const string& email);
    ~Passenger(); 
    void displayPassenger() const;
    int getPassengerID() const; 
};

#endif