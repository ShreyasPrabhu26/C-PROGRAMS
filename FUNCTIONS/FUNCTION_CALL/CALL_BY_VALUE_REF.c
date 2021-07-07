#include <stdio.h>

void swap_value(int a,int b); //USING CALL BY VALUE...!!!!!!!!
void swap_ref(int *a,int *b); //USING CALL BY REFERENCE...!!!!!!!!

void main()
{
    int a=10,b=20;
    printf("THE VALUES OF A AND B IS %d and %d \n",a,b);
    swap_value(a,b);//WILL NOT WORK SINCE IT ONLY SENDS THE COPY OF THE VALUES
    swap_ref(&a,&b);//WILL WORK SINCE WE ARE PROVOIDING ADDRESS OF ACTUAL VARIABLE{IMAGINE GIVING THE ADDRESS OF YOUR LOCKER}
    printf("THE VALUES OF A AND B AFTER SWAP IS %d and %d \n",a,b);
}
void swap_value(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
}
void swap_ref(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
