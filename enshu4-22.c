#include <stdio.h>

int main(void)
{
	int i, j ,a ,b;   // i,j ループカウンタ
	int height, width;  // 高さ、横幅

	puts("長方形を作ります。");
	printf("一辺（その１）：");   scanf("%d", &a);
	printf("一辺（その２）：");   scanf("%d", &b);

    if(a>b){
        height = b;
        width = a;
    }else{
        height = a;
        width =b;
    }

	for (i = 1; i <= height; i++) {			/* 長方形はheight行 */
		for (j = 1; j <= width; j++){		/* 各行にwidth個の'*'を表示 */
			putchar('*');
		}
		putchar('\n');		/* 改行 */
	}
	return 0;
}
