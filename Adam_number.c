#include <stdio.h>
int main()
{
    int num, temp, digit, sum = 0, rev = 0; 
    scanf("%d", &num);
    temp = num; 
    while (temp > 0)
    { 
        digit = temp % 10; 
        sum += digit * digit;
        temp /= 10;
        }
        temp = sum; 
        while (temp > 0) 
        {
            digit = temp % 10; 
            rev = rev * 10 + digit;
            temp /= 10; 
            
        }
        if (sum == rev)
        printf("True");
        else 
        printf("False"); 
        return 0;
    
}