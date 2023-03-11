#include <iostream>
using namespace std;

class A{
    public:
        A(){};
        A(A & a){
            cout << "Copy Constructor called: " << endl; 
        }
};

void Func(A a1){};

int main(){
    // A a2是一个默认的无参的构造，因此a2生成时为A(){};
    A a2;

    // 由于Func被调用时，其中的形参一定会被初始化：
    // (A a1)，a1的初始化是A类的复制构造函数A(A & a2)
    Func(a2);

    return 0;
}

