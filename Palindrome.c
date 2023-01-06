#include<stdio.h>
int main()
{
    int n,o;
    scanf("%d",&n);
    int rem,rev=0;
    o=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==o)
    {
    printf("Palindrome");
    }
    else{
    printf("Not Palindrome");
    }
}