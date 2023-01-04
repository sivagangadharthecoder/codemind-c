#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c;
	if(n%4==0) c=n/4;
	else c=(n/4)+1;
	printf("%d",c);
}