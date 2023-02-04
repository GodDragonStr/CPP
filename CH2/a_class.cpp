#include <iostream>

using namespace std;

int mian(){

    return (0);
}

class CRectangle
{
private:
    /* data */
public:
    int w, h;
    int Area(/* args */);
    int Perimeter();
    void Init(int W_, int H_);
protected:
    /* data */
private:
    /* data */
};

int CRectangle::Area(/* args */){
    return w*h;
};

int CRectangle::Perimeter(){
    return 2*(w + h);
};

void CRectangle::Init(int W_, int H_){
    w = W_;
    h = H_;
};




