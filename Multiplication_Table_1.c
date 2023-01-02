#include<stdio.h>
int main()
{
    int t,r,v,i;
    scanf("%d",&t,&r);
    int tab;
    for(i=1;i<=12;i++)
    {
        v=t*i;
        printf("%d x %d = %d
",t,i,t*i);
    }
}