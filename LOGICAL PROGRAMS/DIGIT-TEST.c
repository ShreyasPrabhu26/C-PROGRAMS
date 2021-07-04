// USING ISDIGIT() FUNCTION------

#include <stdio.h>
#include <ctype.h>

void main()
{
    int a,b;
    printf("ENTER A NUMBER: ");
    scanf("%d",&a);
    b = isdigit(a);
    printf("THE FUNCTION VALUE IS: %d \n",b);
    if(b == 0)
    {
        printf("\nITS NOT A  DIGIT..\n");
    }
    else
    {
    printf("ITS A DIGIT...\n");
    }
    printf("---THANK YOU---\n");
}
