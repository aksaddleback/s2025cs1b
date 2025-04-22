#include<iostream>
#include "Product.h"
using namespace std; 

class Inventory { 
    private: 
    Product** productList;
    int itemCount;
    int capacity;

    public: 
    Inventory(int capacity);
    ~Inventory(); 
    bool addProduct(Product* productPtr); 
    void displayInventory() const;
};