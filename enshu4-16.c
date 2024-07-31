#include <stdio.h>

int main(void)
{
    int num,i;

    printf("整数値：");   scanf("%d", &num);
    i = 1;
    while(i <= num){
        printf("%d ",i);
        i +=2;
    }

    return 0;
}