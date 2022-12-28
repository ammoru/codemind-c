#include<stdio.h>
int main()
{
    int a;
    float u,s,k;
    scanf("%d",&a);
    if(a<199) u=1.20*a;
    else if(a>=200 && a<400) u=1.50*a;
    else if(a>=400 && a<600) u=1.80*a;
    else if(a>=600) u=2.00*a;
    if(u>=400)
    s=0.15*u;
    else
    s=100;
    k=u+s;
    printf("%.2f",k);
}
