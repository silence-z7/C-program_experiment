#include<stdio.h>

int main()
{
    float num1,num2;
    float sum,mius;

    printf("Please input two numbers:");
    scanf("%f %f",&num1,&num2);
    sum=num1+num2;
    mius=num1-num2;
    printf("%g+%g=%g\n",num1,num2,sum);
    printf("%g+%g=%g\n",num1,num2,mius);
    getchar();
    getchar();
    
    return 0;
}