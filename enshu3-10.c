#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
    puts("三つの整数を入力してください。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);
	printf("整数３：");   scanf("%d", &n3);


	if (n1 == n2 && n2 == n3 && n1 == n3)
		printf("三つの値は等しいです");
	else if (n1 != n2 && n1 != n3 && n2 != n3)
		printf("３つの値は異なります");
	else
		printf("二つの値が等しいです");
	return 0;
}
