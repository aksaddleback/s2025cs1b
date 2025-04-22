#include<iostream> 
#include "Product.h"
#include "Inventory.h"
using namespace std; 

int main() {
    Product* p1 = new Product(1111, "Book", 10);
    Product* p2 = new Product(2222, "Mouse", 20);
    Product* p3 = new Product(3333, "Door", 30);
    Product* p4 = new Product(4444, "Window", 40);

    Inventory inventory(3);
    inventory.displayInventory(); 

    cout << "Adding Products!\n";
    inventory.addProduct(p1);
    inventory.addProduct(p2);
    inventory.addProduct(p3);
    inventory.displayInventory(); 

    inventory.addProduct(p4);
    inventory.displayInventory();     
}