#include<stdio.h>
int main()
{
    int n,i,k1=1,k2=2;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",k1);
            k1=(k1*2)+1;
        }else
        {
        printf("%d ",k2);
        k2=(k2*3)+2;
    }}
}