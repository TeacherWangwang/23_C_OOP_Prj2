#include <iostream>
#include "Student.h"

using namespace std;

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