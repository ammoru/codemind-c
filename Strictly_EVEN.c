#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
      if(i%2!=0)
      {
          if(a[i]%2==0)
          {
              c++;
             
          }
      }
      
}
if(c>=1)
      printf("False");
      else
      printf("True");
}