#include <iostream>
using namespace std;
//定义学生类
class Student {//类由class关键字定义(类名首字母大写)
public: //属性由变量实现
    int id;
    string name;
    int age;
public: //行为由方法(函数)实现
    void sayHello() {
        cout << "hello:" << id << ", " << name << ", " << age <<endl;//方法中可以使用自己的属性
    }
    int add(int a, int b) {
        return a + b;
    }
    int max(int a, int b) {//计算a与b的最大公约数
        int gys = 1;//
        return gys;
    }
    int min(int a, int b) {//计算a与b的最大公约数
        int gbs = 1;//
        return gbs;
    }
};//C++结束大括号后有分号;(Java没有)
int main() {
    cout << "演示类与对象" << endl;
    //类名 对象名; 定义对象
    Student mzl;
    //对象名.属性名  "访问"属性=赋值或取值
    mzl.id = 9527; mzl.name = "马智力"; mzl.age = 19;
    int haha = mzl.age;//取值: 赋给变量haha
    cout << mzl.age << endl;//取值:打印到控制台
    //对象名.方法名 "调用"方法
    mzl.sayHello();
    int r = mzl.add(1, 1);
    cout << r << endl;
    Student zhangsan;
    Student lisi;
    //创建堆中的学生对象
    Student *plisi;//指针类型变量,用来存储堆内存地址
    plisi = (Student*)malloc(sizeof(Student));//申请堆内存并赋值给指针变量
    plisi = new Student;//C++建议写法
    //Student *wangwu = new Student; //可以写一行
    (*plisi).id = 2; //plisi->id = 2;
    plisi->name = "李四";//
    plisi->age = 22;
    //(*plisi).sayHello();
    plisi->sayHello();
    //free(plisi);
    delete plisi;
    return 0;
}




















