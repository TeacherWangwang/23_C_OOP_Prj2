#include <iostream>
using namespace std;
class A{
public:
    A(){
        cout << "a" << endl;
    }
    ~A() {
        cout << "Destructor " << endl;
    }
};
class B{
    int m;
public:
    B(int m = 0){
        cout << m << endl;
    }
    ~B() {
        cout << "Destructor " << endl;
    }
};
class Date {
public:
    int y, m, d;
public:
    Date() {
        cout << "内层类构造函数" << endl;
    }
    ~Date() {
        cout << "内层类析构函数" << endl;
    }
};
class Student {
public:
    int id;
    Date btd;
public:

    Student(){
        cout << "外层类构造函数" << endl;
    }
    ~Student(){
        cout << "外层类析构函数" << endl;
    }
};

int main() {

    //A b[3];
    //A a;
    /*B b;
    B b2[4] = {2, 5, 7};*/
    Student zhangsan;//在构建自己时,先把它的属性构建好 生日


    //1 2 0
    //

    return 0;
}








