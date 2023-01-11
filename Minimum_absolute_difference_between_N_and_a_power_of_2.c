#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,i,c,d;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=pow(2,i);
        if(a>=b)
        { c=b;
        }
        if(b>a)
        { d=b; break;
        } 
        
    }
    if(a-c>d-a) printf("%d",d-a); else printf("%d",a-c);
    
}