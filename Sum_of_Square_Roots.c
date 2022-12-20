#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float c=0,R;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=c+sqrt(i);
       // R=sqrt(c);
    }
    printf("%.2f",c);
}