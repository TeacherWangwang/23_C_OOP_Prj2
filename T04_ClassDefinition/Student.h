#include <iostream>
using namespace std;
//�ඨ��һ:����ʵ��ȫ��������ڲ�
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
    //����ֻд��������
    void sayHello();
    int add(int a, int b);
};
#endif