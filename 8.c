#include<stdio.h>
int main()
{
    int a[10];
    int i,j,s=9999,ss=999999;
    printf("Enter 10's no. ");
    for(i=0; i<10; i++)
    scanf("%d",&a[i]);
    for(i=0; i<10; i++)
    {
        if(s>a[i])
            {   
                ss=s;
                s=a[i];
            }
         else
            {
                if(ss>a[i])
                ss=a[i];
            }       
    }
    printf("\n2nd Smallest is %d ",ss);
    return 0;
}