#include <stdio.h>

void main()
{
    int i,n;
    printf("***** MULTIPLICATION TABLE *****\n");
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        printf("%d X %d = %d \n",n,i,(n*i));
    }
}
