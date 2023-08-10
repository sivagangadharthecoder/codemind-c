#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    
    int cpt = t*s*b;
    printf("%d KB",cpt);
    
    return 0;
}