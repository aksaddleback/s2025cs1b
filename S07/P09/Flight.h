#ifndef FLIGHT_H
#define FLIGHT_H

#include<iostream> 
#include "Passenger.h"
#include "Airport.h"
using namespace std; 

class Flight { 
    private: 
    static int FlightCount; // class member -- static
    string flightNumber;    // object member 
    Airport* originAirport;
    Airport* destinationAirport;
    string departureTime;
    int capacity;
    Passenger** bookedPassengers;
    int passengerCount;

    public: 
    Flight(const string& fn, Airport* originAirport, Airport* destAirport, const string& time, int cap); 
    ~Flight(); 
    bool addPassenger(Passenger* p);
    void displayFlightDetails() const;
    void displayPassengerManifest() const;
    bool isFull() const;
};
#endif


