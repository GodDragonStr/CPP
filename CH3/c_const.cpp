#include <iostream>

using namespace std;

class Sample{
    public:
        int value;
        void GetValue() const;
        void func(){};
        Sample(){}
};

void Sample::GetValue() const{
    // value = 0;
    // func();

}

int main(){
    const Sample o;
    // 对于常量对象的成员变量不可以被修改
    // o.value = 100;
    // o.func();
    // 可以执行，常量对象上可以执行常量成员函数
    o.GetValue();

    return 0;
}