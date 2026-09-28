#include <stdio.h>
#include <windows.h>


int main() {
     SetConsoleOutputCP(65001);

    float n;
    printf("请输入一个小数:");
    scanf("%f",&n);
    printf("你输入的是：%f\n",n);
    return 0;
}