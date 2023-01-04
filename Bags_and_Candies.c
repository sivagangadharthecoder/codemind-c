#include<stdio.h>
int main()
{
	int n,k,m;
	scanf("%d%d%d",&n,&k,&m);
	int b;
	if(n%(k*m)==0) b=n/(k*m);
	else b=(n/(k*m))+1;
	printf("%d",b);
}