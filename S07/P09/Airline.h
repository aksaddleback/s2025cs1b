#ifndef AIRLINE_H
#define AIRLINE_H

#include<iostream> 
#include "Airport.h"
#include "Passenger.h"
#include "Flight.h"
#include "Booking.h"
using namespace std; 

class Airline { 
    private:
    string airlineName;
    Airport** airports;
    int airportCount;
    int airportCapacity;
    Passenger** passengers;
    int passengerCount;
    int passengerCapacity;
    Flight** flights;
    int flightCount;
    int flightCapacity;
    Booking** bookings;
    int bookingCount;
    int bookingCapacity;
    
    public:
    Airline(string airlineName, int airportCapacity, int passengerCapacity, int flightCapacity, int bookingCapacity);
    ~Airline(); 
    void addAirport(Airport* airport); 
    void addPassenger(Passenger* passenger);
    void addFlight(Flight* flight);
    Booking* createBooking(int passengerID, const string& flightNumber);
    Passenger* findPassenger(int passengerID) const;
    Flight* findFlight(const string& flightNumber) const;
    Airport* findAirport(const string& airportCode) const;
    void displayAllPassengers() const;
    void displayAllAirports() const;
    void displayAllFlights() const;
    void displayAllBookings() const;
};

#endif