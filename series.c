/* an example program for series */
#include<stdio.h>
#include<math.h>
int main()
{
    int n; 
    scanf("%d",&n); 
    int a,b,i,k1=0,k2=0; 
    printf("0 "); 
    for(i=1;i<n;i++) 
    {
        if(i%2==0)
        {
            a=pow(2,k1); 
            printf("%d ",a); 
            k1++;
            }
            else
            {
                b=pow(3,k2); 
                printf("%d ",b); 
                k2++; 
                
            }
            }
}
            
            