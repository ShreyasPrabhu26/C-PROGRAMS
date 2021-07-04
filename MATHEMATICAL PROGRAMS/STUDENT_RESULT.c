#include <stdio.h>

void main()
{
    int marks,p,c,m;
    printf("ENTER THE MARKS: ");
    scanf("%d",&marks);
    printf("PHYSICS: ");
    scanf("%d",&p);
    printf("CHEMISTRY: ");
    scanf("%d",&c);
    printf("MATHS: ");
    scanf("%d",&m);
    marks = ((marks/300)*100);
    if(marks >=40 || p>33 || c>33 || m>33)
    {
        printf("CONGRADULATIONS...NIM MAGA PASS..!!!\n");
    }
    else{
        printf("BETTER LUCK NEXT TIME..!!!\n");
    }
    printf("---THANK YOU---\n");
}
