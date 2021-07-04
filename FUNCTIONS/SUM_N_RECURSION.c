#include <stdio.h>
int sum(int n);
void main()
{
    int n,result;
    printf("ENTER N: ");
    scanf("%d",&n);
    result = sum(n);
    printf("THE SUM OF N NUMBERS IS: %d",result);
}
int sum(int n)
{
    int c=n;
    if(n>0)
    {
    c = c + sum(n-1);
    return(c);
    }
}

