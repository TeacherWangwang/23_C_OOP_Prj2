#include <iostream>
using namespace std;
//����class�ؼ��ֶ���
class BaseAccount {
public://����
    int accountId;
    string name;
    int currentMoney;
public://����
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
    cout << "������������˻�����!" << endl;
    BaseAccount account;//���� ������; �������
    account.accountId = 999; //������.��������������
    account.name = "����";
    account.currentMoney = 9999;
    account.show(); //������.������ ���÷���
    account.in(10);
    account.show();
    account.out(100000);
    account.out(100);
    account.show();
    return 0;
}




