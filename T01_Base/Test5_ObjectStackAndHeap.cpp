#include <iostream>
using namespace std;
class Student {
public:
    int id;
    string name;
    int age;
public: //��Ϊ�ɷ���(����)ʵ��
    void sayHello() {
        cout << "hello:" << id << ", " << name << ", " << age <<endl;//�����п���ʹ���Լ�������
    }
};
Student* test1() {
    Student zhangsan;
    zhangsan.id = 1;
    zhangsan.name = "����";
    zhangsan.age = 20;


    //2 ���� 22
    //Student *wangwu = new Student();
    Student *plisi;
    //plisi = (Student*)malloc(sizeof(Student));//�������ڶ���
    plisi = new Student();
    //Student *wangwu = new Student;
    (*plisi).id = 2; //plisi->id = 2;
    (*plisi).name = "����";
    plisi->name = "����";
    (*plisi).age = 22;
    //(*plisi).sayHello();
    plisi->sayHello();
    //free(plisi);
    //delete plisi;
    //plisi->sayHello();
    return plisi;
}
int main() {
    //��������ջ��
    int m = 90;
    Student *p;
    p = test1();
    delete p;
    return 0;
}



