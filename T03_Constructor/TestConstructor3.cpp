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
        cout << "�ڲ��๹�캯��" << endl;
    }
    ~Date() {
        cout << "�ڲ�����������" << endl;
    }
};
class Student {
public:
    int id;
    Date btd;
public:

    Student(){
        cout << "����๹�캯��" << endl;
    }
    ~Student(){
        cout << "�������������" << endl;
    }
};

int main() {

    //A b[3];
    //A a;
    /*B b;
    B b2[4] = {2, 5, 7};*/
    Student zhangsan;//�ڹ����Լ�ʱ,�Ȱ��������Թ����� ����


    //1 2 0
    //

    return 0;
}








