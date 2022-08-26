#include<stdio.h>
int main()
{
    int a[10],i;
    int b[10];
    printf("Enter 10 number ");
    for(i=0; i<10; i++)
    scanf("%d",&a[i]);
    for(i=0;i<=10; i++)
        b[i]=a[i];
    printf("Array of b is ");
    for(i=0; i<10; i++)
    printf("%d ",b[i]);
    return 0;
}