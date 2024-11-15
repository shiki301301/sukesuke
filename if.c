#include <stdio.h>

int main() 
{
    int A;

    printf("整数を入力してください＞＞＞ ");
    scanf("%d", &A);

    if (A == 0) {
        printf("入力された数字はゼロです\n");
    }

    if (A != 0) {
        printf("入力された数はゼロではありません\n");
    }

    if (A > 0) {
        printf("入力された数は正の数です\n");
    }

    if (A < 0) {
        printf("入力された数は負の数です\n");
    }

    if (A >= 10) {
        printf("入力された数は10以上です\n");
    }

    if (A <= -10) {
        printf("入力された数は-10以下です。\n");
    }

    return 0;
}