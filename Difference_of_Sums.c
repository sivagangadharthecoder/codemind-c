#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum,ssum=0,b; 
    scanf("%d",&n);
    for(i=1;i<=n;i++) ssum=ssum+(i*i);
    b=n*(n+1)/2; sum=pow(b,2); 
    printf("%d",sum-ssum);
    
}