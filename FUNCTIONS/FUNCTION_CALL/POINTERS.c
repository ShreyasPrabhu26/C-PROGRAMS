#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
void address(int a);
void address_pointer(int *b);
void main()
{
    system("cls");
    int i=10;
    printf("THE VALUE OF I IS: %u\n",i);
    printf("THE ADDRESS OF I IS: %u \n",&i);
    address(i);
    address_pointer(i);
}
void address(int a)
{
    printf("THE ADDRESS OF I ACCORDING TO FUNCTION IS: %u\n",&a);
}

void address_pointer(int *b)
{
    printf("THE ADDRESS OF I ACCORDING TO  POINTER FUNCTION IS: %u\n",&b);
}
