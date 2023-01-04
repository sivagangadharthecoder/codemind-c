#include<stdio.h>
int main()
{
    int u,v,w;
    scanf("%d%d%d",&u,&v,&w);
    int sum=0;
    if(v>u && w>u) sum=v+w;
    else if(u>v && w>v) sum=u+w;
    else if(u>w && v>w) sum=u+v;
    printf("%d",sum);
    
}