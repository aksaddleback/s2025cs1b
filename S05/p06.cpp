#include<iostream> 
using namespace std; 

void printStrPtr(char* s, int size) { 
    for(int i = 0; i <= size; i++) { 
        cout << *s; 
        s++; 
    }
    cout << endl; 
}

int main() { 
    char str[11] = "Saddleback";
    cout << "String is: " << str << endl; 
    printStrPtr(str, 11);

}