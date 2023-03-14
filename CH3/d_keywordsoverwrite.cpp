#include <iostream>

using namespace std;

class CTest{
    private:
        int n;
    public:
        CTest(){n=1;}
        // 常量对象时不能引用非常量成员函数
        int GetValue() const {return n;}
        // 此函数没有const关键字，因此不能被常量对象调用
        int GetValue() {return 2*n;}
};

int main(){
    const CTest objTest1;
    // 这里调用GetValue() const {return n};
    cout << objTest1.GetValue() << endl;
    return 0;
}