#include<iostream> 
using namespace std; 

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    
        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, imag + other.imag);
        }
    
        Complex operator-(const Complex& other) const{
            return Complex(real - other.real, imag - other.imag);
        }

        //(a + bi) * (c + di) = (ac - bd) + (ad + bc)i
        Complex operator*(const Complex& other) const { 
            double real = this->real * other.real - this->imag * other.imag; 
            double imag = this->real * other.imag + this->imag * other.real; 
            return Complex(real, imag); 
        }
    
        friend ostream& operator<<(ostream& os, const Complex& c);
};
    
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}
    
int main() {
    Complex c1(2.0, 3.0);
    Complex c2(1.0, 2.0);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2; 
    cout << c1 << endl; 
    cout << c2 << endl; 
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 - c2 = " << c4 << endl;
    cout << "c1 * c2 = " << c5 << endl; 
    return 0;
}