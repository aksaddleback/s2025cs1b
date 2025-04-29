#ifndef BOOKING_H
#define BOOKING_H

#include<iostream> 
#include "Passenger.h"
#include "Flight.h"
using namespace std; 

class Booking { 
    private:
    static int lastBookingID; 
    int bookingID;
    Passenger* passenger;
    Flight* flight;
    //string bookingDate;
    public: 
    Booking(Passenger* p, Flight* f, int id = -1); 
    ~Booking(); 
    void displayBooking() const;
};
#endif


