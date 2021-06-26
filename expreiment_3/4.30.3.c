#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float s;
    float area, perimeter;

    scanf("%f,%f,%f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        perimeter = 2 * s;
        printf("area is %.2f\n", area);
        printf("perimeter is %.2f\n", perimeter);
    }
    else
        printf("These sides do not correspond to a valid triangle.\n");
    getchar();
    getchar();
    return 0;
}