#include<iostream> 
using namespace std; 

float pow(int b, int e) { 
    float base = b; 
    if (e < 0) { 
        base = 1 / (float)b; 
        e *= -1;
    }
    if (e == 0) { 
        return 1; 
    }
    float res = base;
    while(e-- > 1) { 
        res *= base; 
    } 
    return res; 
}

// we overloaded the function pow
void pow(int b, int e, float& result) { 
    float base = b; 
    if (e < 0) { 
        base = 1 / (float)b; 
        e *= -1;
    }
    if (e == 0) { 
        result = 1; 
    }
    result = base;
    while(e-- > 1) { 
        result *= base; 
    } 
}

float powRec(int b, int e) { 
    // let's assume exp >= 1
    if (e == 1) { 
        return b; 
    } else { 
        return b * powRec(b, e - 1); 
    }
}

int main() { 
    int base, exp; 
    cout << "Enter two numbers (base, exp): "; 
    cin >> base; 
    cin >> exp;
    float res = pow(base, exp);
    //float res = powRec(base, exp);
    cout << res << endl; 
    float result; 
    pow(base, exp, result);
    cout << result << endl; 
}