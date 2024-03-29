#include <iostream>
using namespace std;
class Person {
public:
    string name;
    bool isMen;
    string id;//身份证号
    string btd;
public:
    Person() {}
    Person(string name, bool isMen, string id, string btd)
        : name(name), isMen(isMen), id(id),btd(btd) {}
    void show() {
        cout << "name = " << name << ", isMen = " << isMen << ", id = " << id << ", " << btd << endl;
    }
};
class Student : public Person {
public:
    int stuId;//学号
    int score;//成绩
public:
    Student() {}
    Student(string name, bool isMen, string id, string btd, int stuId, int score)
    : Person(name, isMen, id, btd),stuId(stuId),score(score) {}
    void show() {
        Person::show();
        cout << stuId << "," << score << endl;
    }
};
class Teacher : public Person {
public:
    string title;
public:
    Teacher(){}
    Teacher(string title):title(title){}
    Teacher(string name, bool isMen, string id, string btd, string title)
    :Person(name, isMen, id, btd), title(title){}

    void show() {
        Person::show();
        cout << "title = " << title << endl;
    }
};
class Stu_Teach : public Student, public Teacher {
public:
    Stu_Teach(){}
    Stu_Teach(string name, bool isMen, string id, string btd, int stuId, int score, string title)
    : Student(name, isMen, id, btd, stuId, score), Teacher(title){}
    void show() {
        Student::show();
        cout << Teacher::title << endl;
    }
};
int main() {
    cout << "派生案例,学校作业:" << endl;
    Student zhangsan("张三", true, "99999999", "2002-2-2", 1, 100);
    zhangsan.show();
    Teacher teacher("易中天", true, "8888888888", "1970-1-1", "教授");
    teacher.show();

    Stu_Teach mzl("马自立", false, "99999999", "2002-2-2", 1, 100, "助教");
    mzl.show();

    return 0;
}
