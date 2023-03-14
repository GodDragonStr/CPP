#include <iostream>

using namespace std;

class CDriver{
    public:
        void Modifycar(CCar * pCar){};
};
class CCar{
    private:
        int price;
    friend int MostExpensiveCar(CCar cars[], int total);
    friend void CDriver::Modifycar(CCar * pCar);
};

int main(){
    
    return 0;
}