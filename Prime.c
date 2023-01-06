#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,count=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    printf("Prime");
    else
    printf("Not Prime");
}