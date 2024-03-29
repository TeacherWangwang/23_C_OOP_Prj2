#include <iostream>
using namespace std;
//类定义一:方法实现全部在类的内部
class Student {
public:
    int id;
    string name;
    int age;
public:
    Student(){
        cout << "无参构造函数" << endl;
    }
    /*Student(int id, string name){
        this->id = id;
        this->name = name;
    }*/
    Student(int id, string name) : id(id), name(name) {
        cout << "两个参数的构造函数" << endl;
    }
    Student(int id, string name,int age) : id(id), name(name), age(age) {
        cout << "三个参数的构造函数" << endl;
    }
    //内联函数
    void sayHello() {
        cout << "hello" << id << ", " << name << "," << age << endl;
    }
    int add(int a, int b) {
        return  a + b;
    }
};
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





