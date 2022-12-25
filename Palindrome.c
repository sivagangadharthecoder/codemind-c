#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem,rev=0;
    int n1;
    n1=n;
    while(n!=0)
    {
        rem=n%10,rev=rev*10+rem,n=n/10;
    }
    if(n1==rev) printf("Palindrome");
    else printf("Not Palindrome");
}