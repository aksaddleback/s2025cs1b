#include<iostream> 
#include "Booking.h"
using namespace std; 

int Booking::lastBookingID = 5000; 

Booking::Booking(Passenger* p, Flight* f, int id) : passenger(p), flight(f) { 
    if (id == -1) { 
        bookingID = lastBookingID++; 
    } else { 
        bookingID = id; 
        lastBookingID = id > lastBookingID ? id + 1 : lastBookingID;
    }
}

Booking::~Booking() { }

void Booking::displayBooking() const { 
    cout << "Booking information: \n";
    cout << "bookingID: " << bookingID << endl;
    cout << "passengerID: " << this->passenger->getPassengerID() << endl;
    cout << "flightID: " << this->flight->getFlightNumber()  << endl << endl; 
}
