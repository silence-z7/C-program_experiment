#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    int min;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    min = num1 <= num2 ? num1 : num2;
    min = num3 <= min ? num3 : min;
    min = num4 <= min ? num4 : min;
    printf("%d\n", min);
    getchar();
    getchar();
    return 0;
}