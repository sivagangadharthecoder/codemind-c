#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int rem;
	int sum=0,product=1;
	while(n!=0)
	{
		rem=n%10, sum=sum+rem, product= product*rem, n=n/10;
	}
	if(product==sum)
	printf("Spy Number");
	else printf("Not Spy Number");
}