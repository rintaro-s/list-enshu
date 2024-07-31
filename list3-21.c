#include <stdio.h>

int main(void)
{
	int sw;

	printf("整数：");
	scanf("%d", &sw);

	switch (sw) {
	 case 1  : puts("A");  puts("B");break;  
	 case 2  : puts("C");break;
	 case 5  : puts("D");
	 case 6  : break;
	 case 7  : puts("E");
	 default : puts("F");  break;
	}

	return 0;
}
