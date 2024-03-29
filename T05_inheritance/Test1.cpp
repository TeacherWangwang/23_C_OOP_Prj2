#include <iostream>
using namespace std;

class Father {
public:
    string name;
public:
    void driver() {
        cout << "骑摩托车" << endl;
    }
};
class Mother {
public:
    void tds() {
        cout << "土豆丝" << endl;
    }
};
class Son : public Father, public Mother {
public:
    string lineName;
public:
    void qq() {
        cout << "网名是:" << lineName << ", 聊QQ"<< endl;
    }
    void driver() {
        cout << "子类重写父类方法,开仰望U8" << endl;
    }
    void ykst() {

        Father::driver();
        driver();
    }
};
int main() {
    cout << "演示派生(继承)知识!" << endl;
    Son cy;
    cy.name = "cy";
    cy.driver();
    cy.lineName = "青蛙王子";
    cy.qq();


    cout << "--------------------------------" << endl;
    cy.ykst();

    cy.tds();
    return 0;
}
