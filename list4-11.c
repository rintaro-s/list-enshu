#include <stdio.h>

int main(void)
{
	int i, no;

	printf("正の整数を入力してください：");
	scanf("%d", &no);
    i = 0;
    while(i <= no){
        printf("%d ", i);
        i++;
    }
	// for (i = 0; i <= no; i++){
	// 	printf("%d ", i);
	// }
	putchar('\n');		/* 改行 */

	return 0;
}
