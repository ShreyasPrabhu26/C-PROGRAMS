#include <stdio.h>
float avg(int a,int b,int c);
void main()
{
    int a,b,c;
    float result;
    printf("ENTER THREE NUMBERS: \n");
    scanf("%d%d%d",&a,&b,&c);
    result = avg(a,b,c);
    printf("THE AVARAGE OF %d %d %d IS: %.3f ",a,b,c,result);
}
float avg(int a,int b,int c)
{
    return((a+b+c)/3);
}
