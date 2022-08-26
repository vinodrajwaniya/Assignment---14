#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    float avg;
    printf("Enter 10's no. ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    sum=sum+a[i];
    
    avg=sum/10.0;
    printf("Avg. is %.2f",avg);
    return 0;
}