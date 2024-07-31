#include <stdio.h>

int main(void)
{
	int n1, n2, max,min;

	puts("二つの整数を入力してください。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	max = (n1 > n2) ? n1 : n2;		/* 大きいほうの値をmaxに代入 */
    min = (n1 < n2) ? n1 : n2;		

//    if (n1 > n2)
//		printf("大きいほうの値は%dです。\n", max);
//	else
//		printf("大きいほうの値は%dです。\n", max);


	printf("大きいほうの値は%dです。\n", max);
    printf("小さいほうの値は%dです。\n", min);

	return 0;
}
