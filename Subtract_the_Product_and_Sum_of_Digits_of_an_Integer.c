#include<stdio.h>
int main()
{
    int n,rem,sum=0,pro=1; 
    scanf("%d",&n);
    while(n>0) 
    {
        rem=n%10;
        sum=sum+rem; 
        pro=pro*rem; 
        n=n/10;
        }
        if(sum>pro)
        printf("%d",sum=pro);
        else 
        printf("%d",pro-sum);
    
}