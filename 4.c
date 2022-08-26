#include<stdio.h>
int main()
{
    int a[10],i;
    int max=-1;
    printf("Enter 10's no. ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("Greatest no. is %d",max);
    return 0;
}