#include<stdio.h>

int main()
{
    char c;

    printf("Please input a character:");
    scanf("%c",&c);
    while(c<'a'||c>'z')
    {
        printf("enter error!\n");
        getchar();
        scanf("%c",&c);
    }
    c-=32;
    printf("The capital of it is %c.",c);
    getchar();
    getchar();
    return 0;
}