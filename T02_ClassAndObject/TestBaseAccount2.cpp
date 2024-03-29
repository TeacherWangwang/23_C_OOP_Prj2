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
        if(money > currentMoney) {
            cout << "余额不足" << endl;
        } else {
            currentMoney -= money;
        }
    }


};
int main() {
    cout << "演示 知识!" << endl;
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













