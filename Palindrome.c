#include<stdio.h>
int main() 
{
    int n,rev=0,rem,i; 
    scanf("%d",&n); 
    i=n;
    while (n!=0)
    {
        rem=n%10; 
        rev=rev*10+rem;
        n=n/10; 
        
    } 
    if(i==rev) 
    {
        printf("Palindrome");
    } 
    else
    {
        printf("Not Palindrome");
    }
    return 0;
    
}