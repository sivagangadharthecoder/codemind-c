#include<stdio.h>
int main(){ int n; scanf("%d",&n); int i,sum=0; int a[n]; for(i=0;i<n;i++) { scanf("%d",&a[i]); } for(i=0;i<n;i++) { if(a[i]%2!=0) { sum=sum+a[i]; } } printf("%d",sum);}