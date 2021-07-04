#include <stdio.h>

void main()
{
   system("cls");
   int n;
   srand(time(0));//RESETS THE TIME...!!!!
   n= rand()%100; //GENERATES A RANDOM NUMBER BETWEEN 1 AND 100
   printf("THE NUMBER IS: %d",n);
}
