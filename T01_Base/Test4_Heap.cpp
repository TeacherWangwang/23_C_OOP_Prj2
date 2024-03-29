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
    //需求 把20存在堆中
    //1 把20存在了栈中
    int num = 20;
    int *p = &num;
    int *p2,  *p3;
    //malloc(4);
    //p2 = (int*)malloc(sizeof(int));
    p2 = (int*)malloc(sizeof(int));//C语言
    p3 = new int;//p3 = new int();
//    printf("%d %d %d \n", &num, &p, &p2);
    printf("%d %d\n", p2, p3);
    *p2 = 20; *p3 = 20;
    free(p2);
    delete p3;

    printf("over haha\n");
    return 0;
}

