#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        c=c+i;
    }
    if(c==a)
    {
        printf("PERFECT");
    }
    else if(c<a)
    {
        printf("DEFICIENT");
    }
    else if(c>a)
    {
        printf("ABUNDANT");
    }
}