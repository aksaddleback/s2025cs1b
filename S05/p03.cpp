#include<iostream> 
using namespace std; 

int* getArray(int count) { 
    int* arr = new int[count];
    for(int i = 0; i < count; i++) { 
        cin >> arr[i];
    }
    //delete[] arr; 
    return arr; 
}

void printArray(int a[3], int count) { 
    cout << "Here is the array: \n";
    for(int i = 0; i < count; i++) { 
        cout << *(a + i) << endl; 
        //cout << a[i] << endl;         
    }
}

int main() { 
    int* ar = getArray(3);
    printArray(ar, 3);
    delete[] ar; 
}