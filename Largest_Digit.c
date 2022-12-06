#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,rem,lag=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
            if(lag<rem)
         { 
             lag=rem;
        }
        n=n/10;
    }
    printf("%d",lag);
}