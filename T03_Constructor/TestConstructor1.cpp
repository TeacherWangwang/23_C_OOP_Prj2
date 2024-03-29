#include <iostream>
using namespace std;
class Student {
public:
    int id;
    string name;
    int age;
    string tel;
public:
    //����:
    //1. ��������������ͬ
    //2. û�з���ֵ,void�ؼ���Ҳʡ��
    //3. �ڴ�������ʱ,��ϵͳ�Զ�����

    //��������һ������ù��캯��
    //����:
    //1 ��ʽ���캯��:����Ա����,һ��������ж��
    //2 ��ʽ���캯��:ϵͳ���,û�в���

    //���캯����ʼ���б�(C++����)
    //����(�������� ������1, �������� ������2) : ������(������), ������(������) {}
    Student(int id, string name) : id(id), name(name) {
    }
    /*Student(int id, string name) {
        this->id = id;
        Student::name = name;
        cout << "���������Ĺ��캯����������" << endl;
    }*/
    /*Student(int pId, string pName) : id(pId), name(pName) {
    }*/

    Student(int id, string name, int age) {
        this->id = id;
        Student::name = name;
        this->age = age;
        cout << "���������Ĺ��캯����������" << endl;
    }
    Student(int id, string name, int age, string tel){
        this->id = id;
        Student::name = name;
        this->age = age;
        this->tel = tel;
        cout << "�ĸ������Ĺ��캯����������" << endl;
    }
    void sayHello() {
        cout << "hello:" << id << ", " << name << ", " << age << ", " << tel << endl;//�����п���ʹ���Լ�������
    }
};
class Teacher {
public:
    int id;string name; int age;
public:
    //1 ���һ���޲εĹ��캯��
    Teacher(){ }
    //2 ��Ӵ�id��name�Ĺ��캯��,��ʹ�ó�ʼ���б�
    Teacher(int id, string name){
        this->id = id;//Teacher::id = id;
        this->name = name;
    }
    //3 ��Ӵ�id��name,age�Ĺ��캯��,ʹ�ù��캯����ʼ���б�
    //����(�������� ������1, �������� ������2) : ������(������), ������(������) {}
    Teacher(int id, string name, int aa) : id(id), name(name), age(aa){}
};
class Employee {
public:
    int id;string name;
public:
    Employee(){
        cout << "���캯���ڶ��󴴽�(�����ڴ�)ʱ�Զ�ִ��" << endl;
    }
    // ��������  ~����(){}
    ~Employee(){
        cout << "���������ڶ�������(�ͷ��ڴ�)ʱ�Զ�ִ��" << endl;
        cout << "��������ֻ��һ��,û�в���" << endl;
    }
};
int main() {
    cout << "��ʾ���캯��֪ʶ!" << endl;
    /*Student zhangsan;
    zhangsan.id = 1;
    zhangsan.name = "����";
    zhangsan.age = 20;
    zhangsan.tel = "18192066168";*/

    //���췽��������:���������Ը���ֵ �������Գ�ʼ��
    Student zhangsan(1, "����", 22, "18192066168");
    Student lisi(2, "lisi", 19);
    Student wangwu(2, "lisi");
    Student tianqi();

    zhangsan.sayHello();

    Teacher wangwang();

    return 0;
}







