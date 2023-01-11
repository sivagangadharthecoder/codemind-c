#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n); 
    if(n>999999999&&n<10000000000)
    {
        printf("Valid");
        } else
        {
            printf("Invalid"); 
            
        }
    
}