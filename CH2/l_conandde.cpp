#include <iostream>

using namespace std;

class Demo{
    public:
        int id;
        Demo(int i){
            id = i;
            cout << "id" << id << "constructed" << endl;
        }
        ~Demo(){
            cout << "id" << id << "destructed" << endl;
        }
};
// 全局对象初始化，在main函数执行之前就调用，会自动调用构造函数初始化
Demo d1(1);
void Func(){
    // 静态的局部变量
    static Demo d2(2);
    Demo d3(3);
    cout << "func" << endl;
}

int main(){
    // 对象初始化调用构造函数，输出“constructed”
    Demo d4(4);
    // 这里不是给对象赋值。而是使用了类型转换构造函数，创建一个输入为6的临时对象
    // 将这个临时对象赋值给d4，因此也会输出“constructed”
    // 当临时对象赋值完成后消亡，还会调用析构函数“destructed”
    d4 = 6;
    // 输出main
    cout << "main" << endl;
    // 局部对象生成时会调用“constructed”，在消亡时调用“destructed”
    // 局部对象得生存周期是：包含其最内层的花括号里，当被定义时生成，最内层花括号结束时消亡
    { Demo d5(5);}
    // 进入到func，static静态局部变量生成调用“constructed"
    // 局部对象Demo d3(d3)生成调用“constructed”
    // func函数结束后静态局部变量d2不会消亡，d3会消亡调用“destructed”
    Func();
    cout << "main ends" << endl;
    // 当main结束时里面的哪些对象会消亡呢
    // 首先d4会消亡，d4被类型转换为6后输出“id：6 destructed”
    // 先初始化的后析构，因此先d2消亡，再d1消亡
    return 0;
}