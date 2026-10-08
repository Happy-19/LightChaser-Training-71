
#include <stdio.h>

int main(){
    // 引入sum开始计算
    int sum = 0;
    // 限定1-100以及奇数
    for(int i = 1;i<=100;i+=2)
   {
    // 求和
    sum = i + sum;
   }
    //结果呈现
   printf("%d\n",sum);
    return 0;
}