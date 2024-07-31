#include <stdio.h>

int main(void)
{
	int i,tmp, no;
tmp = 1;
	printf("正の整数を入力せよ：");
	scanf("%d", &no);
	for (i = 1; i <= no;){
        
        printf("%d",tmp);
        tmp++;
        i++;
        if(tmp==10){
            tmp = 0;
        }
	}

	return 0;
}
