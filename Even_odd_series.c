#include<stdio.h>
#include<math.h>
int main() 
{
    int n,i,k1=0,k2=2,a,b;
    scanf("%d",&n);
    printf("2 0 ");
    for(i=1;i<n;i++)
     {
         if(i%2!=0)
         {
             b=pow(2,k2);
             printf("%d ",b);
             k2++;
         }else 
         {
             a=pow(3,k1);
             printf("%d ",a);
             k1++;
         }
     }
}