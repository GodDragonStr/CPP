#include <iostream>

using namespace std;

class Ctest{
    public:
        ~Ctest(){ cout << "destructor called" << endl; }
};



int main(){
    // 对象数组array调用
    Ctest array[2];
    // 结束提示语句
    cout << "End Main" << endl;
    // main结束后数组对象会被释放，调用~Ctest
    return 0;
}