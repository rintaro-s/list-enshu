#include <stdio.h>

int main(void)
{
    int num,i;

    printf("nの値：");   scanf("%d", &num);
    i = 1;
    while(i <= num){
        printf("%dの２乗は：%d\n",i,i*i);
        i ++;
    }

    return 0;
}