#include <stdio.h>

// 自定义交换函数
void swap(int *p1 ,int *p2){
    // 定义变量t储存指针变量
    int t;
    // 指针交换随赋值而进行
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

int main(){
    // 定义指针变量和变量
    int *p1,*p2,a,b;
    // 变量赋值和呈现
    printf("请输入两个整数分别给a, b赋值:\n");
    scanf("%d,%d",&a,&b);
    printf("交换前:a = %d,b = %d\n",a,b);
    // 使指针分别指向相应变量
    p1 = &a,p2 = &b;
    // 指针交换
    swap(p1,p2);
    // 交换成果展示
    printf("交换后:a = %d b = %d\n",a,b);
    printf("*p1 = %d *p2 = %d\n",*p1,*p2);
    return 0;
}