#include <iostream>

using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(){};
        // 必须使用常引用
        Complex(const Complex & c){
            real = c.real;
            imag = c.imag;
            cout << "Copy Constructor Called!" << endl;
        }
};

int main(){
    Complex c1;
    Complex c2(c1); // 调用复制构造函数将c1复制给c2

    return (0);
}