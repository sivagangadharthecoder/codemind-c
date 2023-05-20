#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,rev=0,r,temp;
        scanf("%d",&a);
        temp=a;
        while(a!=0)
        {
            r=a%10;
            rev=rev*10+r;
            a=a/10;
        }
        if(temp==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}