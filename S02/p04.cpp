#include<iostream> 
using namespace std; 

int sum_range(int x, int y, int z) { // z is a dummy param to be able to do overloading -- bad practice only for demonstration
    if (x == y) { 
        return x; 
    }
    return x + sum_range(x+1, y, 0);
}

int sum_range(int x, int y) { 
    int res = 0;
    for(int i = x; i <= y; i++) { 
        res += i; 
    }
    return res; 
}

int main() { 
    cout << "Enter two numbers: "; 
    int x, y; 
    cin >> x >> y; 
    cout << sum_range(x, y) << endl; 
    cout << sum_range(x, y, 0) << endl; 
}