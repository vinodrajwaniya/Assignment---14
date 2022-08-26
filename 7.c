#include<stdio.h>
int main()
{
    int a[10];
    int i,j,l=0,sl=0;
    printf("Enter 10's no. ");
    for(i=0; i<10; i++)
    scanf("%d",&a[i]);
    for(i=0; i<10; i++)
    {
        if(l<a[i])
            {   
                sl=l;
                l=a[i];
            }
         else
            {
                if(sl<a[i])
                sl=a[i];
            }       
    }
    printf("\n2nd largest is %d ",sl);
    return 0;
}