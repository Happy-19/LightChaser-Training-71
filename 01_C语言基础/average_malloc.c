// 申请动态内存求平均值并且free
#include <stdio.h>
#include <stdlib.h>

int main(){
    // 使数组内存动态可赋
    int len;
    printf("请输入数组存储的数据个数:\n");
    scanf("%d",&len);
    // 申请内存并用指针指定
    int *arr = malloc(len * (sizeof(int)));

    // 内存不足时预警避免成为野指针
    if(arr ==NULL){
        printf("警告:内存不足\n");
        return -1
    }
    // 定义变量便于累加
    int sum = 0;

    for(int i = 0;i<len;i++){
        // 给数组赋值并遍历
        arr[i] = i+2;
        printf("arr[%d] = %d\n",i,arr[i]);
        // 求和
        sum = sum + arr[i];
    }

    // 求取平均值，强制转换数据类型避免结果有问题
    double average = (double)sum/len;
    // 结果呈现
    printf("平均数为: %lf\n",average);
    // 释放空间避免爆满
    free(arr);
    // 让指针指向空,避免野指针
    arr = NULL;
    return 0;
}