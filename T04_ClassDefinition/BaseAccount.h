
#ifndef C_OOP_PRJ2_BASEACCOUNT_H
#define C_OOP_PRJ2_BASEACCOUNT_H


class BaseAccount {
public://属性
    int accountId;
    string name;
    int currentMoney;
public://方法
    BaseAccount(int accountId, const string &name, int currentMoney);

    void show();
    //存款
    void in(int money);
    //取款
    void out(int money);
};
void BaseAccount::show() {//打印当前账户信息
    cout << accountId << ", " << name << ", " << currentMoney << endl;
}
//存款
void BaseAccount::in(int money) {
    currentMoney += money;
}
//取款
void BaseAccount::out(int money) {
    if(money > currentMoney) {
        cout << "余额不足" << endl;
    } else {
        currentMoney -= money;
    }
}

BaseAccount::BaseAccount(int accountId, const string &name, int currentMoney) : accountId(accountId), name(name),
                                                                                currentMoney(currentMoney) {}

#endif
