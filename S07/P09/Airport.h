#ifndef AIRPORT_H
#define AIRPORT_H

#include<iostream> 
using namespace std; 

class Airport { 
    private: 
    string airportCode;
    string cityName;

    public: 
    Airport(const string& airportCode, const string& city);
    ~Airport(); 
    void displayAirport() const;
    string getCode() const; 
};

#endif