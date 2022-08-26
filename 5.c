#include<stdio.h>
int main()
{
    int a[10],i;
    int min=99999;
    printf("Enter 10's no. ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("Smallest no. is %d",min);
    return 0;
}