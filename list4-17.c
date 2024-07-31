#include <stdio.h>

int main(void)
{
	int i, j;   // i,j ループカウンタ
	int height, width;  // 高さ、横幅

	puts("長方形を作ります。");
	printf("高さ：");   scanf("%d", &height);
	printf("横幅：");   scanf("%d", &width);

	for (i = 1; i <= height; i++) {			/* 長方形はheight行 */
		for (j = 1; j <= width; j++){		/* 各行にwidth個の'*'を表示 */
			putchar('*');
		}
		putchar('\n');		/* 改行 */
	}
	return 0;
}
