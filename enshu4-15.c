#include <stdio.h>

int main(void)
{
    int min, max, i;
    int tmp = 0;

    printf("何cmから：");   scanf("%d", &min);
    printf("何cmまで：");   scanf("%d", &max);
    printf("何cmごと：");   scanf("%d", &i);
    puts("");

    while (min + tmp <= max) {
        printf("%d cm   %6.2f kg\n", min + tmp, ((double)min + tmp - 100) * 0.9);
        tmp += i;
    }

    return 0;
}