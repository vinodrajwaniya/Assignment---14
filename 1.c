#include<stdio.h>

int main()
{
    int a[10],i,sum=0;
    printf("Enter 10's number ");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("Sum of 10's no is %d",sum);
    return 0;
}