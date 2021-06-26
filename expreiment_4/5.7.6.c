#include <stdio.h>
int main()
{
    char c;
    int letter = 0, space = 0, number = 0, others = 0;

    while ((c = getchar()) != '\n')
    {
        if (c == ' ')
            space++;
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letter++;
        else if (c >= '0' && c <= '9')
            number++;
        else
            others++;
    }
    printf("The number of letter is %d.\n", letter);
    printf("The number of number is %d.\n", number);
    printf("The number of space is %d.\n", space);
    printf("The number of the other character is %d.\n", others);
    getchar();
    getchar();

    return 0;
}