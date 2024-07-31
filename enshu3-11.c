#include <stdio.h>

int main() {
  int num1, num2;

  // 二つの数を入力
  puts("２つの整数を入力せよ。 ");
  printf("整数１：");   scanf("%d", &num1);
  printf("整数２：");   scanf("%d", &num2);


  if (num1 > num2 && num1 -num2  <= 10 || num1 < num2 && num2 - num1 <= 10) {
    printf("それらの差は10以下です。\n");
  } else {
    printf("それらの差は11以上です。\n");
  }

  return 0;
}
