#include <stdio.h>

int main(void)
{
	int n,a=0;

	printf("整数値：");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        if(n%i==0){
            printf("%d\n",i);
            a++;
        }
    }
    printf("約数は%d個です",a);
	return 0;
}
