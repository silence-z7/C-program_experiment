#include <stdio.h>
int main()
{
    float sum = 0;
    int n, i = 1;
    float numerator, denominator; //分子,分母

    printf("Please input a number:");
    scanf("%d", &n);
    numerator = 2;
    denominator = 1;
    for (i = 1; i <= n; i++)
    {
        sum += numerator / denominator;
        denominator = numerator;
        numerator = denominator + i;
    }
    printf("The sum is %.2f.\n", sum);
    getchar();
    getchar();

    return 0;
}