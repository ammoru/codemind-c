#include<stdio.h>
int main()
{
    int n,i,k1=5,k=20,b=2;
    scanf("%d",&n);
    printf("3 -2 ");
    for(i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            printf("%d ",k1);
            k1=(k1*3)-4;
        }
        else
        {
            printf("%d ",b);
            b=b+k;
            k=k*5;
        }
    }
}