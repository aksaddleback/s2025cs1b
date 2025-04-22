#include<iostream> 
#include "Product.h"
using namespace std; 

void f() { 
    Product product(1111, "Function Product", 2000);
    product.displayProduct();
}


int main() { 
    Product* product = new Product(12, "A great book", 20);
    product->displayProduct();
    
    f(); 
    
    delete product; 

    //product->~Product(); 
}