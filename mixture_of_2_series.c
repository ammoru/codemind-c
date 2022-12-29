#include<stdio.h>
int main()
{
    int n,i,k1=1,k2=1;
    scanf("%d",&n);
    printf("0 0 ");
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",k1*2);
            k1++;
        }
        else
        {
        printf("%d ",k2);
        k2++;
        }
    }
}