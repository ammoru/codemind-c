#include<stdio.h>
int main()
{
    int n,i,se=0,so=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            se=se+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            so=so+a[i];
        }
    }
    printf("%d",se-so);
}