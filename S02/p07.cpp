#include <iostream>
using namespace std;

void printArray(float arr[10]) { 
    for(int i = 0; i < 10; i++) { 
        cout << arr[i] << ", ";
    }
    cout << endl; 
}

void shiftArray(float arr[10], int x) { 
    int i = 0; 
    int sourceIndex = 0; 
    int firstTemp = arr[sourceIndex];
    while(i < 10) {         
        int destIndex = (sourceIndex + x) % 10; 
        float secondTemp = arr[destIndex];
        arr[destIndex] = firstTemp; 
        firstTemp = secondTemp; 
        
        sourceIndex = destIndex;
        i++; 
    }
}

int main()
{
    float arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    cout << "Enter a number (shift count): ";
    int x; 
    cin >> x; 
    printArray(arr);
    shiftArray(arr, x); 
    printArray(arr);
}