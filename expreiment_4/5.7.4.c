#include <stdio.h>
#include <math.h>
int main()
{
    int a, n;
    int sum = 0, term = 0; //总和，通项
    int i, j;

    printf("Please input 'a':");
    scanf("%d", &a);
    printf("Please input 'n':");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            term += a * pow(10.0, j - 1);
        sum += term;
        term = 0;
    }
    printf("The sum is %d\n", sum);
    getchar();
    getchar();

    return 0;
}