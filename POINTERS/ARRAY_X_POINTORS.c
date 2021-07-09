#include <stdio.h>

void main()
{
    int i,marks[4];
    int *ptr;
    // ptr = &marks[0];THE BELOW LINE IS EQVIVALENT TO THIS LINE..!!!
    ptr = marks;
    for(i=0;i<4;i++)
    {
        printf("ENTER THE MARKS OF STUDENT %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(i=0;i<4;i++)
    {
        printf("THE MARKS OF STUDENT %d IS: %d\n",i+1,marks[i]);
    }
}
