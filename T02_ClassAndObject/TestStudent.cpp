#include <iostream>
using namespace std;
//����ѧ����
class Student {//����class�ؼ��ֶ���(��������ĸ��д)
public: //�����ɱ���ʵ��
    int id;
    string name;
    int age;
public: //��Ϊ�ɷ���(����)ʵ��
    void sayHello() {
        cout << "hello:" << id << ", " << name << ", " << age <<endl;//�����п���ʹ���Լ�������
    }
    int add(int a, int b) {
        return a + b;
    }
    int max(int a, int b) {//����a��b�����Լ��
        int gys = 1;//
        return gys;
    }
    int min(int a, int b) {//����a��b�����Լ��
        int gbs = 1;//
        return gbs;
    }
};//C++���������ź��зֺ�;(Javaû��)
int main() {
    cout << "��ʾ�������" << endl;
    //���� ������; �������
    Student mzl;
    //������.������  "����"����=��ֵ��ȡֵ
    mzl.id = 9527; mzl.name = "������"; mzl.age = 19;
    int haha = mzl.age;//ȡֵ: ��������haha
    cout << mzl.age << endl;//ȡֵ:��ӡ������̨
    //������.������ "����"����
    mzl.sayHello();
    int r = mzl.add(1, 1);
    cout << r << endl;
    Student zhangsan;
    Student lisi;
    //�������е�ѧ������
    Student *plisi;//ָ�����ͱ���,�����洢���ڴ��ַ
    plisi = (Student*)malloc(sizeof(Student));//������ڴ沢��ֵ��ָ�����
    plisi = new Student;//C++����д��
    //Student *wangwu = new Student; //����дһ��
    (*plisi).id = 2; //plisi->id = 2;
    plisi->name = "����";//
    plisi->age = 22;
    //(*plisi).sayHello();
    plisi->sayHello();
    //free(plisi);
    delete plisi;
    return 0;
}




















