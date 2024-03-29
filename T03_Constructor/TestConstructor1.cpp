#include <iostream>
using namespace std;
class Student {
public:
    int id;
    string name;
    int age;
    string tel;
public:
    //定义:
    //1. 方法名与类名相同
    //2. 没有返回值,void关键字也省略
    //3. 在创建对象时,由系统自动调用

    //创建对象一定会调用构造函数
    //分类:
    //1 显式构造函数:程序员定义,一个类可以有多个
    //2 隐式构造函数:系统添加,没有参数

    //构造函数初始化列表(C++特有)
    //类名(参数类型 参数名1, 参数类型 参数名2) : 属性名(参数名), 属性名(参数名) {}
    Student(int id, string name) : id(id), name(name) {
    }
    /*Student(int id, string name) {
        this->id = id;
        Student::name = name;
        cout << "两个参数的构造函数被调用了" << endl;
    }*/
    /*Student(int pId, string pName) : id(pId), name(pName) {
    }*/

    Student(int id, string name, int age) {
        this->id = id;
        Student::name = name;
        this->age = age;
        cout << "三个参数的构造函数被调用了" << endl;
    }
    Student(int id, string name, int age, string tel){
        this->id = id;
        Student::name = name;
        this->age = age;
        this->tel = tel;
        cout << "四个参数的构造函数被调用了" << endl;
    }
    void sayHello() {
        cout << "hello:" << id << ", " << name << ", " << age << ", " << tel << endl;//方法中可以使用自己的属性
    }
};
class Teacher {
public:
    int id;string name; int age;
public:
    //1 添加一个无参的构造函数
    Teacher(){ }
    //2 添加带id与name的构造函数,不使用初始化列表
    Teacher(int id, string name){
        this->id = id;//Teacher::id = id;
        this->name = name;
    }
    //3 添加带id与name,age的构造函数,使用构造函数初始化列表
    //类名(参数类型 参数名1, 参数类型 参数名2) : 属性名(参数名), 属性名(参数名) {}
    Teacher(int id, string name, int aa) : id(id), name(name), age(aa){}
};
class Employee {
public:
    int id;string name;
public:
    Employee(){
        cout << "构造函数在对象创建(分配内存)时自动执行" << endl;
    }
    // 析构函数  ~类名(){}
    ~Employee(){
        cout << "析构函数在对象消亡(释放内存)时自动执行" << endl;
        cout << "析构函数只有一个,没有参数" << endl;
    }
};
int main() {
    cout << "演示构造函数知识!" << endl;
    /*Student zhangsan;
    zhangsan.id = 1;
    zhangsan.name = "张三";
    zhangsan.age = 20;
    zhangsan.tel = "18192066168";*/

    //构造方法的作用:给对象属性赋初值 对象属性初始化
    Student zhangsan(1, "张三", 22, "18192066168");
    Student lisi(2, "lisi", 19);
    Student wangwu(2, "lisi");
    Student tianqi();

    zhangsan.sayHello();

    Teacher wangwang();

    return 0;
}







