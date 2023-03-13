#include <iostream>

using namespace std;

class CTyre{
	private:
		int radius;
		int width;
	public:
		// ：后面叫做初始化列表
		CTyre(int r, int w): radius(r), width(w){}
};

class CCar{
    private:
        int price;
        CTyre tyre;

    public:
        CCar(int tr, int tw);
};

CCar::CCar(int r, int w): tyre(r, w){};


int main(){
    CCar car(17, 225);

    return 0;
}