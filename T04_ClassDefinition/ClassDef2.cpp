#include <iostream>
using namespace std;
//类定义一:方法实现全部在类的内部
class Student {
public:
    int id;
    string name;
    int age;
public:
    Student();
    Student(int id, string name);
    Student(int id, string name,int age);
    //类中只写方法声明
    void sayHello();
    int add(int a, int b);
};
Student::Student(){
    cout << "无参构造函数" << endl;
}
Student::Student(int id, string name) : id(id), name(name) {
    cout << "两个参数的构造函数" << endl;
}
Student::Student(int id, string name,int age) : id(id), name(name), age(age) {
    cout << "三个参数的构造函数" << endl;
}
//外联函数 函数名称前面加 类名::函数名
void Student::sayHello() {//类外部定义函数实现
    cout << "hello" << id << ", " << name << "," << age << endl;
}
int Student::add(int a, int b){//外联函数
    return a + b;
}


//全局函数 c++既可以使用面向对象的思想编写程序,又可以使用面向过程的思想编写程序
inline void hello() {
    cout << "我是全局函数,我不属于任何类" << endl;
}

int main() {
    cout << "演示 知识!" << endl;
    Student zhangsan;
    Student lisi(1, "lisi");
    Student wangwu(2, "wangwu", 19);
    wangwu.sayHello();
    int a = wangwu.add(3, 5);

    cout << a << endl;

    return 0;
}





