#include<stdio.h>
int main()
{
    int n,i,c=0,b;
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            c++;
        }
    }
    if(c>=1)
    printf("True");
    else
    printf("False");
}
