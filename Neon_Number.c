#include<stdio.h>
int main()
{
    int a,rem,rev=0;
  scanf("%d",&a);
  int b=a*a;
  while(b!=0)
  { 
      rem=b%10;
      rev=rev+rem;
      b=b/10;
  }
  if(a==rev)
  printf("Neon Number");
  else
  printf("Not Neon Number");
}