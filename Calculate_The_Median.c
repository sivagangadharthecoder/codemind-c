#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,swap;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]>a[j])
    		{
    			swap=a[i];
    			a[i]=a[j];
    			a[j]=swap;
    		}
    	 	
    	}	
	}
	printf("%d",a[n/2]);
}