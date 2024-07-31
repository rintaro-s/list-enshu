#include <stdio.h>

int main(void)
{
	int i, j;   /* ループカウンタ・数を数える変数 */

	for (i = 1; i <= 19; i++) {
		for (j = 1; j <= 19; j++){
			printf("%4d", i * j);
		}
		putchar('\n');	 /* 改行 */
	}

	return 0;
	
}
