#include <stdio.h>

int main()
{
    int x;
    int y;

    scanf("%d", &x);
    if (x > 0)
        y = 1;
    else if (x == 0)
        y = 0;
    else
        y = -1;
    printf("y=%d", y);
    getchar();
    getchar();
    return 0;
}