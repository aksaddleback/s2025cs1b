#ifndef PRODOCT_H
#define PRODOCT_H
#include<iostream> 
using namespace std; 

class Product { 
private: 
    int productID;
    string productName;
    double price;
    
public: 
    Product(int id, const string& name, double price);
    ~Product(); 
    void displayProduct() const; 
    double getPrice() const; 
};

#endif