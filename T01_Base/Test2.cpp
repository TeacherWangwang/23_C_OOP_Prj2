#include <iostream>
using namespace std;
int main() {
    int age = 10;
    float height = 177.3;
    //String
    string name = "zhangsan";
    cout << "age = " << age << ", height = " << height << ", name = " << name << endl;
    cout << "请输入年龄:";
    cin >> age; //scanf("%d", &age);
    cout << "请输入身高:";
    cin >> height;
    cout << "请输入姓名:";
    cin >> name;

    cout << "age = " << age << ", height = " << height << ", name = " << name << endl;
    return 0;
}