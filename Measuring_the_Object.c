#include<stdio.h>
int main(){ int w,x,y,z,a,b,c,d; scanf("%d%d%d%d",&w,&x,&y,&z); a=x+y; b=y+z; c=x+z; d=a+b+c; if(w==x||w==y||w==z||w==a||w==b||w==c||w==d) { printf("YES"); } else { printf("NO"); }}