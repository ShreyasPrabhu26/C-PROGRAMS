#include <stdio.h>

void main()
{
    int array[30],i,n,r;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    printf("ENTER THE RANGE: ");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        array[i]= (n * (i+1));
    }
    for(i=0;i<r;i++)
    {
        printf("%d X %d = %d\n",n,(i+1),array[i]);
    }
}
