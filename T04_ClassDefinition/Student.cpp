#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(){
    cout << "�޲ι��캯��" << endl;
}
Student::Student(int id, string name) : id(id), name(name) {
    cout << "���������Ĺ��캯��" << endl;
}
Student::Student(int id, string name,int age) : id(id), name(name), age(age) {
    cout << "���������Ĺ��캯��" << endl;
}
//�������� ��������ǰ��� ����::������
void Student::sayHello() {//���ⲿ���庯��ʵ��
    cout << "hello" << id << ", " << name << "," << age << endl;
}
int Student::add(int a, int b){//��������
    return a + b;
}