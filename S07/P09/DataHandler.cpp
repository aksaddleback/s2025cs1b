#include<iostream> 
#include "Airline.h"
#include "Passenger.h"
#include "DataHandler.h"
#include "Airport.h"
#include "Flight.h"
#include<fstream> 
using namespace std; 

void DataHandler::loadAirports(Airline& airline, const string& filename) { 
    ifstream file(filename);
    if (!file.is_open()) { 
        cout << "Error opening the file!\n";
        exit(1);
    }
    string code, city, dummy; 
    while(getline(file, code) && getline(file, city)) { 
        Airport *a = new Airport(code, city);
        airline.addAirport(a);
        getline(file, dummy);
    }
}

void DataHandler::loadPassengers(Airline& airline, const string& filename) { 
    ifstream file(filename);
    if (!file.is_open()) { 
        cout << "Error opening the file!\n";
        exit(1);
    }
    int id;
    string name, email, dummy; 
    while(file >> id && file.ignore() && getline(file, name) && getline(file, email)) { 
        Passenger *p = new Passenger(name, email, id); 
        airline.addPassenger(p);
        getline(file, dummy);
    }
}

void DataHandler::loadFlights(Airline& airline, const string& filename) { 
    ifstream file(filename);
    if (!file.is_open()) { 
        cout << "Error opening the file!\n";
        exit(1);
    }
    string flightCode, originCode, destCode, time, dummy; 
    int capacity;
    while(getline(file, flightCode) && getline(file, originCode)
        && getline(file, destCode) && getline(file, time) && file >> capacity && file.ignore()) { 
            Airport* origin = airline.findAirport(originCode);
            Airport* dest = airline.findAirport(destCode);
            if (origin && dest) { 
                Flight* flight = new Flight(flightCode, origin, dest, time, capacity); 
                airline.addFlight(flight);
            } else { 
                cout << "Origin or Dest Airport not found:" << originCode << ", " << destCode << "\n";
            }
            getline(file, dummy);
    }
}

void DataHandler::loadBookings(Airline& airline, const string& filename) { 
    ifstream file(filename);
    if (!file.is_open()) { 
        cout << "Error opening the file!\n";
        exit(1);
    }
    int bookingID, passengerID; 
    string flightID, date, dummy; 
    while(file >> bookingID && file.ignore() && file >>  passengerID 
       && file.ignore() && getline(file, flightID) && getline(file, date)) { 
        cout << bookingID << ", " << passengerID << ", " << flightID << ", " << date << endl; 
        Passenger* p = airline.findPassenger(passengerID);
        Flight* f = airline.findFlight(flightID);
        if (p && f) { 
            Booking* b = new Booking(p, f, bookingID);
            airline.addBooking(b);
        } else { 
            cout << "Passenger or Flight not found:" << passengerID << ", " << flightID << "\n";
        }
        getline(file, dummy);                
    }
}



