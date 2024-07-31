#include <stdio.h>

int main(void)
{
	int i, no,sum;

	printf("nの値：");
	scanf("%d", &no);
	for (i = 0; i <= no; i++){
		sum = sum + i;
	}
	printf("１から%dまでの総和は%dです。",no,sum)	;	/* 改行 */

	return 0;
}
