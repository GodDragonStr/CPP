#include <iostream>

class Complex {
public:
    double real, img;
    Complex(double r = 0.0, double i = 0.0): real(r), img(i) {}
    Complex operator- (const Complex c);
};


Complex operator+ (const Complex a, const Complex b) {
    return Complex(a.real + b.real, a.img + b.img);
};

Complex Complex::operator- (const Complex c) {
    return Complex(real - c.real, img - c.img);
};


int main () {
    Complex a(2, 2), b(1, 1), c, d;
    c = a + b;
    d = a - b;
    std::cout << "c.real:" << c.real << "\t c.img:" << c.img << std::endl;
    std::cout << "c.real:" << d.real << "\t c.img:" << d.img << std::endl;
    std::cout << "-:" << (a - b).real << "\t" << (a - b).img << std::endl;
    std::cout << "-:" << (a - b).real << "\t" << (a - b).img << std::endl;
    return (0);
}

