#include <iostream>
using namespace std;
class BaseAccount {
public:
    int accountId;
    string name;
    int currentMoney;
public:
    void show() {//打印当前账户信息
        cout << accountId << ", " << name << ", " << currentMoney << endl;
    }
    //存款
    void in(int money) {
        currentMoney += money;
    }
    //取款
    void out(int money) {
        if(money >= currentMoney) {
            cout << "余额不足" << endl;
        } else {
            currentMoney -= money;
        }
    }
};
int main() {
    BaseAccount account;
    cout << "请输入账户编号:"; cin >> account.accountId;
    cout << "请输入账户姓名:"; cin >> account.name;
    cout << "请输入账户余额:"; cin >> account.currentMoney;
    int tag = 0, money;
    do {
        cout << "**********************************" << endl;
        cout << "*            1 存款               *" << endl;
        cout << "*            2 取款               *" << endl;
        cout << "*            3 余额               *" << endl;
        cout << "*            0 退出               *" << endl;
        cout << "**********************************" << endl;
        cout << "请选择操作类型:"; cin >> tag;
        switch (tag) {
            case 1:
                cout << "请输入存款金额:"; cin >> money;
                account.in(money);
                break;
            case 2:
                cout << "请输入取款金额:"; cin >> money;
                account.out(money);
                break;
            case 3:
                account.show();
                break;
            case 0:
                cout << "再见,离柜概不负责!" << endl;
                break;
        }
    } while (tag != 0);
    return 0;
}







