#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    i=n%3;
    if(i==0) printf("NORMAL");
   
    else if(i==1) printf("HUGE");
     else if(i==2) printf("SMALL");
    
    
}