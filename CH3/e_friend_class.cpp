#include <iostream>

class CCar {
private:
    int price;

public:
    friend class CDriver;   // 将CDriver声明为CCar的友元类，则接下来CDriver可以访问CCar的私有成员

};

class CDriver {
public:
    CDriver () {};
    CCar *pcar;
    void ModifyCar ()  {
        pcar->price += 1000;    // 因为CDriver是CCar的友元，对于pcar的私有成员可以进行访问 
    }
};

