#include <iostream>
using namespace std;
class Student {
public:
    int id;
    string name;
    int age;
public: //行为由方法(函数)实现
    void sayHello() {
        cout << "hello:" << id << ", " << name << ", " << age <<endl;//方法中可以使用自己的属性
    }
};
Student* test1() {
    Student zhangsan;
    zhangsan.id = 1;
    zhangsan.name = "张三";
    zhangsan.age = 20;


    //2 李四 22
    //Student *wangwu = new Student();
    Student *plisi;
    //plisi = (Student*)malloc(sizeof(Student));//对象定义在堆中
    plisi = new Student();
    //Student *wangwu = new Student;
    (*plisi).id = 2; //plisi->id = 2;
    (*plisi).name = "李四";
    plisi->name = "李四";
    (*plisi).age = 22;
    //(*plisi).sayHello();
    plisi->sayHello();
    //free(plisi);
    //delete plisi;
    //plisi->sayHello();
    return plisi;
}
int main() {
    //对象定义在栈中
    int m = 90;
    Student *p;
    p = test1();
    delete p;
    return 0;
}



