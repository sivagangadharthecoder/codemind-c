#include<stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&c>b)
    {
        sum=a+c; 
        
    }
    else if(b>a&&c>a) 
    {
        sum=b+c;
    } else if(a>c&&b>c) 
    {
        sum=a+b;
    }
    printf("%d",sum); 
    
}