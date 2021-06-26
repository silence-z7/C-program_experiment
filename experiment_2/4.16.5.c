#include <stdio.h>
#include <math.h>

int main()
{
    float p;
    int n;
    float r; //年增长率

    while (scanf("%d", &n) != 0)
    {
        scanf("%f", &r);
        p = pow((1 + r), n);
        printf("%f\n", p);
    }
    getchar();
    getchar();
    getchar();
    return 0;
}