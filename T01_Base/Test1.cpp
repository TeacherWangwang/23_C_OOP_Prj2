//#include <stdio.h>
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
//ȫ�ֺ���,�������˼���д����
void sayHello() {
    cout << "hello" << endl;
}
void method2() {
    int m = 90;
    printf("over");
}
void method1(int a) {
    int m = 10;
    method2();
    printf("over");
}
/**
 *
 * @param a ��ֵ����
 * @param b *����ַ����
 * @param c &�����ô���
 */
void m5(int a, int *b, int &c) {
    a++;
    //b++;
    (*b)++;
    c++;

}
void change1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void change2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    /*int *temp2 = a;
    a = b;
    b = temp;*/
}
void change3(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20, z = 10;
//    m5(x, &y, z);
    change3(x, y);
    printf("%d %d %d \n", x, y, z);
//    int *p;
//    p = &a;
//    //�����ͱ���
//    int &c = a;
//    int &d = a;
//    d--;
//    printf("%d \n", a);
//    method1(a);
//    printf("over");


    return 0;
}




