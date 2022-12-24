#include<stdio.h>
int main()
{
    int i,m,n,a=0;
    scanf("%d%d" ,&m,&n); 
    for(i=m;i<=n;i++)
    {
        if(i%3==0) a++; 
        
    } 
    printf("%d" ,a);
    
}