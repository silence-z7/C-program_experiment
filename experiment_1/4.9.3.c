#include<stdio.h>
int main()
{   
    int a,b;
    int max(int ,int);
    
    scanf("%d%d",&a,&b);
    printf("%d",max(a,b));
    return 0;
}
int max(int x,int y)
{
    int z;
    x>y?(z= x):(z= y);
    return z;
}