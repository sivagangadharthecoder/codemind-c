#include<stdio.h>
int main()
{
    float bs,hra,da; 
    scanf("%f%f%f",&bs,&hra,&da); 
    float pf,gs;
    {
    pf=0.12*bs,gs=bs+hra+da+pf; 
    printf("%0.2f
%0.2f",pf,gs);
    }
    
}