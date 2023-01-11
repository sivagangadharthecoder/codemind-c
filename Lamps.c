#include<stdio.h>
int main()
{ int n,k,x,y,a; scanf("%d%d%d%d",&n,&k,&x,&y); if(n==k) { a=x*n; } else if(n!=k) { if(x>y) { a=(x*k)+(n-k)*y; } else { a=(x*k)+(n-k)*x; } } printf("%d",a);}