#include <iostream>

using namespace std;

class Test{
    private:
    public:
        Test(int n){};
        Test(int n, int m){};
        Test(){};
};

int main(){
    Test array1[3] = {1, Test()};
    Test array2[3] = {Test(2, 3), Test(1, 2), 1};
    Test * pArray[3] = {new Test(4), new Test(1, 3)};
    return 0;
}