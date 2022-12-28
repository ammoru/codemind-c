#include<stdio.h>
int main()
{
    int n,i,j,tem,k,l,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
    	for(j=0;j<(n-i);j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			tem=a[j];
    			a[j]=a[j+1];
    			a[j+1]=tem;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		k=a[i];
	}
	if(n%2==0)
	{
	    l=(n+1)/2;
	    printf("%d",a[l]);
	}
	if(n%2!=0)
	{
	    m=n/2;
	    printf("%d",a[m]);
	}
}