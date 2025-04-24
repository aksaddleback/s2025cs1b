#include "Passenger.h"

int Passenger::lastID = 1000; 

Passenger::Passenger(const string& name, const string& email) 
    : name(name), contactEmail(email) { 
        passengerID = lastID++; 
    }

Passenger::~Passenger() { 
}

void Passenger::displayPassenger() const { 
    cout << "passengerID: " << passengerID << endl; 
    cout << "name: " << name << endl; 
    cout << "contactEmail: " << contactEmail << endl << endl; 
}

int Passenger::getPassengerID() const { 
    return passengerID;
}
