#include "Passenger.h"

int Passenger::lastID = 100; 

Passenger::Passenger(const string& name, const string& email, int id) 
    : name(name), contactEmail(email) { 
        if (id != -1) { 
            passengerID = id;
            lastID = id > lastID ? id + 1 : lastID; 
        } else { 
            passengerID = lastID++;
        }
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
