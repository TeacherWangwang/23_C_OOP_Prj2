
#ifndef C_OOP_PRJ2_BASEACCOUNT_H
#define C_OOP_PRJ2_BASEACCOUNT_H


class BaseAccount {
public://����
    int accountId;
    string name;
    int currentMoney;
public://����
    BaseAccount(int accountId, const string &name, int currentMoney);

    void show();
    //���
    void in(int money);
    //ȡ��
    void out(int money);
};
void BaseAccount::show() {//��ӡ��ǰ�˻���Ϣ
    cout << accountId << ", " << name << ", " << currentMoney << endl;
}
//���
void BaseAccount::in(int money) {
    currentMoney += money;
}
//ȡ��
void BaseAccount::out(int money) {
    if(money > currentMoney) {
        cout << "����" << endl;
    } else {
        currentMoney -= money;
    }
}

BaseAccount::BaseAccount(int accountId, const string &name, int currentMoney) : accountId(accountId), name(name),
                                                                                currentMoney(currentMoney) {}

#endif
