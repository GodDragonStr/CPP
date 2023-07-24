#include <iostream>

using namespace std;

class CCar; // 提前声明一下CCar，编译器会将其当做一个累出来

class CDriver{
    public:
        void Modifycar(CCar * pCar){};  // CCar *是一个指针类型，所以在前面声明即可。如果使用CCar Car，即为一个对象那么CCar需要在前面定义完整
};
class CCar{
    private:
        int price;
    friend int MostExpensiveCar(CCar cars[], int total);
    friend void CDriver::Modifycar(CCar * pCar);    // 将CDriver::Modifycar声明为CCar的友元
};

void CDriver::Modifycar(CCar * pCar){
    pCar->price += 1000;
}



int main(){
    
    return 0;
}