#include<stdio.h>
int main()
{
    int max(int,int);
    int a,b,c;
    int max_number;

    printf("Please input three numbers.\n");
    scanf("%d %d %d",&a,&b,&c);
    max_number=max(max(a,b),c);
    printf("The max number is %d.\n",max_number);
    system("pause");
    
    return 0;
}
int max(int x,int y)
{
    int z;
    z=x>y?x:y;
    return z;
}