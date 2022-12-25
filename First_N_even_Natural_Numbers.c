#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=n*2;i>1;i--)
    {
        if(i%2==0)
        printf("%d ",i);
    
    }
}