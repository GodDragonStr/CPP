#include <iostream>

using namespace std;

class Demo{
    private:
        int value;
    public:
        void SetValue(){}
};

const Demo Obj;

class Sample{
    public:
        int value;
        void GetValue() const;
        void func(){};
        Sample(){};
};

void Sample::GetValue() const{
    // value = 0;
    // func();
}


int mian(){

    return 0;
}