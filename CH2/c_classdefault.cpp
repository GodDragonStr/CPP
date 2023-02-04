#include <iostream>

using namespace std;

class Location{
    private:
        int x, y;
    public:
        void init(int x = 0, int y = 0);
        // 第一个valueX，输入int val，无输出
        void valueX(int val){
            x = val;
        } 
        // 第二个valueX，无输入，输出int x
        int valueX(){
            return x;
        }
};

int main(){
    Location A, B;
    A.init(5);
    cout << A.valueX();
    return (0);
}

