#include <iostream>
//#include "Student.h"
#include "Student.cpp"
#include "BaseAccount.h"
using namespace std;

int main() {
    cout << "ÑÝÊ¾ ÖªÊ¶!" << endl;
    Student zhangsan;
    Student lisi(1, "lisi");
    Student wangwu(2, "wangwu", 19);
    wangwu.sayHello();
    int a = wangwu.add(3, 5);
    return 0;
}
