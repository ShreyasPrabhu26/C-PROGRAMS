#include <stdio.h>

void main()
{
    int i,n,sum=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    for(i=0;i<11;i++)
    {
        printf("%d x %d = %d \n",n,i,(n*i));
        sum = sum + (n*i);
    }
    printf("THE SUM OF THE MULTIPLICANT IS: %d",sum);
}
