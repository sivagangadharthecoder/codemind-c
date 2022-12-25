
// n=9 , sq= n*n=9*9=81, rem=sq%10, sum= sum+ rem, sq= sq/10 
#include<stdio.h>
int main()
{
	int n;         
	scanf("%d",&n); 
	int rem,sq,sum=0;
	sq=n*n;
                    
    while(sq!=0)
	{
	
		rem=sq%10;
		sum=sum+rem;
		sq=sq/10;
	}
	if(sum==n) 
	{
	printf("Neon Number");
	}
	else{
	printf("Not Neon Number");
	}
	               
                     
                     
					  
}