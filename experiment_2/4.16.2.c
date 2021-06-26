#include<stdio.h>
#include<math.h>

int main()
{
    float num;

    printf("Please input a number:");
    scanf("%f",&num);
    printf("The result is %.1f",sqrt(num));
    getchar();
    getchar();
    return 0;
}