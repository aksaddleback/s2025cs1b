#ifndef PASSENGER_H
#define PASSENGER_H

#include<iostream> 
using namespace std; 

class Passenger { 
    private: 
    static int lastID;
    int passengerID;
    string name;
    string contactEmail;
    public: 
    Passenger(const string& name, const string& email, int id = -1);
    ~Passenger(); 
    void displayPassenger() const;
    int getPassengerID() const; 
};

#endif