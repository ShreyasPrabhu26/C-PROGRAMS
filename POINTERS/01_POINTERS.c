#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 10;
    int *j = &i;
    int **k = &j;
    printf("THE VALUE OF I IS:- %d \n", i);
    printf("THE VALUE OF I IS:- %u\n", *j);
    printf("THE VALUE OF J IS:- %u\n", j);
    printf("THE VALUE OF ADDRESS OF I IS:- %u\n",j);
    printf("THE VALUE OF ADDRESS OF J IS:- %u\n",k);

}