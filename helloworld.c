// 条件与循环编helloworld
#include <stdio.h>

int main(){
int num;
while(num !=-1)
{
printf("请在-1,0,1三个数字中选一个作为num的值:\n");
scanf("%d",&num);

if(num == 0){
    printf("helloworld\n");
}
else if(num == 1){
    printf("HELLOWORLD\n");
}
}
return 0;
}