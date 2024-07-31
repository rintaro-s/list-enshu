#include <stdio.h>

int main(void)
{
	int i, a,b,sa,min,e;

	printf("2つの整数を入力してください：");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
     if(a > b) {
      sa = a -b;
      min = b;
     }else{
      sa = b - a;
      min = a;
     }
    i = 0;
    sum = 0;

	while (i <= sa){
		sum = sum + i + min;
		 i++;		
	}
	printf("%d\n",sum);	

	return 0;
}
