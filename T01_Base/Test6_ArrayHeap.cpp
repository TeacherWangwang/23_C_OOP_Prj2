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
    cout << "��ʾ ֪ʶ!" << endl;
    //��������ĳ���?
    int len;
    printf("�����볤��:");
    scanf("%d", &len);//��̬�����ڴ�
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






