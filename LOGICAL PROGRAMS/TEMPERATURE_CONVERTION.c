#include <stdio.h>
#include <stdlib.h>

void main()
{
    int flag;
    float celcius, farenheight;
    printf("ENTER THE TEMPERATURE UNIT: 1>CELCIUS 2>FARENHEIGHT \n");
    scanf("%d", &flag);
    if (flag == 1)
    {
        printf("ENTER THE CELCIUS: ");
        scanf("%f", &celcius);
        farenheight = (celcius * 9 / 5) + 32;
        printf("FARENHIGHT: %f\n", farenheight); 
    }
    else if(flag==2)
    {
        printf("ENTER THE FARENHEIGHT: ");
        scanf("%f", &farenheight);
        celcius=(farenheight - 32)*(5/9);
        printf("CELCIUS: %f",celcius);
    }
    else
    {
        printf("WRONG ENTRY...\n");
        exit(0);
    }
    printf("---THANK YOU---\n");
}