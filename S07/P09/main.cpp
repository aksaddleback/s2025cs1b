#include<iostream> 
#include "Passenger.h"
#include "Airport.h"
#include "Flight.h"
using namespace std; 

Passenger* getPassenger() {
    string name;
    string contactEmail;
    
    cout << "Getting Passenger Info:\n";
    cout << "Enter name:";
    getline(cin, name); 
    cout << "Enter contactEmail:";
    getline(cin, contactEmail);

    return new Passenger(1, name, contactEmail);
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
    Passenger* passenger = getPassenger();
    passenger->displayPassenger(); 

    Airport* airport = getAirport(); 
    airport->displayAirport();

    Flight* flight = getFlight(airport, airport); 
    flight->displayFlightDetails(); 
}