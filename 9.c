#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 number ");
    for(i=0; i<10; i++)
    scanf("%d",&a[i]);
    printf("Reverse no is ");
    for(i=9; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}