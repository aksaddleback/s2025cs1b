#include<iostream> 
using namespace std; 

class Distance {
    private:
        int feet;
        int inches;
    public:
        Distance(int f = 0, int i = 0) : feet(f), inches(i<12 ? i : 0) {}
    
        Distance operator+(const Distance& other) const {
            int totalInches = (feet + other.feet) * 12 
                            + (inches + other.inches);
            int newFeet = totalInches / 12;
            int newInches = totalInches % 12;
            return Distance(newFeet, newInches);
        }
    
        bool operator<(const Distance& other) const {
            return (feet * 12 + inches) < (other.feet * 12 + other.inches);
        }
        
        // pre-increment
        Distance& operator++() { 
            inches++; 
            if(inches >= 12) { 
                feet += inches/12; 
                inches %= 12;
            }
            return *this; 
        }

        //post-increment
        // The (int) parameter is purely a syntactic requirement and is not used in the function body. 
        // It allows the compiler to differentiate between the two overloads.
        Distance operator++(int) { 
            Distance d = *this;
            inches++; 
            if(inches >= 12) { 
                feet += inches/12; 
                inches %= 12;
            }
            return d; 
        }
    
        friend ostream& operator<<(ostream& os, const Distance& d);
};
    
ostream& operator<<(ostream& os, const Distance& d) {
    os << d.feet << " feet, " << d.inches << " inches";
    return os;
}
    
int main() {
    Distance d1(5, 10);
    Distance d2(2, 8);
    Distance d3 = d1 + d2;

    cout << "d1 + d2 = " << d3 << endl;

    if (d1 < d2) {
        cout << "d1 is less than d2" << endl;
    } else {
        cout << "d1 is not less than d2" << endl;
    }
    
    Distance d4 = ++d1 + d2; // if d1=5’10”, d2=2’8” => d1=5’11”, d4=8’7”, 
    cout << "++d1 + d2: " << d4 << ", and d1: " << d1 << endl;  

    // resetting d1 to original value
    d1 = Distance(5, 10);
    Distance d5 = d1++ + d2; 
    cout << "d1++ + d2: " << d5 << ", and d1: " << d1 << endl;  
}