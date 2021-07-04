#include <stdio.h>

void main()
{
    int i=0,skip;
    while(i<10)
    {
        if(i!=skip)
        continue;
        else
        printf("%d",i);
    }
}
