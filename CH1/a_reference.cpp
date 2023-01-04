#include <iostream>

using namespace std;

int main(){
    int n = 6;
    int & ref = n;
    ref = 7;
    cout << n << endl;
    cout << ref << endl;
    n = 4;
    cout << n << endl;
    cout << ref << endl;

    return (0);
}