#include <stdio.h>
int main()
{
    int m, i;

    printf("Please input a number:");
    scanf("%d", &m);
    for (i = 1; i < m; i++)
    {
        if (m % i == 0 && i != 1)
            break;
    }
    if (m == 1 || i < m)
        printf("NO\n");
    else if (i == m)
        printf("YES\n");
    getchar();
    getchar();
        
    return 0;
}
