#include <stdio.h>

void main()
{
    int students = 3,sub = 5;
    int marks[3][5];
    for(int i=0;i<3;i++)
        for(int j=0;j<5;j++)
        {
            printf("ENTER THE MARKS OF THE STUDENT %d IN SUBJECT %d :",(i+1),(j+1));
            scanf("%d",&marks[3][5]);
        }
    for(int i=0;i<3;i++)
        for(int j=0;j<5;j++)
        {
            printf("THE MARKS OF THE STUDENT %d IN SUBJECT %d IS: %d\n",(i+1),(j+1),marks[3][5]);
        }

}
