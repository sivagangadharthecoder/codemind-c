#include<stdio.h>
int main()
{
    int t; 
    scanf("%d",&t); while(t--) { int n,i,p=1; scanf("%d",&n); for(i=1;i<=n;i++) p *=i; printf("%d
",p); }}