// 申请动态内存求平均值并且free
#include <stdio.h>
#include <stdlib.h>

int main(){
    // 申请内存并用指针指定
    int *arr = malloc(5 * (sizeof(int)));
    // 定义变量便于累加
    int sum = 0;

    for(int i = 0;i<=4;i++){
        // 给数组赋值并遍历
        arr[i] = i+2;
        printf("arr[%d] = %d\n",i,arr[i]);
        // 求和
        sum = sum + arr[i];
    }

    // 求取平均值，强制转换数据类型避免结果有问题
    double average = (double)sum/5;
    // 结果呈现
    printf("平均数为: %lf\n",average);
    // 释放空间避免爆满
    free(arr);
    return 0;
}