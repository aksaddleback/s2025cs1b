#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include<iostream> 
#include "Airline.h"
using namespace std; 

class DataHandler {
    public: 
    void loadPassengers(Airline& airline,const string& filename); 
    void loadAirports(Airline& airline, const string& filename); 
    void loadFlights(Airline& airline, const string& filename); 
    void loadBookings(Airline& airline,const  string& filename); 
};

#endif