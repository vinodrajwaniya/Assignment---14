#include<stdio.h>

int main()
{
    int a[10],i;
    int se=0,so=0;
    printf("Enter 10's no. ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            se=se+a[i];
        else 
            so=so+a[i];
    }
    printf("Sum of even is %d\n\n",se);
    printf("Sum of odd is %d",so);
    return 0;
}