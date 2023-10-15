#include <iostream>
#include <string>
#include <cstring>

using namespace std;


class String {
    private:
    	char *str;
    public:
    	String (): str(new char[1]) {str[0] = 0;}	// 构造函数使得str指向一个空字符串
    	const char *c_str () {return str;};
    	String& operator = (const char *s);	// 返回一个String&类型的
    	~String () {delete [] str;}	// String析构函数，作用delete str
};

String& String::operator = (const char *s) {
    // 重载“=”以是的obj = “hello” 能成立
    delete [] str;
    str = new char[strlen(s) + 1];
    strcpy(str, s);
    // 因为返回是 String& 即String的引用，因此使用*this
    return *this;
};


int main () {
    String s;
    s = "Good Luck";
    cout << s.c_str() << endl;
    // String s2 = "hello!"; // 这条语句如果不注释就会出错
    s = "Shenzhou 8!"; // 等价于 s.operator=("Shenzhou 8!");
    cout << s.c_str() << endl;

    return 0;
}