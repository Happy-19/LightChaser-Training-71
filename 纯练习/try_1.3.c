#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int age =22;
    float score=33.7;
    char level ='C';
    printf("年龄=%d,分数=%.1f,等级=%c\n",age,score,level);
    return 0;
}