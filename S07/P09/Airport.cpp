#include<iostream> 
#include "Airport.h"
using namespace std; 

Airport::Airport(const string& airportCode, const string& city)
  :airportCode(airportCode), cityName(city) { 

  }

Airport::~Airport() { }

void Airport::displayAirport() const { 
     cout << "airportCode: " << airportCode << endl; 
     cout << "cityName: " << cityName << endl << endl; 
}

string Airport::getCode() const { 
  return airportCode; 
}

