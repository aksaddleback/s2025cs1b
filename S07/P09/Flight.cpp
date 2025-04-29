#include<iostream> 
#include "Flight.h"
using namespace std; 

Flight::Flight(const string& fn, Airport* originAirport, Airport* destAirport, const string& time, int cap)
    : flightNumber(fn), originAirport(originAirport), destinationAirport(destAirport), 
      departureTime(time), capacity(cap), passengerCount(0) 
{ 
    bookedPassengers = new Passenger*[capacity] {nullptr};
}

Flight::~Flight() {
    // Passengers are managed by the Airline object and pointer to a passenger might
    // be stored in multiple flights. So when a flight object is destoryed, 
    // it should not destroy the passenger object as other flights might point
    // to the passenger. 
    delete[] bookedPassengers; 
}

bool Flight::addPassenger(Passenger* p) {
    if (!this->isFull()) { 
        bookedPassengers[passengerCount++] = p; 
        return true; 
    } else { 
        cout << "Flight is full! Passenger is not added to the flight!\n";
        return false; 
    }
}

void Flight::displayFlightDetails() const { 
    cout << "Flight Details: \n";
    cout << "flightNumber: " <<  flightNumber << endl; 
    cout << "originAirport: " << endl; 
    destinationAirport->displayAirport();
    cout << "destinationAirport: " << endl; 
    originAirport->displayAirport();
    cout << "departureTime: " <<  departureTime << endl; 
    cout << "capacity: " <<  capacity << endl; 
    cout << "passengerCount;   : " <<  passengerCount  << endl << endl; 
}

void Flight::displayPassengerManifest() const { 
    cout << "\nFlight Passengers Manifest: \n";
    for(int i = 0; i < passengerCount; i++) { 
        bookedPassengers[i]->displayPassenger(); 
    }
}

bool Flight::isFull() const {
    return passengerCount >= capacity; 
}

string Flight::getFlightNumber() const { 
    return flightNumber;
}