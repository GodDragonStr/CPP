#include <iostream>

using namespace std;

// 必须在定义类的文件中对静态成员变量惊醒一次说明
// 或初始化，否则编译能通过，连接不能通过

class CRectangle{
    private:
        int w, h;
        // 静态成员变量
        static int nTotalArea;
        static int nTotalNumber;
    public:
        CRectangle(int w_, int h_);
        ~CRectangle();
        // 静态成员函数
        static void PrintTotal();

};

CRectangle::CRectangle(int w_, int h_){
    w = w_;
    h = h_;
    nTotalNumber ++;
    nTotalArea += w*h;
}

CRectangle::~CRectangle(){
    nTotalNumber --;
    nTotalArea -= w*h;
}


void CRectangle::PrintTotal(){
    cout << nTotalNumber << "," << nTotalArea << endl;
}

// 初始化静态成员变量为0
int CRectangle::nTotalArea = 0;
int CRectangle::nTotalNumber = 0;


int main(){
    CRectangle r1(3,3);
    CRectangle r2(2,2);
    // wrong，尽管是静态成员变量但属于私有成员不能访问输出
    // cout << CRectangle::nTotalNumber;
    CRectangle::PrintTotal();
    r1.PrintTotal();

    return 0;
}