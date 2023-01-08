#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,c=0;
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            if(i*i==n)
            {
                c++;
                }
                }
                if(c==1) 
                printf("True
");
                else
                printf("False
");
                }
    
}