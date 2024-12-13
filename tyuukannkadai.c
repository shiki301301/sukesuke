#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MIN_LENGTH 8
void checkPasswordStrength(const char *password) {
    int length = strlen(password);
    char *upperPtr = strpbrk(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    char *lowerPtr = strpbrk(password, "abcdefghijklmnopqrstuvwxyz");
    
    if (length >= MIN_LENGTH && upperPtr != NULL && lowerPtr != NULL) {
        printf("このパスワードは強いです。\n");
    } else {
        printf("このパスワードは弱いです。改善点:\n");
        if (length < MIN_LENGTH) {
            printf("- パスワードは8文字以上にしてください。\n");
            
        } if (upperPtr == NULL) {
            printf("- 大文字を少なくとも1文字含めてください。\n");
            
        } if (lowerPtr == NULL) {
            printf("- 小文字を少なくとも1文字含めてください。\n");
            
        }
        
    }
    
}
int main() {
    char password[100];
    printf("パスワードを入力してください: ");
    scanf("%99s", password);
    checkPasswordStrength(password); return 0;
    
}