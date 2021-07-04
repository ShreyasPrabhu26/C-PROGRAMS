#include <stdio.h>

void main()
{
    int year;
    printf("ENTER THE YEAR: ");
    scanf("%d",&year);
    if(year %4 == 0 && year %100 != 0 || year%400 ==0)
    {
        printf("%d IS A LEAP YEAR..!!1",year);
    }
    else
    {
         printf("%d IS NOT A LEAP YEAR..!!1",year);
    }
}