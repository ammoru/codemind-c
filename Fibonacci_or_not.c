#include<stdio.h>
int main()
{
    int i,a=0,b=1,n,c,cnt=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            cnt++;
            break;
        }
        a=b;
        b=c;
    }
    if(c==n)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
}