#include <iostream>
using namespace std;
int main() {
    int age = 10;
    float height = 177.3;
    //String
    string name = "zhangsan";
    cout << "age = " << age << ", height = " << height << ", name = " << name << endl;
    cout << "����������:";
    cin >> age; //scanf("%d", &age);
    cout << "���������:";
    cin >> height;
    cout << "����������:";
    cin >> name;

    cout << "age = " << age << ", height = " << height << ", name = " << name << endl;
    return 0;
}