#include<iostream> 
#include "Booking.h"
using namespace std; 

Booking::Booking(Passenger* p, Flight* f) : passenger(p), flight(f) { 
}

Booking::~Booking() { }

void Booking::displayBooking() const { 
    cout << "Booking information: \n";
    cout << "bookingID: " << bookingID << endl;
    cout << "passenger: " << endl;
    passenger->displayPassenger();
    cout << "flight: " << endl;
    flight->displayFlightDetails();
    cout << "bookingDate: " << bookingDate << endl << endl; 
}