#include<stdio.h>
#include<math.h>
int main() 
{
    int n,i,k1=1,k2=2,a,b;
    scanf("%d",&n);
    printf("0 0 ");
    for(i=1;i<n;i++)
     {
         if(i%2!=0)
         {
           printf("%d ",k1);
           k1=(k1*2)+1;
            
         }else
         {
             printf("%d ",k2);
             k2=(k2*3)+2;
         }
     }
}