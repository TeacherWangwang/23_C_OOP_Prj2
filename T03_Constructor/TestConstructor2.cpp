#include <iostream>
using namespace std;

class Employee {
public:
    int id;string name;
public:
    Employee(){
        cout << "���캯���ڶ��󴴽�(�����ڴ�)ʱ�Զ�ִ��" << endl;
    }
    Employee(string name):name(name){
        cout << name << " : ���캯���ڶ��󴴽�(�����ڴ�)ʱ�Զ�ִ��" << endl;
    }
    // ��������  ~����(){}
    ~Employee(){
        cout << name << " ���������ڶ�������(�ͷ��ڴ�)ʱ�Զ�ִ��" << endl;
        //cout << "��������ֻ��һ��,û�в���" << endl;
    }
};
class A{
public:
    A(){
        cout << "a";
    }
    ~A() {
        cout << "Destructor " << endl;
    }
};
int main() {
    Employee zhangsan("zangsan");//ջ��
    Employee lisi("lisi");

    Employee *ep1;
    ep1 = new Employee("�����");
    Employee *ep2 = new Employee("��˽�");

    delete ep1;
    return 0;
}







