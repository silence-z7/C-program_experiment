#include <stdio.h>

int main()
{
    int grade;

    scanf("%d", &grade);
    while (grade >= 0 && grade <= 100)
    {
        if (grade < 60)
            printf("Fail\n");
        else
            printf("Pass\n");
        scanf("%d", &grade);
    }
    getchar();
    getchar();
    return 0;
}