//COLOUR NAME
#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);
    if(s=='V' || s=='v')
    {
        printf("Violet");
    }
else if(s=='I' || s=='i')
{
    printf("Indigo");
}
else if(s=='B' || s=='b')
{
    printf("Blue");
}
else if(s=='G' || s=='g')
{
    printf("Green");
}
else if(s=='Y' || s=='y')
{
    printf("Yellow");
}
else if(s=='O' || s=='o')
{
    printf("Orange");
}
else if(s=='R' || s=='r')
{
    printf("Red");
}
else {
    printf("-1");
}
}

