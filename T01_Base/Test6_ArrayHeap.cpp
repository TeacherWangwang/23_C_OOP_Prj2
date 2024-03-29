#include <iostream>
using namespace std;
void reverse(int nums[], int len) {
    for (int i = 0; i < len / 2; ++i) {
        int temp = nums[i];
        nums[i] = nums[len - i - 1];
        nums[len - i - 1] = temp;
    }
}
int main() {
    cout << "演示 知识!" << endl;
    //输入数组的长度?
    int len;
    printf("请输入长度:");
    scanf("%d", &len);//动态分配内存
    int *p;
    p = (int*)malloc(sizeof(int) * len);
    for (int i = 0; i < len; ++i) {
        scanf("%d", p + i);
    }
    printf("ok\n");
    reverse(p, len);
    for (int i = 0; i < len; ++i) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    free(p);

    return 0;
}






