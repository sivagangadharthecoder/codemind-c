#include<stdio.h>
int main()
{
    int i,n,factors=0; 
    scanf("%d",&n); 
    for(i=1;i<=n;i++) 
    {
        if(n%i==0) 
        { 
            factors++; 
            
        }
        }
        if(factors==2)
        {
            printf("prime"); 
            
        } 
else{
    printf("not a prime"); 
    
}

    
}