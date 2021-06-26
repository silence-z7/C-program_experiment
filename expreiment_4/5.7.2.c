#include <stdio.h>
int main()
{
    float eps, sum = 0;
    float term;
    int i = 1;

    printf("Please input a number:");
    scanf("%f", &eps);
    while ((term = 1 / (2 * (float)i - 1)) >= eps)
    {
        if (i % 2 == 0)
            sum -= term;
        else
            sum += term;
        i++;
    }
    printf("The sum is %.6f.\n", sum);
    getchar();
    getchar();

    return 0;
}