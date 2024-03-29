#include <iostream>
using namespace std;
//类定义一:方法实现全部在类的内部
#ifndef C_OOP_PRJ2_STUDENT_H
#define C_OOP_PRJ2_STUDENT_H

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
#endif