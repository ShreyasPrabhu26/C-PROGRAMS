#include <stdio.h>

void main()
{
    int n,sum=0,i=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    //for(i=0;i<=n;i++)
    //{sum=sum+1;}
    while(i<=n)
    {
     sum+=i;
     i++;
    }
    printf("THE SUM OF FIRST %d NUMBERS IS: %d",n,sum);

}
