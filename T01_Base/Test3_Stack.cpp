#include <iostream>
using namespace std;
void method2() {
    int a = 10;
}
void method1(int num) {//function
    int a = 10;
    printf("method1栈中num的内存地址:%d\n", &num);
    if(a > 18) {

    } else
        int m = 10;

    a = 11;
    method2();
    printf("%d, %d\n", num, a);
}
int main() {
    cout << "演示动态内存分配知识!" << endl;

    // 复习指针
    int num = 20;
    printf("%d, %d \n", num, &num);
    int *p;
    p = &num;
    printf("%d, %d, %d \n", p, &p, *p);
    printf("main栈中num的内存地址:%d\n", &num);
    method1(num);

    printf("over haha\n");
    return 0;
}

