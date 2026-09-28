#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    for (int i = 1; i <= 100;i++){
        if (i % 2 == 0)
            printf("%d是偶数\n",i);
        else
            printf("%d是奇数\n",i);
    }
    return 0;
}


