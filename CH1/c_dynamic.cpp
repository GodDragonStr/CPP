#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    int * P;
    int i = 5;
    P = new int[i * 5];
    P[0] = 20;  

    cout << P[0] << endl;
    cout << P << endl;
    cout << typeid(P).name() << endl;
    cout << sizeof(P[0]) << endl;
    cout << P[1] << endl;

    return (0);
}