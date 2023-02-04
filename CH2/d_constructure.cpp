#include <iostream>
#include <string>

using namespace std;

int main(){
    Complex c1; // 默认构造函数被调用，这句话是错的因为构造
                // 构造c1时缺少构造函数的参数error
    Complex * pc = new Complex; // 默认构造函数被调用
                                // 缺少参数error
    return (0);
}

/*********************应该修改为*************************/
int main(){
    Complex c1(2);
    Complex c2(2, 5);
}


class Complex{
    private:
        double real, imag;
    public:
        void Set(double r, double i); // 普通函数
        Complex(double r, double i = 0); // 自定义构造函数
        // 构造函数可以重载的关系
        Complex(double r);
        Complex(Complex c1, Complex c2);
};

void Complex::Set(double r, double i){
    real = r;
    imag = i;
}

Complex::Complex(double r){
    real = r;
    imag = 0;
}

Complex::Complex(double r, double i){
    real = r;
    imag = i;
}

Complex::Complex(Complex c1, Complex c2){
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
}