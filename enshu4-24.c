#include <stdio.h>

int main(void)
{
	int i, j;   // i,j ループカウンタ
	int height;  // 高さ、横幅

	puts("ピラミッドを作ります。");
	printf("何段ですか：");   scanf("%d", &height);

	for (i = 1; i <= height; i++) {		
        for (j = 1; j <= (height - (i-1)*2+1)/2; j++){		/* 各行にwidth個の'*'を表示 */
			putchar(' ');
		}	/* 長方形はheight行 */
		for (j = 1; j <= (i-1)*2+1; j++){		/* 各行にwidth個の'*'を表示 */
			putchar('*');
		}
		putchar('\n');		/* 改行 */
	}
	return 0;
}
