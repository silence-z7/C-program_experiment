#include<stdio.h>

int main()
{
    float f;//华氏温度
    float c;//摄氏温度

    printf("Please enter the Fahrenheit temperature:");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("The corresponding Celsius temperature is %.2f.",c);
    getchar();
    getchar();
    return 0;
}