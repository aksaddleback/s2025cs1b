#include<iostream> 
#include<fstream> 
using namespace std; 

int main() { 
    int a[7] = {3,-1,-1,10,-3,-2,4};
    int max = a[0]; // why? and why not max = 0 ? 
    // first solution
    for(int start = 0; start < 7; start++) { 
        for(int end = start; end < 7; end++) { 
            //cout << start << ", " << end << endl; 
            int sum = 0; 
            for(int i = start; i <= end; i++) { 
                sum += a[i];
            }
            if (sum > max) { 
                max = sum; 
            }
        }
    }
    cout << max << endl; 
    //secon solution
    max = a[0];
    for(int start = 0; start < 7; start++) { 
        int sum = 0; 
        for(int k = start; k < 7; k++) { 
            sum += a[k];
            if (sum > max) { 
                max = sum; 
            }
        }
    }
    cout << max << endl; 
}