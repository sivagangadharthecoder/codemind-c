#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i); 
    int h,m; 
    h=i/60,m=i%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
    
}