#include <iostream>

using namespace std;

class Complex{
    public:
        double r, i;
        // 类型转换构造函数，将int n转化为Complex的一个临时对象
        Complex(int n){
            cout << "IntConstructor called" << endl;
            r = n;
            i = 0;
        }
        // 不是类型转换构造函数，此构造函数有两个参数，而类型转换构造函数只有一个
        Complex(double real, double imag){
            r = real;
            i = imag;
        }

};

int main(){
    // 这里输入两个参数，因此调用 Complex(double real, double imag)
    Complex c1(7, 8);
    // 输入一个参数，调用Complex(int n)，实部变为r=12，虚部i=0
    Complex c2 = 12;
    cout << "c1.r:" << c1.r << "\nc1.n:" << c1.i << endl;
    // 此时9会自动转换为一个临时的Complex对象，并将临时对象赋值给c1,也就是重新调用了 Complex(int n)
    c1 = 9;
    cout << "c1.r:" << c1.r << "\nc1.n:" << c1.i << endl;

    return 0;
}