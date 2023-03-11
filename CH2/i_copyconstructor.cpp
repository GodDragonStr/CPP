#include <iostream>

using namespace std;

class A{
    public:
        int v;
        A(int n){
            v = n;
        };
        A(A & a){
            v = a.v;
            cout << "Copy constructor called" << endl;
        };
};

A Func(){
    A b(4);
    return b;
}

int main(){
    cout << Func().v << endl;

    return 0;
}