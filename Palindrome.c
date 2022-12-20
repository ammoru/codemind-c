#include<stdio.h>
int main()
{
    int a,rev=0,rem;
    scanf("%d",&a);
    int tem=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(tem==rev)
    {
      printf("True");
    }
    else
    {
    printf("False");
    }
}