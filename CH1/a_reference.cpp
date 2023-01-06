#include <iostream>

using namespace std;

int return_n = 10;
void swap(int * a, int * b);
void swap_ref(int & a, int & b);
int & SetValue();

int main(){
    int n = 6;
    int & ref = n;
    ref = 7;
    cout << n << endl;
    cout << ref << endl;
    n = 4;
    cout << n << endl;
    cout << ref << endl;

    // 多个引用同一个变量
    double a1 = 4;
    double & ref1 = a1;
    double & ref2 = a1;
    ref1 = 1;
    cout << a1 << endl;
    cout << ref2 << endl;
    ref2 = 2;
    cout << "多个引用同一个变量" <<endl;
    cout << a1 << endl;
    cout << ref1 << endl;

    // 引用引用变量
    double b1 = 3, b2 = 6;
    double & ref3 = b1;
    double & ref4 = ref3;
    ref4 = b2;
    cout << "引用引用变量" << endl;
    cout << b1 << endl;
    cout << ref3 << endl;

    // 引用在变量交换中的应用
    int c1 = 1, c2 = 2;
    swap(& c1, & c2);
    cout << "c1:" << c1 << "\t c2:" << c2 << endl;

    int c3 = 1, c4 = 2;
    swap_ref(c3, c4);
    cout << "c3:" << c3 << "\t c4:" << c4 << endl;

    // 引用作为函数的返回值
    SetValue() = 20;
    cout << return_n << endl;

    return (0);
}

void swap(int * a, int * b){
    // swap传入的是a, b的地址
    // 不能通过形参变量交换而是通过指针变量交换
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_ref(int & a, int & b){
    // 变量进行拷贝赋值等操作时离不开内存地址的运转
    // 引用可以使用地址的方式赋值拷贝
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int & SetValue(void){
        return return_n;
    }

    