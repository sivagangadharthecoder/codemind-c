#include<stdio.h>
int main ()
{
	int a=0,b=1;
	int n,fibonacci;
	scanf("%d",&n);		
	printf("%d %d",a,b);
	for (int i=2;i<n;i++)
	{
		fibonacci=a+b;
		a=b;
		b=fibonacci;
		printf(" %d",fibonacci);
	}
}

