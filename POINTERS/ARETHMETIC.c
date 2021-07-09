#include <stdio.h>
#include<stdlib.h>
void main()
{
    int i=10;
    int *p;
    p = &i;
    printf("THE ADRESS OF I IS: %d \n",p);
    p++;//INCEMENTS THE VALUE OF P BY 4 {INTERGER -4;FLOAT -4;CHAR--1}
    printf("THE ADRESS OF I AFTER INCREMENT IS: %d ",p);
}

