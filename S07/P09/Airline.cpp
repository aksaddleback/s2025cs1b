#include<iostream> 
#include "Airline.h"
using namespace std;

Airline::Airline(string airlineName, int airportCapacity, int passengerCapacity, 
    int flightCapacity, int bookingCapacity) : airlineName(airlineName), 
    airportCapacity(airportCapacity), airportCount(0), passengerCapacity(passengerCapacity), 
    passengerCount(0), flightCapacity(flightCapacity),flightCount(0), bookingCapacity(bookingCapacity), bookingCount(0)
{ 
    airports = new Airport*[airportCapacity];
    passengers = new Passenger*[passengerCapacity];
    flights = new Flight*[flightCapacity];
    bookings = new Booking*[bookingCapacity];
}

Airline::~Airline()
{ 
    for(int i = 0; i < passengerCount; i++) { 
        if (passengers[i]) { 
            delete passengers[i];
        }
    }
    delete[] passengers;

    for(int i = 0; i < airportCount; i++) { 
        if (airports[i]) { 
            delete airports[i];
        }
    }
    delete[] airports;

    for(int i = 0; i < flightCount; i++) { 
        if (flights[i]) { 
            delete flights[i];
        }
    }
    delete[] flights;

    for(int i = 0; i < bookingCount; i++) { 
        if (bookings[i]) { 
            delete bookings[i];
        }
    }
    delete[] bookings;
}

void Airline::addAirport(Airport* airport)
{ 
    if (airportCount< airportCapacity) { 
        airports[airportCount++] = airport;
    } else { 
        cout << "No more capacity for new airport in our Airline!\n";
    }
}

void Airline::addPassenger(Passenger* passenger)
{ 
    if (passengerCount < passengerCapacity) { 
        passengers[passengerCount++] = passenger;
    } else { 
        cout << "No more capacity for new passenter in our Airline!\n";
    }
}

void Airline::addFlight(Flight* flight)
{ 
    if (flightCount < flightCapacity) { 
        flights[flightCount++] = flight;
    } else { 
        cout << "No more capacity for new flight in our Airline!\n";
    }
}

void Airline::addBooking(Booking* b)
{ 
    if (bookingCount < bookingCapacity) { 
        bookings[bookingCount++] = b;
    } else { 
        cout << "No more capacity for new booking in our Airline!\n";
    }
}

Booking* Airline::createBooking(int passengerID, const string& flightNumber)
{ 
    return nullptr;
    
}

Passenger* Airline::findPassenger(int passengerID) const
{ 
    for(int i = 0; i < passengerCount; i++) { 
        if (passengers[i]->getPassengerID() == passengerID) { 
            return passengers[i];
        }
    } 
    return nullptr;    
}

Flight* Airline::findFlight(const string& flightNumber) const
{ 
    for(int i = 0; i < flightCount; i++) { 
        if (flights[i]->getFlightNumber() == flightNumber) { 
            return flights[i];
        }
    } 
    return nullptr;    
}

Airport* Airline::findAirport(const string& airportCode) const
{ 
    for(int i = 0; i < airportCount; i++) { 
        if (airports[i]->getCode() == airportCode) { 
            return airports[i];
        }
    } 
    return nullptr;    
}

void Airline::displayAllPassengers() const
{ 
    for(int i = 0; i < passengerCount; i++) { 
        if (passengers[i]) { 
            passengers[i]->displayPassenger(); 
        }
    } 
    cout << "Passenger Count: " << passengerCount << endl << endl;    
}

void Airline::displayAllAirports() const
{ 
    for(int i = 0; i < airportCount; i++) { 
        if (airports[i]) { 
            airports[i]->displayAirport(); 
        }
    } 
    cout << "airport Count: " << airportCount << endl << endl;    
    
}

void Airline::displayAllFlights() const
{ 
    for(int i = 0; i < flightCount; i++) { 
        if (flights[i]) { 
            flights[i]->displayFlightDetails(); 
        }
    } 
    cout << "flight Count: " << flightCount << endl << endl;    
}

void Airline::displayAllBookings() const
{ 
    for(int i = 0; i < bookingCount; i++) { 
        if (bookings[i]) { 
            bookings[i]->displayBooking(); 
        }
    } 
    cout << "booking Count: " << bookingCount << endl << endl;    
    
}
