#include <stdio.h>

void main()
{
    int i,n,factorial=1;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=(factorial*i);
    }
    printf("THE FACTORIAL IS GIVEN BY: %d",factorial);
}
