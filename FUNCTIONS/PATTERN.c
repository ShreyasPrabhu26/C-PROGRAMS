#include <stdio.h>
void pyramidpattern(int n);
void invertedpattern(int n);
void numberpattern(int n);
void main()
{
    int n = 5;
    system("cls");
    pyramidpattern(n);
    printf("----------\n");
    invertedpattern(n);
    printf("----------\n");
    numberpattern(n);
}
void pyramidpattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void invertedpattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}
void numberpattern(int n)
{
     int i, j;
             
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

