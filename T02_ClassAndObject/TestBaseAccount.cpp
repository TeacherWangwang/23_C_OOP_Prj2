#include <iostream>
using namespace std;
//类由class关键字定义
class BaseAccount {
public://属性
    int accountId;
    string name;
    int currentMoney;
public://方法
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
    cout << "类与对象银行账户案例!" << endl;
    BaseAccount account;//类名 对象名; 定义对象
    account.accountId = 999; //对象名.属性名访问属性
    account.name = "张三";
    account.currentMoney = 9999;
    account.show(); //对象名.方法名 调用方法
    account.in(10);
    account.show();
    account.out(100000);
    account.out(100);
    account.show();
    return 0;
}




