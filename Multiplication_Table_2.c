#include<stdio.h>
int main()
{
    int t,r,v,i;
    scanf("%d%d",&t,&r);
    int tab;
    for(i=1;i<=r;i++)
    {
        v=t*i;
        printf("%d x %d = %d
",t,i,t*i);
    }
}