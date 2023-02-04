#include <iostream>
#include <string.h>

using namespace std;

class CEmployee{
    private:
        char szName[30]; // 名字
    public:
        char szName2[3];
        int salary; // 工资
        void setName(char * name);
        void getName(char * name);
        void averageSalary(CEmployee e1, CEmployee e2);
};
void CEmployee::setName(char * name){
    strcpy(szName, name); // ok
}
void CEmployee::getName(char * name){
    strcpy(name, szName);
}
void CEmployee::averageSalary(CEmployee e1, CEmployee e2){
    cout << e1.szName; // ok,访问同类其他对象私有成员（只能在同类对象函数中访问，其他则不行如：main等）
    salary = (e1.salary, e2.salary) / 2;
}

int main(){
    CEmployee e;
    // strcpy(e.szName, "Tom123456789"); // 编译错误，不能访问私有成员
    strcpy(e.szName2, "Tom123456789"); // ok,可以访问共有成员变量
    e.setName("Tom");
    e.salary = 5000;
    cout << e.szName2[0] << endl;
    return (0);
}