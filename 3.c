#include<stdio.h>
void main()
{
    int a[50],num,i;
    printf("enter total number=");
    scanf("%d",&num);
    printf("enter %d numbers",num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=1;i++)
    {
        if(a[i]==0&&a[i+1]==1)
        {
            goto a;

        }
        else
        {
            printf("not Fibonacci series.");
            break;
        }


    }
    a:
        {
            for(i=0;i<num;i++)
        {
            if(a[i]+a[i+1]==a[i+1+1])
                continue;

        }
        if(i==num-1)
        {
            printf("yes,This is Fibonacci series.");
        }
        }









}
