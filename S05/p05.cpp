#include<iostream> 
using namespace std; 

void printArray(int a[], int count) { 
    cout << "Here is the array: \n";
    for(int i = 0; i < count; i++) { 
        cout << *(a + i) << endl; 
        //cout << a[i] << endl;         
    }
}

int findMax(int* arr, int size) { 
    int max = *arr; 
    for(int i = 1; i < size; i++) { 
        if( *(arr + i) > max) { 
            max = *(arr + i); 
        }
    }
    return max; 
}

int* findMaxPtr(int* arr, int size) { 
    int* max = arr; 
    for(int i = 1; i < size; i++) { 
        if( *(arr + i) > *max) { 
            max = (arr + i); 
            // *max = *(arr + i) is wrong
        }
    }
    return max; 
}

int main() { 
    int ar[7] { 1, 2, 22, 19, 14, 66, 3 };
    printArray(ar, 7);
    int* max = findMaxPtr(ar, 7); 
    cout << "max addr is: " << max << ", max value is: " << *max << endl; 
    printArray(ar, 7);

}