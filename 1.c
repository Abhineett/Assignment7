#include<stdio.h>
void main()
{

    int n1=0,n2=1,nextterm,num;
    printf("Enter number=");
    scanf("%d",&num);
    printf("%d",n1);
    printf("%d",n2);
    for(int i=1;i<=num;i++)
    {
        nextterm=n1+n2;
        printf("%d",nextterm);

        n1=n2;
        n2=nextterm;
    }

}
