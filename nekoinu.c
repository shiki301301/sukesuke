#include <stdio.h>

int main()
{
    int k,l;
    printf("猫は何匹いますか？");
    scanf("%d",&k);
    printf("犬は何匹いますか？");
    scanf("%d",&l);
    
    if (k>l)
    {
        printf("猫(%d)は犬(%d)より多いです\n", k, l);
    }
    else if(k<l)
    {
        printf("猫(%d)猫は何匹いますか犬(%d)はより少ないです\n", k, l);
    }
    else 
    {
        printf("猫(%d)と犬(%d)は同じ数います\n", k, l);
    }
    
    return 0;
}