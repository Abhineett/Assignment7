#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers=");
    scanf("%d%d",&a,&b);
    if(coprime(a,b))
    {
        printf("%d and %d are co-prime number",a,b);
    }
    else
    {
        printf("%d and %d are not co-prime number",a,b);
    }

}
int coprime(int a,int b)
{
    int i,flag=1,min;
      min=a<b?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            flag=0;
            break;
        }
    }
    return(flag);

}





