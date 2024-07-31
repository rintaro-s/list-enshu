#include <stdio.h>

int main(void)
{
	int i, j;   // i,j ループカウンタ
	int r;  // 高さ、横幅

	puts("正方形を作ります。");
	printf("何段ですか：");   scanf("%d", &r);

	for (i = 1; i <= r; i++) {			/* 長方形はheight行 */
		for (j = 1; j <= r; j++){		/* 各行にwidth個の'*'を表示 */
			putchar('*');
		}
		putchar('\n');		/* 改行 */
	}
	return 0;
}
