#include <iostream>

using namespace std;

class Complex {
    double real, imag;
    public:
        Complex (double r, double i): real(r), imag(i) {}
        Complex operator+ (double r); 
};

Complex Complex::operator+(double r) {
    return Complex(real + r, imag);
};

int main () {
    
    
    return 0;
}