#include <stdio.h>

int main(void)
{
	 int no,more;
    do{
   
      printf("整数を入力してください：");
	scanf("%d", &no);

	if (no == 0)
		puts("その数は０です。");
	else if (no > 0)
		puts("その数は正です。");
	else
		puts("その数は負です。");
    printf("もう一回やる？はい：1いいえ:0\n");
	scanf("%d", &more);
    }while(more == 1);
	
	return 0;
}
