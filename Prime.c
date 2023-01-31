#include<stdio.h>
int main(){ int i,n; scanf("%d",&n); int factors=0; for(i=1;i<=n;i++) { if(n%i==0) { factors++; }}if(factors==2){ printf("Prime");}else{ printf("Not Prime");}}