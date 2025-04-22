#include<iostream>
#include "Inventory.h"
using namespace std; 

Inventory::Inventory(int capacity) : itemCount(0), capacity(capacity) { 
    productList = new Product*[capacity] {nullptr};
}

Inventory::~Inventory() { 
    for (int i = 0; i < itemCount; i++) { 
        if (productList[i]) {
            delete productList[i];
        }
    }
    delete[] productList; 
    cout << "destroyed the inventory (array of *Product).\n";
}    


bool Inventory::addProduct(Product* productPtr) { 
    if (itemCount < capacity) { 
        productList[itemCount++] = productPtr;
        return true; 
    } else { 
        cout << "No more room in inventory!\n";
        return false; 
    }
}

void Inventory::displayInventory() const { 
    cout << "Displaying inventory: \n";
    for (int i = 0; i < itemCount; i++) { 
        productList[i]->displayProduct(); 
    }
}
