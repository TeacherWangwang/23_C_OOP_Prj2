#include <iostream>
using namespace std;

class Father {
public:
    string name;
public:
    void driver() {
        cout << "��Ħ�г�" << endl;
    }
};
class Mother {
public:
    void tds() {
        cout << "����˿" << endl;
    }
};
class Son : public Father, public Mother {
public:
    string lineName;
public:
    void qq() {
        cout << "������:" << lineName << ", ��QQ"<< endl;
    }
    void driver() {
        cout << "������д���෽��,������U8" << endl;
    }
    void ykst() {

        Father::driver();
        driver();
    }
};
int main() {
    cout << "��ʾ����(�̳�)֪ʶ!" << endl;
    Son cy;
    cy.name = "cy";
    cy.driver();
    cy.lineName = "��������";
    cy.qq();


    cout << "--------------------------------" << endl;
    cy.ykst();

    cy.tds();
    return 0;
}
