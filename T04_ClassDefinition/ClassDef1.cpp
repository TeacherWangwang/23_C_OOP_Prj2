#include <iostream>
using namespace std;
//�ඨ��һ:����ʵ��ȫ��������ڲ�
class Student {
public:
    int id;
    string name;
    int age;
public:
    Student(){
        cout << "�޲ι��캯��" << endl;
    }
    /*Student(int id, string name){
        this->id = id;
        this->name = name;
    }*/
    Student(int id, string name) : id(id), name(name) {
        cout << "���������Ĺ��캯��" << endl;
    }
    Student(int id, string name,int age) : id(id), name(name), age(age) {
        cout << "���������Ĺ��캯��" << endl;
    }
    //��������
    void sayHello() {
        cout << "hello" << id << ", " << name << "," << age << endl;
    }
    int add(int a, int b) {
        return  a + b;
    }
};
int main() {
    cout << "��ʾ ֪ʶ!" << endl;
    Student zhangsan;
    Student lisi(1, "lisi");
    Student wangwu(2, "wangwu", 19);
    wangwu.sayHello();
    int a = wangwu.add(3, 5);

    cout << a << endl;

    return 0;
}





