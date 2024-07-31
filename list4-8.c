#include <stdio.h>

int main(void)
{
	int i, no;
	int sum=0;
	
	printf("正の整数を入力してください：");
	scanf("%d", &no);

	i = 0;
	while (i <= no){
		sum = sum + i; /* 合計計算 */
		 i++;		/* iの値を表示した後にインクリメント */
	}
	printf("sum=%d¥n", sum);				/* 合計表示 */
	return 0;
}
