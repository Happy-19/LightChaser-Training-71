#include <stdio.h>
#include <stdlib.h>

// 创建结构体并对此改名
typedef struct student{
    char name[10];
    float num;
}S;

int main(){
    // 使用结构体定义变量（此处为了简化只定义变量而非数组）
    S s1;
    // 将数据输入并存入
    printf("请输入学生姓名: \n学生分数: \n");
    scanf("%s %f",&s1.name,&s1.num);
    // 结果呈现
    printf("学生姓名: %s,学生分数: %f\n",s1.name,s1.num);
    return 0;
}