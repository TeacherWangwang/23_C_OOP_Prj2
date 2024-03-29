#include <iostream>
using namespace std;

class Employee {
public:
    int id;string name;
public:
    Employee(){
        cout << "构造函数在对象创建(分配内存)时自动执行" << endl;
    }
    Employee(string name):name(name){
        cout << name << " : 构造函数在对象创建(分配内存)时自动执行" << endl;
    }
    // 析构函数  ~类名(){}
    ~Employee(){
        cout << name << " 析构函数在对象消亡(释放内存)时自动执行" << endl;
        //cout << "析构函数只有一个,没有参数" << endl;
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
    Employee zhangsan("zangsan");//栈中
    Employee lisi("lisi");

    Employee *ep1;
    ep1 = new Employee("孙悟空");
    Employee *ep2 = new Employee("猪八戒");

    delete ep1;
    return 0;
}







