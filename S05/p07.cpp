#include<iostream> 
using namespace std; 

void swap(int* a, int* b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void swap(int& a, int& b) { 
    int temp = a; 
    a = b; 
    b = temp; 
}

int main() { 
    int x = 10, y = 20; 
    //swap(&x, &y);
    swap(x, y); 
    cout << x << " " << y << endl; 
}