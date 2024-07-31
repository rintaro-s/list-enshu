#include <stdio.h>

int main(void)
{
	int n1, n2,sa;

	puts("二つの整数を入力してください。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

    if(n1 > n2) 
      sa = n1 -n2;
    else
      sa = n2 - n1;

    printf("それらの差は%dです。\n",sa);

	return 0;
}
