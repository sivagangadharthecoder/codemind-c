#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    scanf("%d%d%d",&a,&b,&c);
    int o;
    if(a>c && b>c) sum=a+b;
    else if(a>b && c>b) sum=a+c;
    else if(b>a && c>a) sum=b+c;
    printf("%d",sum);
    
}