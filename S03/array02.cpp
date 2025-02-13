#include<iostream> 
#include<fstream> 
using namespace std; 

void generateArray(int a[], int size = 1000) { 
    for(int i = 0; i < 1000; i++) { 
        int value = rand() % 10000; 
        a[i] = value; 
    }
}

void storeInFile(int a[], int size = 1000, string fileName = "array02.txt") {
    ofstream f(fileName);
    for(int i = 0; i < size; i++) { 
        f << a[i] << " "; 
    }
    f.close(); 
}

void readFile(int a[], int size = 1000, string fileName = "array02.txt") {
    ifstream f(fileName);
    for(int i = 0; i < size; i++) { 
        f >> a[i];
    }
    f.close(); 
}

void printArray(int a[], int size = 1000) {
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void insert(int a[], int pos, int size=1000) { 
    for(int j = pos; j > 0; j--) { 
        if (a[j] < a[j-1]) { 
            int temp = a[j];
            a[j] = a[j-1]; 
            a[j-1] = temp; 
        } else { 
            break; // important for efficiency, not correctness
        }
    }

}

int main() { 
    int a[1000]; 
    //generateArray(a);
    //storeInFile(a);
    readFile(a);
    for(int i = 1; i < 1000; i++) { 
        insert(a, i);
        // for(int j = i; j > 0; j--) { 
        //     if (a[j] < a[j-1]) { 
        //         int temp = a[j];
        //         a[j] = a[j-1]; 
        //         a[j-1] = temp; 
        //     } else { 
        //         break; // important for efficiency, not correctness
        //     }
        // }
    }
    printArray(a); 
}