#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("左上直角二等辺三角形を表示します。");
	printf("短辺：");
	scanf("%d", &len);
    len ++;

	for (i = 1; i <= len; i++) {		/* i行（i = 1, 2, … , len） */
		for (j = 1; j <= len; j++){	/* 各行にlen - i個の' 'を表示 */
			putchar(' ');
		}
		for (j = 1; j <=len - i; j++){		/* 各行にi個の'*'を表示 */
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
