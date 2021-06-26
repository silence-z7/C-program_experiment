#include <stdio.h>
int main()
{
    int product = 1; //总乘积
    int i, n;

    printf("Please input a number:");
    scanf("%d", &n);
    for (i = n; i > 1; i--)
        product *= i;
    printf("The factorial of n is %d.\n", product);
    getchar();
    getchar();
    
    return 0;
}