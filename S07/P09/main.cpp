#include<iostream> 
#include "Passenger.h"
#include "Airport.h"
#include "Flight.h"
#include "Airline.h"
#include "DataHandler.h"
using namespace std; 

Passenger* getPassenger() {
    string name;
    string contactEmail;
    
    cout << "Getting Passenger Info:\n";
    cout << "Enter name:";
    getline(cin, name); 
    cout << "Enter contactEmail:";
    getline(cin, contactEmail);

    return new Passenger(name, contactEmail, 100);
}

Airport* getAirport() {
    string cityName;
    string code;
    
    cout << "Getting Airpot Info:\n";
    cout << "Enter city name:";
    getline(cin, cityName); 
    cout << "Enter Airport Code:";
    getline(cin, code); 

    return new Airport(code, cityName); 
}

Flight* getFlight(Airport* origin, Airport* dest) {
    string flightNumber;
    string departureTime;
    int capacity;
    cout << "Getting Flight Info:\n";
    cout << "Enter flightNumber: ";
    getline(cin, flightNumber);
    cout << "Enter departureTime: ";
    getline(cin, departureTime);
    cout << "Enter capacity: ";
    cin >> capacity; 
    return new Flight(flightNumber, origin, dest, departureTime, capacity);
}

int main() { 
    Airline airline("Saddleback Airline", 100, 1000, 1000, 1000);
    DataHandler dh;
    dh.loadPassengers(airline, "files/passengers.txt");
    airline.displayAllPassengers(); 
    dh.loadAirports(airline, "files/airports.txt"); 
    airline.displayAllAirports(); 
    dh.loadFlights(airline, "files/flights.txt"); 
    airline.displayAllFlights(); 
    dh.loadBookings(airline, "files/bookings.txt");
    airline.displayAllBookings();
    
    
}