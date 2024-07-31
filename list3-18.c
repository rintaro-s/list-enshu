#include <stdio.h>

int main(void)
{
	int month;	/* 月 */

	// printf("何月ですか：");
    printf("何点ですか：");
    
	scanf("%d", &month);

	// if (month >= 3 && month <= 5)
	// 	printf("%d月は春です。\n", month);
	// else if (month >= 6 && month <= 8)
	// 	printf("%d月は夏です。\n", month);
	// else if (month >= 9 && month <= 11)
	// 	printf("%d月は秋です。\n", month);
	// else if (month == 1 || month == 2 || month == 12)
	// 	printf("%d月は冬です。\n", month);
	// else
	// 	printf("%d月はありませんよ!!\a\n", month);

	if (month >= 0 && month <= 50)
		printf("%dは不可です。\n", month);
	else if (month >= 50 && month <= 60)
		printf("%dは可です。\n", month);
	else if (month >= 70 && month <= 80)
		printf("%dは良です。\n", month);
	else if (month >= 80 && month <= 100)
		printf("%dは優です。\n", month);
	else
		printf("%dは採点外!!\a\n", month);

	return 0;
}
