#include "Product.h"

Product::Product(int id, const string& name, double price) : 
    productID(id), productName(name), price(price > 0 ? price : 0) { 
        // no code
}

Product::~Product() { 
    cout << "Product " << this->productName  << " with id "
         << this->productID << " destroyed!\n";
}

void Product::displayProduct() const { 
    cout << "Name: " << productName << endl
         << "ID: " << productID << endl
         << "Price: $" << price << endl << endl;
}

double Product::getPrice() const { 
    return price; 
}
