#include<stdio.h>
int main()
{
    int o=0,i,m,n; 
    scanf("%d%d" ,&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%6==0) o++;
        }
        printf("%d" ,o);
        }