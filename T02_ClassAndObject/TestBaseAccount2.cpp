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
        if(money > currentMoney) {
            cout << "����" << endl;
        } else {
            currentMoney -= money;
        }
    }


};
int main() {
    cout << "��ʾ ֪ʶ!" << endl;
    BaseAccount account;
    account.accountId = 1;
    account.name = "zhangsan";
    account.currentMoney = 398;

    account.show();
    account.in(100);
    account.show();
    account.out(200);
    account.show();
    return 0;
}













