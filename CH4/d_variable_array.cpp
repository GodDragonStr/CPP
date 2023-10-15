#include <iostream>
#include <algorithm>

using namespace std;

class CArray {
    int size;   // 数组元素的个数
    int *ptr;   // 指向动态分配的数组
public:
    CArray (int s = 0);
    CArray (CArray& a);
    ~CArray();
};

int main () {
    CArray a;
    // add element in the end
    for (int i = 0; i < 5; ++i) {
        a.push_back(i);
    }
    CArray a2, a3;
    // a2是一个新的数组，其内容和a是一样的，存储空间互不影响
    a2 = a;
    for (int i = 0; i < a.length(); ++i) {
        cout << a2[i] << " ";
    }
    // 此时希望a2和a3一样，a2原来所占用的存储空间被释放掉，此时a2，a3都是空数组
    a2 = a3;
    // a2为空数组，a2.length()等于0
    for (int i = 0; i < a2.length(); ++i) {
        cout << a2[i] << " ";
    }
    cout << endl;
    // 将a的第4个元素赋值为100
    a[3] = 100;
    // 复制构造函数对a4进行初始化
    CArray a4(a);
    for (int i = 0; i < a4.length(); ++i) {
        cout << a4[i] << " ";
    }
    // 上述程序输出结果为：
    // 0 1 2 3 4
    // 0 1 2 100 4
    
    return 0;
}