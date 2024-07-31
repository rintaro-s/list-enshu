#include <stdio.h>

int main(void)
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	i = 2;
	while (i <= no){
		printf("%d ",i);
		 i = i + 2;		/* iの値を表示した後にインクリメント */
	}
	printf("\n");				/* 改行 */

	return 0;
}
