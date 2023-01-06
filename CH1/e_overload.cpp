#include <iostream>

using namespace std;

int Max(int n1, int n2);
int Max(int n1, int n2, int n3);

int main(){
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    cout << Max(n1, n2) << endl;
    cout << Max(n1, n2 ,n3) << endl;
    system("pause");
    return (0);
}

int Max(int n1, int n2){
    return n1;
}

int Max(int n1, int n2, int n3){
    return n3;
}