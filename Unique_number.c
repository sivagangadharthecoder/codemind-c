#include<stdio.h>
int main()
{
    int a[10],n,b=0,c=0,rem,i,j;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10; 
        n=n/10;
        a[b]=rem; 
        b++;
        }
        for(i=0;i<b;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]==a[j]) 
                {
                    c++;
                    }
                    }
                    }
                    if(c==0)
                    printf("Unique Number"); 
                    else 
                    printf("Not Unique Number");
    
}