#include <stdio.h>

int main(void)
{
	int no,a,b;	

	do {
		printf("正の整数を入力せよ:");
		scanf("%d", &no);
        if(no <= 0)
         puts("正でない数を入力しないでください");
	} while (no <= 0);

	b = no;
	while(no>0){
        no /= 10;
        a++;
    }
    printf("%dは%d桁です。",b,a);

	return 0;
}
