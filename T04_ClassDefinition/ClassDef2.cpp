#include <iostream>
using namespace std;
//�ඨ��һ:����ʵ��ȫ��������ڲ�
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


//ȫ�ֺ��� c++�ȿ���ʹ����������˼���д����,�ֿ���ʹ��������̵�˼���д����
inline void hello() {
    cout << "����ȫ�ֺ���,�Ҳ������κ���" << endl;
}

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





