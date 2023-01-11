#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) 
    {
        int n,a,rem,rev=0; 
        scanf("%d",&n);
        a=n;
        while(a>0) 
        {
            rem=a%10;
            rev=rev * 10 +rem;
            a=a/10; 
            
        }
        if(rev==n) printf("True
"); else printf("False
"); }}