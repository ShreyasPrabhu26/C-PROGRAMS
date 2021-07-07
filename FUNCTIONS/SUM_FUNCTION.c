#include <stdio.h>
int sum(int a,int b);

void main()
{
    int a,b,c;
    printf("ENTER THE NUMBERS: \n");
    scanf("%d %d",&a,&b);
    c= sum(a,b);
    printf("SUM: %d\n",c);
    
}
int sum(int a,int b)
{
    return(a+b);
}