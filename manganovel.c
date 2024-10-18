#include <stdio.h>

int main()
{
    int A, B;
    printf("How many mangas?");
    scanf("%d", &A);
    do{
        printf("How many novels");
        scanf("%d",&B);
    }while(A == B);
    
    int sum = A + B;
    
    printf("total %d",sum);

    return 0;
}