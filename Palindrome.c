#include<stdio.h>
int main()
{
    int i,n,rev=0,rem;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
     {
         rem=n%10;
         rev=(rev*10)+rem;
         n=n/10;
     } 
     if(temp==rev)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}