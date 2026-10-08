#include <stdio.h>

int main(){
    // 定义变量
    char a;
    double b,c,num;
    // 计算器
    printf("请输入需要计算的内容:\n");
    scanf("%lf %c %lf",&b,&a,&c);
    // 计算结果呈现
    if(c == 0&&a == '/'){
        printf("提示:除数为零\n");
    }
    else if(a == '+'){
        num = b+c;
        printf("%lf\n",num);
    }
    else if(a == '-'){
        num = b-c;
        printf("%lf\n",num);
    }
    else if(a == '*'){
        num = b*c;
        printf("%lf\n",num);
    }
    else{
        num = b/c;
        printf("%lf\n",num);
    }
    return 0;
}