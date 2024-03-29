#include <iostream>
using namespace std;
class BaseAccount {
public:
    int accountId;
    string name;
    int currentMoney;
public:
    void show() {//��ӡ��ǰ�˻���Ϣ
        cout << accountId << ", " << name << ", " << currentMoney << endl;
    }
    //���
    void in(int money) {
        currentMoney += money;
    }
    //ȡ��
    void out(int money) {
        if(money >= currentMoney) {
            cout << "����" << endl;
        } else {
            currentMoney -= money;
        }
    }
};
int main() {
    BaseAccount account;
    cout << "�������˻����:"; cin >> account.accountId;
    cout << "�������˻�����:"; cin >> account.name;
    cout << "�������˻����:"; cin >> account.currentMoney;
    int tag = 0, money;
    do {
        cout << "**********************************" << endl;
        cout << "*            1 ���               *" << endl;
        cout << "*            2 ȡ��               *" << endl;
        cout << "*            3 ���               *" << endl;
        cout << "*            0 �˳�               *" << endl;
        cout << "**********************************" << endl;
        cout << "��ѡ���������:"; cin >> tag;
        switch (tag) {
            case 1:
                cout << "����������:"; cin >> money;
                account.in(money);
                break;
            case 2:
                cout << "������ȡ����:"; cin >> money;
                account.out(money);
                break;
            case 3:
                account.show();
                break;
            case 0:
                cout << "�ټ�,���Ų�����!" << endl;
                break;
        }
    } while (tag != 0);
    return 0;
}







